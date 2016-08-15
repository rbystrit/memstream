//
// Created by rbyst on 8/13/2016.
//

#include <memstream.h>
#include <cstring>
#include <fstream>

namespace rbystrit {
namespace memstream {
membuf::membuf(shared_ptr<PageAllocator> allocator)
        : streambuf(),
          _allocator(allocator), _page_size(allocator->page_size()), _pages(new vector<uint8_t *>()), _position(0),
          _posmax(0), _current_page(0), _current_page_start(0) {
    _pages->push_back(_allocator->allocate());
}

membuf::membuf(const membuf &rhs) : streambuf(), _allocator(rhs._allocator), _page_size(rhs._page_size),
                                    _pages(new vector<uint8_t *>()), _position(rhs._position), _posmax(rhs._posmax),
                                    _current_page(rhs._current_page),
                                    _current_page_start(rhs._current_page_start) {
    for (int i = 0; i < rhs._pages->size(); i++) {
        _pages->push_back(_allocator->allocate());
        memcpy(_pages->at(_pages->size() - 1), rhs._pages->at(_pages->size() - 1), _page_size);
    }

    setg(rhs.eback(), rhs.gptr(), rhs.egptr());
    setp(rhs.pbase(), rhs.epptr());
    pbump(static_cast<int>(rhs.pptr() - rhs.pbase()));
}

membuf::membuf(membuf &&rhs) : streambuf(), _page_size(rhs._page_size), _position(rhs._position), _posmax(rhs._posmax),
                               _current_page(rhs._current_page), _current_page_start(rhs._current_page_start) {
    _allocator = rhs._allocator;
    _pages = move(rhs._pages);
}

membuf &membuf::operator=(const membuf &rhs) {
    clear();
    _position = rhs._position;
    _posmax = rhs._posmax;
    _allocator = rhs._allocator;
    _page_size = rhs._page_size;
    _current_page = rhs._current_page;
    _current_page_start = rhs._current_page_start;

    for (int i = 0; i < rhs._pages->size(); i++) {
        _pages->push_back(_allocator->allocate());
        memcpy(_pages->at(_pages->size() - 1), rhs._pages->at(_pages->size() - 1), _page_size);
    }

    setg(rhs.eback(), rhs.gptr(), rhs.egptr());
    setp(rhs.pbase(), rhs.epptr());
    pbump(static_cast<int>(rhs.pptr() - rhs.pbase()));
}

membuf &membuf::operator=(membuf &&rhs) {
    std::swap(_allocator, rhs._allocator);
    std::swap(_pages, rhs._pages);
    std::swap(_page_size, rhs._page_size);
    std::swap(_position, rhs._position);
    std::swap(_posmax, rhs._posmax);
    std::swap(_current_page, rhs._current_page);
    std::swap(_current_page_start, rhs._current_page_start);

    setg(rhs.eback(), rhs.gptr(), rhs.egptr());
    setp(rhs.pbase(), rhs.epptr());
    pbump(static_cast<int>(rhs.pptr() - rhs.pbase()));
}

void membuf::clear() {

    if (_pages.get() != nullptr) {
        for (size_t i = 0; i < _pages->size(); i++)
            _allocator->deallocate(_pages->at(i));
        _pages->clear();
    }

    _allocator = nullptr;
    _position = 0;
    _posmax = 0;
    _current_page = 0;
    _current_page_start = 0;
}

membuf::~membuf() {
    clear();
}

streampos membuf::seekoff(streamoff off, ios_base::seekdir way,
                          ios_base::openmode which) {
    streampos sp;
    if (way == ios_base::seekdir::_S_cur)
        sp = _position + off;
    else if (way == ios_base::seekdir::_S_beg)
        sp = off;
    else if (way == ios_base::seekdir::_S_end)
        sp = _posmax - off;

    return seekpos(sp, which);
}

streampos membuf::seekpos(streampos sp, ios_base::openmode which) {
    if (sp < 0 || sp > _posmax)
        return -1;
    _position = sp;
    _current_page = static_cast<size_t>(_position) / _page_size;
    _current_page_start = _current_page * _page_size;

    if (_current_page == _pages->size()) {
        _pages->push_back(_allocator->allocate());
    }

    update_pointers();
    return _position;
}

void membuf::update_pointers() {
    setg(reinterpret_cast<char *>(_pages->at(_current_page) + _position - _current_page_start),
         reinterpret_cast<char *>(_pages->at(_current_page) + _position - _current_page_start),
         reinterpret_cast<char *>(_pages->at(_current_page) + _position - _current_page_start));

    setp(reinterpret_cast<char *>(_pages->at(_current_page) + _position - _current_page_start),
         reinterpret_cast<char *>(_pages->at(_current_page) + _position - _current_page_start));

}
streamsize membuf::xsputn(const char *s, streamsize n) {
    if (n == 0)
        return n;

    size_t head_size = std::min(_page_size - (static_cast<size_t>(_position) - _current_page_start),
                                static_cast<size_t >(n));
    size_t num_pages = (static_cast<size_t >(n) - head_size) / _page_size;
    size_t tail_size = (static_cast<size_t >(n) - head_size - num_pages * _page_size);

    memcpy(_pages->at(_current_page) + (static_cast<size_t>(_position) - _current_page_start), s, head_size);
    s += head_size;
    _position += head_size;

    for (int i = 0; i < num_pages; i++) {
        _current_page++;
        if (_current_page >= _pages->size())
            _pages->push_back(_allocator->allocate());
        memcpy(_pages->at(_current_page), s, _page_size);
        s += _page_size;
        _position += _page_size;
    }

    if (tail_size > 0) {
        _current_page++;
        if (_current_page >= _pages->size())
            _pages->push_back(_allocator->allocate());
        memcpy(_pages->at(_current_page), s, tail_size);
        _position += tail_size;
    }

    if (_position > _posmax)
        _posmax = _position;

    seekpos(_position);
    return n;
}

int membuf::overflow(int c) {
    if (c == EOF)
        return EOF;
    char cc = traits_type::to_char_type(c);

    if (static_cast<size_t>(_position) - _current_page_start == _page_size) {
        _current_page++;
        if (_current_page >= _pages->size())
            _pages->push_back(_allocator->allocate());
        _current_page_start = static_cast<size_t>(_position);
    }

    _pages->at(_current_page)[static_cast<size_t>(_position) - _current_page_start] = static_cast<uint8_t >(cc);
    _position = static_cast<size_t>(_position) + 1;
    if (_position > _posmax)
        _posmax = _position;

    seekpos(_position);
    return traits_type::to_int_type(cc);
}

streamsize membuf::xsgetn(char *s, streamsize n) {
    n = min(n, _posmax - _position);

    if (n == 0)
        return n;

    size_t head_size = std::min(_page_size - (static_cast<size_t>(_position) - _current_page_start),
                                static_cast<size_t >(n));
    size_t num_pages = (static_cast<size_t >(n) - head_size) / _page_size;
    size_t tail_size = (static_cast<size_t >(n) - head_size - num_pages * _page_size);

    memcpy(s, _pages->at(_current_page) + (static_cast<size_t>(_position) - _current_page_start), head_size);
    s += head_size;
    _position += head_size;

    for (int i = 0; i < num_pages; i++) {
        _current_page++;
        if (_current_page >= _pages->size())
            _pages->push_back(_allocator->allocate());
        memcpy(s, _pages->at(_current_page), _page_size);
        s += _page_size;
        _position += _page_size;
    }

    if (tail_size > 0) {
        _current_page++;
        if (_current_page >= _pages->size())
            _pages->push_back(_allocator->allocate());
        memcpy(s, _pages->at(_current_page), tail_size);
        _position += tail_size;
    }

    if (_position > _posmax)
        _posmax = _position;

    seekpos(_position);
    return n;
}

streamsize membuf::showmanyc() {
    return _posmax - _position;
}

int membuf::underflow() {
    if (_position == _current_page_start + _page_size) {
        if (_current_page == _pages->size() - 1)
            return EOF;
        return _pages->at(_current_page + 1)[0];
    }
    return _pages->at(_current_page)[static_cast<size_t>(_position) - _current_page_start];
}

int membuf::uflow() {
    int ret = underflow();
    if (ret != EOF) {
        _position = static_cast<size_t>(_position) + 1;
        seekpos(_position);
    }
    return ret;
}

int membuf::pbackfail(int c) {
    if (c == EOF)
        return c;

    char cc = traits_type::to_char_type(c);
    if (_position == _current_page_start) {
        if (_current_page == 0)
            return EOF;
        _current_page--;
    }

    _position = static_cast<size_t>(_position) - 1;
    seekpos(_position);
    _pages->at(_current_page)[static_cast<size_t>(_position) - _current_page_start] = static_cast<uint8_t >(cc);
    return traits_type::to_int_type(_pages->at(_current_page)[static_cast<size_t>(_position) - _current_page_start]);
}

}
}