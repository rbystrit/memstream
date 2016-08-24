//
// Created by rbyst on 8/13/2016.
//

#ifndef MEMSTREAM_MEMSTREAM_MEMSTREAM_H
#define MEMSTREAM_MEMSTREAM_MEMSTREAM_H

#include <memstream/allocator.h>
#include <iostream>
#include <memory>
#include <cstring>

using namespace std;
namespace rbystrit {
namespace memstream {
class membuf : public std::streambuf {
public:
    membuf(shared_ptr<PageAllocator> allocator);

    membuf(const membuf &rhs);

    membuf(membuf &&rhs);

    membuf &operator=(const membuf &rhs);

    membuf &operator=(membuf &&rhs);

    ~membuf();

    char*    get_content_copy(){
        char*   output = new char[static_cast<size_t >(_posmax)];
        char*   current_page = output;

        for( size_t i=0; i< _pages->size()-1; i++, current_page += _page_size)
            memcpy(current_page, _pages->at(i), _page_size);
        memcpy(current_page, _pages->at(_pages->size()-1), static_cast<size_t >(_posmax) - (_pages->size()-1)*_page_size);

        return output;
    }

    size_t read_from(istream& is, size_t count);
    size_t write_to(ostream& os, size_t count);

protected:
    virtual streampos seekoff(streamoff off, ios_base::seekdir way,
                              ios_base::openmode which = ios_base::in | ios_base::out) override;

    virtual streampos seekpos(streampos sp, ios_base::openmode which = ios_base::in | ios_base::out) override;

    virtual streamsize xsputn(const char *s, streamsize n) override;

    virtual int overflow(int c = EOF) override;

    virtual streamsize xsgetn(char *s, streamsize n) override;

    virtual int underflow() override;

    virtual int uflow() override;

    virtual int pbackfail(int c = EOF) override;
    virtual streamsize showmanyc() override;
private:
    shared_ptr<PageAllocator> _allocator;
    unique_ptr<vector<uint8_t *>> _pages;
    size_t _page_size;
    streampos _position;
    streampos _posmax;
    size_t _current_page;
    size_t _current_page_start;
    void clear();
    void update_pointers();
};

class memstream : public iostream{
private:
    membuf* buffer;
public:
    memstream(shared_ptr<PageAllocator> allocator) : iostream(new membuf(allocator)) {
        buffer = static_cast<membuf*>(rdbuf());
    }

    ~memstream(){
        delete buffer;
    }

    char*   get_content_copy(){
        return buffer->get_content_copy();
    }

    size_t read_form(istream& is, size_t count) { return buffer->read_from(is,count);}
    size_t write_to(ostream& os, size_t count) { return buffer->write_to(os, count);}
};
}
}

#endif //MEMSTREAM_MEMSTREAM_MEMSTREAM_H
