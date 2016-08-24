import os, os.path
import argparse


def writer_header_prologue(f):
    f.write('''
/*
 * This file is based on ByteBasedBitPackingEncoder obtained from  https://github.com/apache/parquet-mr/
*/
//
// Created by rbyst on 8/14/2016.
//

#ifndef PRIMITIVE_IO_PRIMITIVE_IO_BITPACKING_WRITER_IMPL_H
#define PRIMITIVE_IO_PRIMITIVE_IO_BITPACKING_WRITER_IMPL_H

#include <primitive_io/bitpacking_writer.h>
#include <cstring>
#include <stdexcept>
#include <string>
#include <sstream>
#include <ostream>

using namespace std;

namespace rbystrit {
namespace primitive_io {

    ''')


def reader_header_prologue(f):
    f.write('''
/*
 * This file is based on ByteBasedBitPackingEncoder obtained from  https://github.com/apache/parquet-mr/
*/
//
// Created by rbyst on 8/14/2016.
//

#ifndef PRIMITIVE_IO_PRIMITIVE_IO_BITPACKING_READER_IMPL_H
#define PRIMITIVE_IO_PRIMITIVE_IO_BITPACKING_READER_IMPL_H

#include <primitive_io/bitpacking_reader.h>
#include <cstring>
#include <stdexcept>
#include <string>
#include <sstream>
#include <istream>

using namespace std;

namespace rbystrit {
namespace primitive_io {

    ''')


def writer_header_epilogue(f):
    f.write('''

class  ByteBasedBitPackingWriters {
public:
    static ByteBasedBitPackingWriter*  create(shared_ptr<ostream> os, int num_bits, bool big_endian) {

        switch(num_bits) {
    ''')

    for i in xrange(1,65):
        f.write('\t\tcase {i}: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_{bitness}bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_{bitness}bit_LE(os));\n'.format(i=i, bitness=i))

    f.write('''
        }

        stringstream s;
        s << "Invalid bitness: " << num_bits;
        throw new runtime_error(s.str());
    }
};

}
}
#endif
    ''')


def reader_header_epilogue(f):
    f.write('''

class  ByteBasedBitPackingReaders {
public:
    static ByteBasedBitPackingReader*  create(shared_ptr<istream> is, int num_bits, bool big_endian) {

        switch(num_bits) {
    ''')

    for i in xrange(1,65):
        f.write('\t\tcase {i}: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_{bitness}bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_{bitness}bit_LE(is));\n'.format(i=i, bitness=i))

    f.write('''
        }

        stringstream s;
        s << "Invalid bitness: " << num_bits;
        throw new runtime_error(s.str());
    }
};

}
}
#endif
    ''')


def writer_class_header(f, bitness, little_endian=True):
    f.write('''
class ByteBasedBitPackingWriter_{bitness}bit_{e} : public ByteBasedBitPackingWriter {{
public:
    ByteBasedBitPackingWriter_{bitness}bit_{e}(shared_ptr<ostream> os) : ByteBasedBitPackingWriter({bitness}, os) {{}}

    ByteBasedBitPackingWriter_{bitness}bit_{e}(const ByteBasedBitPackingWriter_{bitness}bit_{e} &other) : ByteBasedBitPackingWriter(other) {{}}

    ByteBasedBitPackingWriter_{bitness}bit_{e}(ByteBasedBitPackingWriter_{bitness}bit_{e} &&other) : ByteBasedBitPackingWriter(other) {{}}

    ByteBasedBitPackingWriter_{bitness}bit_{e} &operator=(const ByteBasedBitPackingWriter_{bitness}bit_{e} &other) {{
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }}

    ByteBasedBitPackingWriter_{bitness}bit_{e} &operator=(ByteBasedBitPackingWriter_{bitness}bit_{e} &&other) {{
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }}

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
}};
    '''.format(bitness=bitness, e='LE' if little_endian else 'BE'))


