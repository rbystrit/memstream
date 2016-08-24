//
// Created by rbyst on 8/13/2016.
//

#ifndef MEMSTREAM_MEMBUF_TEST_H
#define MEMSTREAM_MEMBUF_TEST_H

#include <memstream/api.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cstring>

using namespace std;
namespace rbystrit {
namespace memstream {
class MembufTest : public CppUnit::TestFixture {
CPPUNIT_TEST_SUITE(MembufTest);
        CPPUNIT_TEST(test_create);
        CPPUNIT_TEST(test_sxn_single_page);
        CPPUNIT_TEST(test_sxn_multi_page);
        CPPUNIT_TEST(test_move_constructor);
        CPPUNIT_TEST(test_move_assignment);
        CPPUNIT_TEST(test_copy_constructor);
        CPPUNIT_TEST(test_copy_assignment);
        CPPUNIT_TEST(test_sxn_smallest_page);
        CPPUNIT_TEST(test_snc);
        CPPUNIT_TEST(test_memstream);
        CPPUNIT_TEST(test_get_content_copy);
        CPPUNIT_TEST(test_read_write_round_trip);
        CPPUNIT_TEST(test_raw_membuf_get);
        CPPUNIT_TEST(test_raw_membuf_read);
        CPPUNIT_TEST(test_raw_membuf_seek);
    CPPUNIT_TEST_SUITE_END();

public:
    void test_create() {
        membuf mb(make_shared<PageAllocator>(PageAllocator(16, 1)));
    }

