//
// Created by rbyst on 8/14/2016.
//

#ifndef MEMUTILS_BITPACKING_TEST_H
#define MEMUTILS_BITPACKING_TEST_H

#include <primitive_io/bitpacking_writer_impl.h>
#include <primitive_io/bitpacking_reader_impl.h>
#include <memstream/memstream.h>

#include <cppunit/extensions/HelperMacros.h>
#include <random>

namespace rbystrit{
namespace primitive_io{

#define TEST_SET_SIZE 53

class BitPackingTest : public CppUnit::TestFixture{
    CPPUNIT_TEST_SUITE(BitPackingTest);
    CPPUNIT_TEST(test_roundtrip_le);
    CPPUNIT_TEST(test_roundtrip_be);
    CPPUNIT_TEST(test_roundtrip_benchmark);
    CPPUNIT_TEST_SUITE_END();

public:

    void test_roundtrip_benchmark() {
        int size = 1 << 26;
        uint64_t*  data_src = new uint64_t[size];
        uint64_t*  data_dst = new uint64_t[size];

        time_t gen_start = time(nullptr);
        generate_rand(data_src, 35, size);
        time_t gen_end = time(nullptr);

        shared_ptr<memstream::PageAllocator> allocator(new memstream::PageAllocator(256, 10));
        shared_ptr<memstream::memstream> ms(new memstream::memstream(allocator));
        unique_ptr<ByteBasedBitPackingWriter> writer(ByteBasedBitPackingWriters::create(static_pointer_cast<ostream>(ms), 35, false));
        unique_ptr<ByteBasedBitPackingReader> reader(ByteBasedBitPackingReaders::create(static_pointer_cast<istream>(ms), 35, false));

        bool fail = false;
        time_t write_start = time(nullptr);
        writer->write(data_src, TEST_SET_SIZE);
        writer->flush();
        time_t write_end = time(nullptr);

        ms->seekg(0);
        time_t read_start = time(nullptr);
        reader->read(data_dst, TEST_SET_SIZE);
        time_t read_end = time(nullptr);


        for( int j =0; j<TEST_SET_SIZE; j++ )
            if(data_src[j]!= data_dst[j]){
                cout << "Faling comparison test bitness=35" << " element=" << j << " " << data_src[j] << " != " << data_dst[j] <<endl;
                fail= true;
            }

        cout << endl << "It takes " << difftime(write_end, write_start) << "s to write " << size / (2<<20) << "M longs." <<endl;
        cout << endl << "It takes " << difftime(read_end, read_start) << "s to read " << size / (2<<20) << "M longs." <<endl;
        cout << endl << "It takes " << difftime(gen_end, gen_start) << "s to generate " << size / (2<<20) << "M longs." <<endl;
        delete [] data_src;
        delete [] data_dst;
    }
    void test_roundtrip_le()
    {
        uint64_t*  data_src = new uint64_t[TEST_SET_SIZE];
        uint64_t*  data_dst = new uint64_t[TEST_SET_SIZE];

        shared_ptr<memstream::PageAllocator> allocator(new memstream::PageAllocator(256, 10));
        bool fail = false;

        for(int i=1; i<=64; i++ ){
            memset(data_src, 0, sizeof(uint64_t) * TEST_SET_SIZE);
            memset(data_dst, 0, sizeof(uint64_t) * TEST_SET_SIZE);

            shared_ptr<memstream::memstream> ms(new memstream::memstream(allocator));

            unique_ptr<ByteBasedBitPackingWriter> writer(ByteBasedBitPackingWriters::create(static_pointer_cast<ostream>(ms), i, false));
            unique_ptr<ByteBasedBitPackingReader> reader(ByteBasedBitPackingReaders::create(static_pointer_cast<istream>(ms), i, false));

            generate_rand(data_src, i, TEST_SET_SIZE);

            writer->write(data_src, TEST_SET_SIZE);
            writer->flush();
            ms->seekg(0);
            reader->read(data_dst, TEST_SET_SIZE);

            size_t bit_size = static_cast<size_t>(TEST_SET_SIZE) * i;
            CPPUNIT_ASSERT_EQUAL(writer->packed_bit_size(),  bit_size);


            for( int j =0; j<TEST_SET_SIZE; j++ )
                if(data_src[j]!= data_dst[j]){
                    cout << "Faling comparison test bitness=" << i << " element=" << j << " " << data_src[j] << " != " << data_dst[j] <<endl;
                    fail= true;
                }
        }

        CPPUNIT_ASSERT(!fail);


        delete [] data_src;
        delete [] data_dst;
    }

    void test_roundtrip_be()
    {
        uint64_t*  data_src = new uint64_t[TEST_SET_SIZE];
        uint64_t*  data_dst = new uint64_t[TEST_SET_SIZE];

        shared_ptr<memstream::PageAllocator> allocator(new memstream::PageAllocator(256, 10));
        bool fail = false;

        for(int i=1; i<=64; i++ ){
            memset(data_src, 0, sizeof(uint64_t) * TEST_SET_SIZE);
            memset(data_dst, 0, sizeof(uint64_t) * TEST_SET_SIZE);

            shared_ptr<memstream::memstream> ms(new memstream::memstream(allocator));

            unique_ptr<ByteBasedBitPackingWriter> writer(ByteBasedBitPackingWriters::create(static_pointer_cast<ostream>(ms), i, true));
            unique_ptr<ByteBasedBitPackingReader> reader(ByteBasedBitPackingReaders::create(static_pointer_cast<istream>(ms), i, true));

            generate_rand(data_src, i, TEST_SET_SIZE);

            writer->write(data_src, TEST_SET_SIZE);
            writer->flush();
            ms->seekg(0);
            reader->read(data_dst, TEST_SET_SIZE);

            size_t bit_size = static_cast<size_t>(TEST_SET_SIZE) * i;
            CPPUNIT_ASSERT_EQUAL(writer->packed_bit_size(),  bit_size);

            for( int j =0; j<TEST_SET_SIZE; j++ )
                if(data_src[j]!= data_dst[j]){
                    cout << "Faling comparison test bitness=" << i << " element=" << j << " " << data_src[j] << " != " << data_dst[j] <<endl;
                    fail= true;
                }
        }
        CPPUNIT_ASSERT(!fail);
        delete [] data_src;
        delete [] data_dst;

    }
private:
    void generate_rand(uint64_t *buf, int bitness, int size){
        std::default_random_engine generator;
        std::uniform_int_distribution<uint64_t> distribution(0, bitness == 64 ? numeric_limits<uint64_t>::max() : (1UL << bitness)-1);
        for( int i=0; i<size; i++)
            buf[i] = distribution(generator);
    }
};
}
}
#endif //MEMUTILS_BITPACKING_TEST_H