def reader_class_header(f, bitness, little_endian=True):
    f.write('''
class ByteBasedBitPackingReader_{bitness}bit_{e} : public ByteBasedBitPackingReader {{
public:
    ByteBasedBitPackingReader_{bitness}bit_{e}(shared_ptr<istream> is) : ByteBasedBitPackingReader({bitness}, is) {{}}

    ByteBasedBitPackingReader_{bitness}bit_{e}(const ByteBasedBitPackingReader_{bitness}bit_{e} &other) : ByteBasedBitPackingReader(other) {{}}

    ByteBasedBitPackingReader_{bitness}bit_{e}(ByteBasedBitPackingReader_{bitness}bit_{e} &&other) : ByteBasedBitPackingReader(other) {{}}

    ByteBasedBitPackingReader_{bitness}bit_{e} &operator=(const ByteBasedBitPackingReader_{bitness}bit_{e} &other) {{
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }}

    ByteBasedBitPackingReader_{bitness}bit_{e} &operator=(ByteBasedBitPackingReader_{bitness}bit_{e} &&other) {{
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }}

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
}};
    '''.format(bitness=bitness, e='LE' if little_endian else 'BE'))


def writer_source_prologue(f):
    f.write('''
#include <primitive_io/primitive_io.h>
#include <primitive_io/bitpacking_writer_impl.h>

namespace rbystrit {
namespace primitive_io{

    ''')


def reader_source_prologue(f):
    f.write('''
#include <primitive_io/primitive_io.h>
#include <primitive_io/bitpacking_reader_impl.h>

namespace rbystrit {
namespace primitive_io{

    ''')


def writer_source_epilogue(f):
    f.write('''
}
}
    ''')


reader_source_epilogue = writer_source_epilogue


def writer_set_bits(bit_address, source, count, little_endian=True):
    start_byte = bit_address // 8
    next_byte_boundary = (start_byte + 1) * 8
    current_byte_boundary = start_byte * 8
    orig_count = count
    output = []

    while count > 0:
        num_bits = min(next_byte_boundary - bit_address, count)

        if little_endian:
            bits_source = "(({source} >> {count}) & {bitmask})".format(source=source, count=orig_count - count,
                                                                       bitmask=(2 ** num_bits - 1))
            bits_source = "({bits_source}) << {pos}".format(bits_source=bits_source,
                                                            pos=bit_address - current_byte_boundary)
        else:
            bits_source = "(({source} >> {count}) & {bitmask})".format(source=source, count=count - num_bits,
                                                                       bitmask=(2 ** num_bits - 1))

            bits_source = "({bits_source}) << {pos}".format(bits_source=bits_source,
                                                            pos=8 - (bit_address - current_byte_boundary) - num_bits)
        output.append((start_byte, bits_source))

        count -= num_bits
        start_byte += 1
        next_byte_boundary = (start_byte + 1) * 8
        current_byte_boundary = start_byte * 8
        bit_address = min(current_byte_boundary, bit_address + num_bits)

    return bit_address, output


def reader_get_bits(bit_address, target, count, little_endian=True):
    start_byte = bit_address // 8
    next_byte_boundary = (start_byte + 1) * 8
    current_byte_boundary = start_byte * 8
    orig_count = count
    output = []

    while count > 0:
        num_bits = min(next_byte_boundary - bit_address, count)

        if little_endian:
            bits_source = "((static_cast<uint64_t>(src_buffer[{cb}]) >> {count}) & {bitmask})".format(cb=start_byte,
                                                                                                  count=bit_address - current_byte_boundary,
                                                                                                  bitmask=(
                                                                                                      2 ** num_bits - 1))
        else:
            bits_source = "((static_cast<uint64_t>(src_buffer[{cb}]) >> {count}) & {bitmask})".format(cb=start_byte,
                                                                                                  count=8 - (bit_address - current_byte_boundary) - num_bits,
                                                                                                  bitmask=(
                                                                                                      2 ** num_bits - 1))
        if little_endian:
            bits_source = "({bits_source}) << {pos}".format(bits_source=bits_source,
                                                            pos=orig_count - count)
        else:
            bits_source = "({bits_source}) << {pos}".format(bits_source=bits_source,
                                                            pos=count - num_bits)

        output.append((target, bits_source))

        count -= num_bits
        start_byte += 1
        next_byte_boundary = (start_byte + 1) * 8
        current_byte_boundary = start_byte * 8
        bit_address = min(current_byte_boundary, bit_address + num_bits)

    return bit_address, output


