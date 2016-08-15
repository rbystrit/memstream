//
// Created by rbyst on 8/11/2016.
//
#include <memstream/allocator.h>
#include <cstdlib>

namespace rbystrit {
namespace memstream {

template<typename T>
inline void __swapptr(T* a, T* b) {
    T c= *a;
    *a = *b;
    *b=c;
}

PageBlock::PageBlock(size_t page_size, size_t num_pages) {
    block_desc = (struct BlockDescriptor *) malloc(
            sizeof(BlockDescriptor) + sizeof(uint8_t *) * num_pages +
            num_pages * page_size);

    block_desc->pages_used = 0;
    block_desc->num_pages = num_pages;
    block_desc->page_size = page_size;

    block_desc->data_start = reinterpret_cast<uint8_t *>(block_desc) + sizeof(BlockDescriptor) +
                                    sizeof(uint8_t *) * block_desc->num_pages;
    block_desc->pages = (uint8_t **) (reinterpret_cast<uint8_t *>(block_desc) + sizeof(BlockDescriptor));

    uint8_t **next_page_ref = block_desc->pages;
    uint8_t *next_page = block_desc->data_start;

    for (int i = 0; i < block_desc->num_pages; i++) {
        *next_page_ref = next_page;
        next_page_ref++;
        next_page += page_size;
    }

    block_desc->data_end = next_page;
}

bool PageBlock::deallocate(uint8_t *page) {
    if (!is_mine(page) || block_desc->pages_used == 0)
        __throw_bad_alloc();

    uint64_t page_num = (page - block_desc->data_start) / block_desc->page_size;
    swap(block_desc->pages[page_num], block_desc->pages[block_desc->pages_used-1]);
    block_desc->pages_used--;
}

PageBlock::PageBlock(PageBlock &&other) {
    block_desc = other.block_desc;
    other.__clearout();
}

PageBlock &PageBlock::operator=(PageBlock &&other) {
    swap(*block_desc, *other.block_desc);
    return *this;
}

PageAllocator::PageAllocator(size_t page_size, size_t pages_per_block)
        : _page_size(page_size), _pages_per_block(pages_per_block),
          _page_blocks(new PageBlockVector()),
          _free_list(new forward_list<uint64_t>()){
    _page_blocks->push_back(move(unique_ptr<PageBlock>(new PageBlock(page_size, pages_per_block))));
    _free_list->push_front(0);
}

PageAllocator::PageAllocator(PageAllocator &&other) {
    _page_blocks = move(other._page_blocks);
    _page_size = other._page_size;
    _pages_per_block = other._pages_per_block;
    _free_list = move(other._free_list);
}

PageAllocator &PageAllocator::operator=(PageAllocator &&other) {
    swap(_page_blocks, other._page_blocks);
    swap(_page_size, other._page_size);
    swap(_pages_per_block, other._pages_per_block);
    swap(_free_list, other._free_list);
    return *this;
}

uint8_t *PageAllocator::allocate() {

    while(!_free_list->empty() && !_page_blocks->at(_free_list->front())->can_allocate())
        _free_list->pop_front();
    if (_free_list->empty()){
        _page_blocks->push_back(move(unique_ptr<PageBlock>(new PageBlock(_page_size, _pages_per_block))));
        _free_list->push_front(_page_blocks->size()-1);
    }
    return _page_blocks->at(_free_list->front())->allocate();
}

void PageAllocator::deallocate(uint8_t *page) {
    for( uint64_t i=0; i<_page_blocks->size(); i++){
        if (_page_blocks->at(i)->is_mine(page)){
            _page_blocks->at(i)->deallocate(page);
            if( _free_list->empty() || _free_list->front() != i){
                _free_list->push_front(i);
            }
            return;
        }
    }

    __throw_bad_alloc();
}
}
}