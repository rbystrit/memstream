//
// Created by rbyst on 8/13/2016.
//

#ifndef MEMSTREAM_ALLOCATOR_TEST_H
#define MEMSTREAM_ALLOCATOR_TEST_H

#include <memstream/api.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cstring>
#include <iostream>
#include <vector>

namespace rbystrit {
namespace memstream {

#define TEST_PAGE_SIZE static_cast<size_t>(1024)

class AllocatorTest : public CppUnit::TestFixture {
CPPUNIT_TEST_SUITE(AllocatorTest);
        CPPUNIT_TEST(test_allocate);
        CPPUNIT_TEST(test_deallocate);
        CPPUNIT_TEST(test_deallocate_different_blocks);
        CPPUNIT_TEST(test_smallest_block);
        CPPUNIT_TEST(test_move_constructor);
        CPPUNIT_TEST(test_move_assign);
    CPPUNIT_TEST_SUITE_END();
public:

    void test_move_constructor(){
        shared_ptr<PageAllocator> ptr = make_shared<PageAllocator>(PageAllocator(1,1));
        ptr->allocate();
    }

    void test_move_assign() {
        PageAllocator p = PageAllocator(1,1);
        PageAllocator p1 = move(p);

        p1.allocate();
    }

    void test_smallest_block() {
        PageAllocator allocator(1,1);
        uint8_t* page1 = allocator.allocate();
        uint8_t* page2 = allocator.allocate();

        allocator.deallocate(page2);
        allocator.deallocate(page1);

        CPPUNIT_ASSERT_EQUAL(page1, allocator.allocate());
        CPPUNIT_ASSERT_EQUAL(page2, allocator.allocate());
    }
    void test_allocate() {

        PageAllocator allocator(TEST_PAGE_SIZE, 2);

        CPPUNIT_ASSERT_EQUAL(TEST_PAGE_SIZE, allocator.page_size());

        vector<uint8_t *> pages;
        for (int i = 0; i < 4; i++)
            pages.push_back(allocator.allocate());

        CPPUNIT_ASSERT_EQUAL(TEST_PAGE_SIZE, static_cast<size_t>(pages.at(1) - pages.at(0)));
        CPPUNIT_ASSERT_EQUAL(TEST_PAGE_SIZE, static_cast<size_t>(pages.at(3) - pages.at(2)));

        for (unsigned int i = 0; i < 4; i++)
            memset(pages.at(i), i + 1, TEST_PAGE_SIZE);

        for (unsigned int i = 0; i < 4; i++) {
            for (unsigned int j = 0; j < TEST_PAGE_SIZE; j++) {
                CPPUNIT_ASSERT_EQUAL(i + 1, static_cast<unsigned int>(pages.at(i)[j]));
            }
        }
    }

    void test_deallocate(){
        PageAllocator allocator(TEST_PAGE_SIZE, 3);

        CPPUNIT_ASSERT_EQUAL(TEST_PAGE_SIZE, allocator.page_size());

        vector<uint8_t *> pages;
        for (int i = 0; i < 6; i++)
            pages.push_back(allocator.allocate());

        allocator.deallocate(pages.at(4));
        allocator.deallocate(pages.at(3));
        CPPUNIT_ASSERT_EQUAL(pages.at(3), allocator.allocate());
        CPPUNIT_ASSERT_EQUAL(pages.at(4), allocator.allocate());
    }

    void test_deallocate_different_blocks(){
        PageAllocator allocator(TEST_PAGE_SIZE, 3);

        CPPUNIT_ASSERT_EQUAL(TEST_PAGE_SIZE, allocator.page_size());

        vector<uint8_t *> pages;
        for (int i = 0; i < 6; i++)
            pages.push_back(allocator.allocate());

        allocator.deallocate(pages.at(4));
        allocator.deallocate(pages.at(2));
        allocator.deallocate(pages.at(3));
        CPPUNIT_ASSERT_EQUAL(pages.at(3), allocator.allocate());
        CPPUNIT_ASSERT_EQUAL(pages.at(4), allocator.allocate());
        CPPUNIT_ASSERT_EQUAL(pages.at(2), allocator.allocate());
    }
};

}
}

#endif //MEMSTREAM_ALLOCATOR_TEST_H