def writer_source_impl(f, bitness, little_endian=True):
    f.write('''
void ByteBasedBitPackingWriter_{bitness}bit_{e}::flush_buffer(const uint64_t *buffer) {{
    uint8_t tgt_buffer[{bitness}];
    memset(tgt_buffer,0, {bitness});

    '''.format(bitness=bitness, e='LE' if little_endian else 'BE'))

    setters = []
    bit_address = 0
    for i in xrange(0, 8):
        bit_address, setter = writer_set_bits(bit_address, "buffer[{i}]".format(i=i), bitness, little_endian)
        setters.append(setter)

    setters_combined = {}
    for setter in setters:
        for byte_, exp_ in setter:
            if byte_ not in setters_combined:
                setters_combined[byte_] = []
            setters_combined[byte_].append(exp_)

    for byte_ in setters_combined:
        f.write('''
    tgt_buffer[{i}] = static_cast<uint8_t>({bit_exp});
        '''.format(i=byte_, bit_exp=' | '.join(setters_combined[byte_])))

    f.write('''
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), {bitness});
}}'''.format(bitness=bitness))


def reader_source_impl(f, bitness, little_endian=True):
    f.write('''
void ByteBasedBitPackingReader_{bitness}bit_{e}::hydrate_buffer_core(uint64_t *buffer) {{

    uint8_t src_buffer[{bitness}];
    memset(src_buffer,0, {bitness});

    get_is()->read(reinterpret_cast<char*>(src_buffer), {bitness});
    '''.format(bitness=bitness, e='LE' if little_endian else 'BE'))

    setters = []
    bit_address = 0
    for i in xrange(0, 8):
        bit_address, setter = reader_get_bits(bit_address, i, bitness, little_endian)
        setters.append(setter)

    setters_combined = {}
    for setter in setters:
        for idx, exp_ in setter:
            if idx not in setters_combined:
                setters_combined[idx] = []
            setters_combined[idx].append(exp_)

    for idx in setters_combined:
        f.write('''
    buffer[{i}] = {bit_exp};
        '''.format(i=idx, bit_exp=' | '.join(setters_combined[idx])))

    f.write('''
}
    ''')


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--header_out', type=str, required=True)
    parser.add_argument('--source_out', type=str, required=True)

    args = parser.parse_args()
    with open(os.path.join(args.header_out, 'bitpacking_writer_impl.h'), "w+") as f:
        writer_header_prologue(f)
        for i in xrange(1, 65):
            writer_class_header(f, i, True)
            writer_class_header(f, i, False)
        writer_header_epilogue(f)

    with open(os.path.join(args.source_out, 'bitpacking_writer_impl.cpp'), "w+") as f:
        writer_source_prologue(f)
        for i in xrange(1, 65):
            writer_source_impl(f, i, True)
            writer_source_impl(f, i, False)
        writer_source_epilogue(f)

    with open(os.path.join(args.header_out, 'bitpacking_reader_impl.h'), "w+") as f:
        reader_header_prologue(f)
        for i in xrange(1, 65):
            reader_class_header(f, i, True)
            reader_class_header(f, i, False)
        reader_header_epilogue(f)

    with open(os.path.join(args.source_out, 'bitpacking_reader_impl.cpp'), "w+") as f:
        reader_source_prologue(f)
        for i in xrange(1, 65):
            reader_source_impl(f, i, True)
            reader_source_impl(f, i, False)
        reader_source_epilogue(f)


if __name__ == "__main__":
    main()