    void test_sxn_single_page() {
        char test_str[4];
        membuf mb(make_shared<PageAllocator>(PageAllocator(8, 1)));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.sputn("abc", 3)));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.pubseekoff(0, ios_base::seekdir::_S_cur)));
        mb.pubseekoff(0, ios_base::seekdir::_S_beg);

        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.sgetn(test_str, 3)));
        test_str[3] = 0;

        CPPUNIT_ASSERT(strncmp("abc", test_str, 3) == 0);
    }

    void test_sxn_multi_page() {
        char test_str[4];
        char test_str2[18];

        membuf mb(make_shared<PageAllocator>(PageAllocator(8, 1)));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.sputn("abc", 3)));
        CPPUNIT_ASSERT_EQUAL(17, static_cast<int>(mb.sputn("12345678901234567", 17)));
        CPPUNIT_ASSERT_EQUAL(20, static_cast<int>(mb.pubseekoff(0, ios_base::seekdir::_S_cur)));

        mb.pubseekoff(0, ios_base::seekdir::_S_beg);

        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.sgetn(test_str, 3)));
        CPPUNIT_ASSERT_EQUAL(17, static_cast<int>(mb.sgetn(test_str2, 17)));
        test_str2[17] = 0;

        CPPUNIT_ASSERT(strncmp("12345678901234567", test_str2, 17) == 0);
    }

    void test_sxn_smallest_page() {
        char test_str[4];
        char test_str2[18];

        membuf mb(make_shared<PageAllocator>(PageAllocator(1, 1)));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.sputn("abc", 3)));
        CPPUNIT_ASSERT_EQUAL(17, static_cast<int>(mb.sputn("12345678901234567", 17)));
        CPPUNIT_ASSERT_EQUAL(20, static_cast<int>(mb.pubseekoff(0, ios_base::seekdir::_S_cur)));

        mb.pubseekoff(0, ios_base::seekdir::_S_beg);

        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.sgetn(test_str, 3)));
        CPPUNIT_ASSERT_EQUAL(17, static_cast<int>(mb.sgetn(test_str2, 17)));
        test_str2[17] = 0;

        CPPUNIT_ASSERT(strncmp("12345678901234567", test_str2, 17) == 0);
    }

    void test_snc() {
        membuf mb(make_shared<PageAllocator>(PageAllocator(2, 2)));
        CPPUNIT_ASSERT(mb.sputc('a') != EOF);
        CPPUNIT_ASSERT(mb.sputc('b') != EOF);
        CPPUNIT_ASSERT(mb.sputc('c') != EOF);
        CPPUNIT_ASSERT(mb.sputc('d') != EOF);
        CPPUNIT_ASSERT_EQUAL(4, static_cast<int>(mb.pubseekoff(0, ios_base::seekdir::_S_cur)));
        mb.pubseekoff(0, ios_base::seekdir::_S_beg);
        CPPUNIT_ASSERT_EQUAL('a', static_cast<char>(mb.sbumpc()));
        CPPUNIT_ASSERT_EQUAL('b', static_cast<char>(mb.sbumpc()));
        CPPUNIT_ASSERT_EQUAL('c', static_cast<char>(mb.sbumpc()));
        CPPUNIT_ASSERT_EQUAL('d', static_cast<char>(mb.sbumpc()));

        CPPUNIT_ASSERT(mb.sputbackc('h') != EOF);
        CPPUNIT_ASSERT(mb.sputbackc('g') != EOF);
        CPPUNIT_ASSERT(mb.sputbackc('f') != EOF);
        CPPUNIT_ASSERT(mb.sputbackc('e') != EOF);

        CPPUNIT_ASSERT_EQUAL(0, static_cast<int>(mb.pubseekoff(0, ios_base::seekdir::_S_cur)));
        CPPUNIT_ASSERT_EQUAL('e', static_cast<char>(mb.sbumpc()));
        CPPUNIT_ASSERT_EQUAL('f', static_cast<char>(mb.sbumpc()));
        CPPUNIT_ASSERT_EQUAL('g', static_cast<char>(mb.sbumpc()));
        CPPUNIT_ASSERT_EQUAL('h', static_cast<char>(mb.sbumpc()));

    }

    void test_move_constructor() {
        char test_str[4];
        shared_ptr<membuf> p = make_shared<membuf>(membuf(make_shared<PageAllocator>(PageAllocator(16, 1))));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(p->sputn("abc", 3)));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(p->pubseekoff(0, ios_base::seekdir::_S_cur)));
        p->pubseekoff(0, ios_base::seekdir::_S_beg);

        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(p->sgetn(test_str, 3)));
        test_str[3] = 0;
        CPPUNIT_ASSERT(strncmp("abc", test_str, 3) == 0);
    }

    void test_copy_constructor() {
        char test_str[4];
        membuf mb(make_shared<PageAllocator>(PageAllocator(8, 1)));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.sputn("abc", 3)));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.pubseekoff(0, ios_base::seekdir::_S_cur)));

        membuf mb1 = membuf(mb);

        mb.pubseekoff(0, ios_base::seekdir::_S_beg);
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.sgetn(test_str, 3)));
        test_str[3] = 0;

        CPPUNIT_ASSERT(strncmp("abc", test_str, 3) == 0);

        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb1.pubseekoff(0, ios_base::seekdir::_S_cur)));
        mb1.pubseekoff(0, ios_base::seekdir::_S_beg);

        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb1.sputn("def", 3)));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb1.pubseekoff(0, ios_base::seekdir::_S_cur)));

        mb1.pubseekoff(0, ios_base::seekdir::_S_beg);
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb1.sgetn(test_str, 3)));
        test_str[3] = 0;

        CPPUNIT_ASSERT(strncmp("def", test_str, 3) == 0);
    }

    void test_copy_assignment() {
        char test_str[4];
        membuf mb(make_shared<PageAllocator>(PageAllocator(8, 1)));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.sputn("abc", 3)));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.pubseekoff(0, ios_base::seekdir::_S_cur)));

        membuf mb1(make_shared<PageAllocator>(PageAllocator(8, 1)));
        mb1 = mb;

        mb.pubseekoff(0, ios_base::seekdir::_S_beg);
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.sgetn(test_str, 3)));
        test_str[3] = 0;

        CPPUNIT_ASSERT(strncmp("abc", test_str, 3) == 0);

        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb1.pubseekoff(0, ios_base::seekdir::_S_cur)));
        mb1.pubseekoff(0, ios_base::seekdir::_S_beg);

        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb1.sputn("def", 3)));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb1.pubseekoff(0, ios_base::seekdir::_S_cur)));

        mb1.pubseekoff(0, ios_base::seekdir::_S_beg);
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb1.sgetn(test_str, 3)));
        test_str[3] = 0;

        CPPUNIT_ASSERT(strncmp("def", test_str, 3) == 0);
    }

    void test_move_assignment() {
        char test_str[4];
        membuf mb(make_shared<PageAllocator>(PageAllocator(8, 1)));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.sputn("abc", 3)));
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb.pubseekoff(0, ios_base::seekdir::_S_cur)));

        membuf mb1 = move(mb);

        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb1.pubseekoff(0, ios_base::seekdir::_S_cur)));
        mb1.pubseekoff(0, ios_base::seekdir::_S_beg);
        CPPUNIT_ASSERT_EQUAL(3, static_cast<int>(mb1.sgetn(test_str, 3)));
        test_str[3] = 0;

        CPPUNIT_ASSERT(strncmp("abc", test_str, 3) == 0);
    }

    void test_memstream() {
        memstream ms(make_shared<PageAllocator>(PageAllocator(3, 1)));
        char test_string[21];
        ms.write("01234567890123456789", 20);
        CPPUNIT_ASSERT_EQUAL(20, static_cast<int>(ms.tellg()));
        ms.seekg(-10, ios_base::seekdir::_S_cur);
        CPPUNIT_ASSERT_EQUAL(10, static_cast<int>(ms.tellg()));
        ms.read(test_string, 10);
        test_string[10] = 0;

        CPPUNIT_ASSERT_EQUAL(20, static_cast<int>(ms.tellg()));
        CPPUNIT_ASSERT(strncmp("0123456789", test_string, 10) == 0);

        ms.seekg(20, ios_base::seekdir::_S_end);
        ms.read(test_string, 20);
        test_string[20] = 0;
        CPPUNIT_ASSERT(strncmp("01234567890123456789", test_string, 20) == 0);
    }


    void test_get_content_copy() {
        memstream ms(make_shared<PageAllocator>(PageAllocator(6, 2)));
        ms.write("01234567890123456789", 21);

        char *contents = ms.get_content_copy();

        int r = strncmp(contents, "01234567890123456789", 20);
        delete[] contents;

        CPPUNIT_ASSERT_EQUAL(0, r);
    }

    void test_read_write_round_trip() {
        shared_ptr<PageAllocator> allocator = make_shared<PageAllocator>(PageAllocator(3, 6));
        memstream ms1(allocator);
        ms1.write("01234567890123456789", 21);
        ms1.seekg(0);

        memstream ms2(allocator);
        CPPUNIT_ASSERT_EQUAL(21UL, ms2.read_form(ms1,21));
        CPPUNIT_ASSERT_EQUAL(0, strncmp(ms1.get_content_copy(), ms2.get_content_copy(), 20));

        ms2.seekg(0);
        memstream ms3(allocator);
        CPPUNIT_ASSERT_EQUAL(21UL, ms2.write_to(ms3,21));
        CPPUNIT_ASSERT_EQUAL(0, strncmp(ms1.get_content_copy(), ms3.get_content_copy(), 20));

    }

    void test_raw_membuf_get() {
        const char *str = "abcdefg";
        memistream is(str, strlen(str)+1);

        CPPUNIT_ASSERT_EQUAL((int)'a', is.get());
        CPPUNIT_ASSERT_EQUAL((int)'b', is.get());
        CPPUNIT_ASSERT_EQUAL((int)'c', is.get());
        CPPUNIT_ASSERT_EQUAL((int)'d', is.get());
        CPPUNIT_ASSERT_EQUAL((int)'e', is.get());
        CPPUNIT_ASSERT_EQUAL((int)'f', is.get());
        CPPUNIT_ASSERT_EQUAL((int)'g', is.get());
        CPPUNIT_ASSERT_EQUAL(0, is.get());
    }

    void test_raw_membuf_read() {
        const char *str = "abcdefg";
        char str2[8];
        memistream is(str, strlen(str)+1);
        is.read(str2, 8);
        CPPUNIT_ASSERT_EQUAL(0, strncmp(str2, str, 7));
    }

    void test_raw_membuf_seek() {
        const char *str = "abcdefg";
        char str2[8];
        memistream is(str, strlen(str)+1);
        is.seekg(2, ios_base::seekdir::_S_end);
        is.read(str2, 8);
        CPPUNIT_ASSERT_EQUAL(0, strncmp(str2, "g", 7));

        is.clear();
        is.seekg(-3, ios_base::seekdir::_S_cur);
        is.read(str2, 8);
        CPPUNIT_ASSERT_EQUAL(0, strncmp(str2, "fg", 7));

        is.clear();
        is.seekg(0, ios_base::seekdir::_S_beg);
        is.read(str2, 8);
        CPPUNIT_ASSERT_EQUAL(0, strncmp(str2, str, 7));

    }
};
}
}

#endif //MEMSTREAM_MEMBUF_TEST_H
