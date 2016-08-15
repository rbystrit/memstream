//
// Created by rbyst on 8/11/2016.
//

#ifndef MEMSTREAM_MEMSTREAM_ALLOCATOR_H
#define MEMSTREAM_MEMSTREAM_ALLOCATOR_H

#include <memory>
#include <vector>
#include <forward_list>

using namespace std;
namespace rbystrit {
namespace memstream {


class PageBlock {
public:
    PageBlock(size_t page_size, size_t num_pages);

    PageBlock(PageBlock &&other);

    PageBlock &operator=(PageBlock &&other);

    ~PageBlock(){
        free(block_desc);
        __clearout();
    }

    bool can_allocate() const {
        return block_desc->pages_used < block_desc->num_pages;
    }

    bool is_mine(uint8_t* page) const {
        return page >= block_desc->data_start && page <= block_desc->data_end;
    }

    uint8_t *allocate() {
        if (can_allocate()) {
            return block_desc->pages[block_desc->pages_used++];
        }

        __throw_bad_alloc();
    }

    bool deallocate(uint8_t* page);


private:
    struct BlockDescriptor {
    public:
        uint8_t*    data_end;
        uint8_t*    data_start;
        size_t num_pages;
        size_t page_size;
        uint8_t**   pages;
        size_t pages_used;
    };

    struct BlockDescriptor* block_desc;
    PageBlock(const PageBlock &other);
    PageBlock &operator=(const PageBlock &other);

    void __clearout() {
        block_desc = nullptr;
    }
};

typedef vector<unique_ptr<PageBlock>> PageBlockVector;

class PageAllocator {
public:
    PageAllocator(size_t page_size, size_t pages_per_block);

    PageAllocator(PageAllocator &&other);

    PageAllocator &operator=(PageAllocator &&other);

    uint8_t *allocate();
    void deallocate(uint8_t*);
    size_t page_size() const { return _page_size; }

private:
    unique_ptr<PageBlockVector> _page_blocks;
    unique_ptr<forward_list<uint64_t>> _free_list;

    size_t _page_size;
    size_t _pages_per_block;

    PageAllocator(const PageAllocator &other);

    PageAllocator &operator=(const PageAllocator &other);

};


}
}
#endif //MEMSTREAM_MEMSTREAM_ALLOCATOR_H
