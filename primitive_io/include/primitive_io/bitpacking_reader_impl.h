
/*
 * This file is based on ByteBasedBitPackingEncoder obtained from  https://github.com/apache/parquet-mr/
*/
//
// Created by rbyst on 8/14/2016.
//

#ifndef PRIMITIVE_IO_PRIMITIVE_IO_BITPACKING_READER_H
#define PRIMITIVE_IO_PRIMITIVE_IO_BITPACKING_READER_H

#include <primitive_io/bitpacking_reader.h>
#include <cstring>
#include <stdexcept>
#include <string>
#include <sstream>
#include <istream>

using namespace std;

namespace rbystrit {
namespace primitive_io {

    
class ByteBasedBitPackingReader_1bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_1bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(1, is) {}

    ByteBasedBitPackingReader_1bit_LE(const ByteBasedBitPackingReader_1bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_1bit_LE(ByteBasedBitPackingReader_1bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_1bit_LE &operator=(const ByteBasedBitPackingReader_1bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_1bit_LE &operator=(ByteBasedBitPackingReader_1bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_1bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_1bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(1, is) {}

    ByteBasedBitPackingReader_1bit_BE(const ByteBasedBitPackingReader_1bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_1bit_BE(ByteBasedBitPackingReader_1bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_1bit_BE &operator=(const ByteBasedBitPackingReader_1bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_1bit_BE &operator=(ByteBasedBitPackingReader_1bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_2bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_2bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(2, is) {}

    ByteBasedBitPackingReader_2bit_LE(const ByteBasedBitPackingReader_2bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_2bit_LE(ByteBasedBitPackingReader_2bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_2bit_LE &operator=(const ByteBasedBitPackingReader_2bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_2bit_LE &operator=(ByteBasedBitPackingReader_2bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_2bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_2bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(2, is) {}

    ByteBasedBitPackingReader_2bit_BE(const ByteBasedBitPackingReader_2bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_2bit_BE(ByteBasedBitPackingReader_2bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_2bit_BE &operator=(const ByteBasedBitPackingReader_2bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_2bit_BE &operator=(ByteBasedBitPackingReader_2bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_3bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_3bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(3, is) {}

    ByteBasedBitPackingReader_3bit_LE(const ByteBasedBitPackingReader_3bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_3bit_LE(ByteBasedBitPackingReader_3bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_3bit_LE &operator=(const ByteBasedBitPackingReader_3bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_3bit_LE &operator=(ByteBasedBitPackingReader_3bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_3bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_3bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(3, is) {}

    ByteBasedBitPackingReader_3bit_BE(const ByteBasedBitPackingReader_3bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_3bit_BE(ByteBasedBitPackingReader_3bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_3bit_BE &operator=(const ByteBasedBitPackingReader_3bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_3bit_BE &operator=(ByteBasedBitPackingReader_3bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_4bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_4bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(4, is) {}

    ByteBasedBitPackingReader_4bit_LE(const ByteBasedBitPackingReader_4bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_4bit_LE(ByteBasedBitPackingReader_4bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_4bit_LE &operator=(const ByteBasedBitPackingReader_4bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_4bit_LE &operator=(ByteBasedBitPackingReader_4bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_4bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_4bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(4, is) {}

    ByteBasedBitPackingReader_4bit_BE(const ByteBasedBitPackingReader_4bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_4bit_BE(ByteBasedBitPackingReader_4bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_4bit_BE &operator=(const ByteBasedBitPackingReader_4bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_4bit_BE &operator=(ByteBasedBitPackingReader_4bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_5bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_5bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(5, is) {}

    ByteBasedBitPackingReader_5bit_LE(const ByteBasedBitPackingReader_5bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_5bit_LE(ByteBasedBitPackingReader_5bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_5bit_LE &operator=(const ByteBasedBitPackingReader_5bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_5bit_LE &operator=(ByteBasedBitPackingReader_5bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_5bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_5bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(5, is) {}

    ByteBasedBitPackingReader_5bit_BE(const ByteBasedBitPackingReader_5bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_5bit_BE(ByteBasedBitPackingReader_5bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_5bit_BE &operator=(const ByteBasedBitPackingReader_5bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_5bit_BE &operator=(ByteBasedBitPackingReader_5bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_6bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_6bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(6, is) {}

    ByteBasedBitPackingReader_6bit_LE(const ByteBasedBitPackingReader_6bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_6bit_LE(ByteBasedBitPackingReader_6bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_6bit_LE &operator=(const ByteBasedBitPackingReader_6bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_6bit_LE &operator=(ByteBasedBitPackingReader_6bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_6bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_6bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(6, is) {}

    ByteBasedBitPackingReader_6bit_BE(const ByteBasedBitPackingReader_6bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_6bit_BE(ByteBasedBitPackingReader_6bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_6bit_BE &operator=(const ByteBasedBitPackingReader_6bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_6bit_BE &operator=(ByteBasedBitPackingReader_6bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_7bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_7bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(7, is) {}

    ByteBasedBitPackingReader_7bit_LE(const ByteBasedBitPackingReader_7bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_7bit_LE(ByteBasedBitPackingReader_7bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_7bit_LE &operator=(const ByteBasedBitPackingReader_7bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_7bit_LE &operator=(ByteBasedBitPackingReader_7bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_7bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_7bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(7, is) {}

    ByteBasedBitPackingReader_7bit_BE(const ByteBasedBitPackingReader_7bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_7bit_BE(ByteBasedBitPackingReader_7bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_7bit_BE &operator=(const ByteBasedBitPackingReader_7bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_7bit_BE &operator=(ByteBasedBitPackingReader_7bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_8bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_8bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(8, is) {}

    ByteBasedBitPackingReader_8bit_LE(const ByteBasedBitPackingReader_8bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_8bit_LE(ByteBasedBitPackingReader_8bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_8bit_LE &operator=(const ByteBasedBitPackingReader_8bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_8bit_LE &operator=(ByteBasedBitPackingReader_8bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_8bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_8bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(8, is) {}

    ByteBasedBitPackingReader_8bit_BE(const ByteBasedBitPackingReader_8bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_8bit_BE(ByteBasedBitPackingReader_8bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_8bit_BE &operator=(const ByteBasedBitPackingReader_8bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_8bit_BE &operator=(ByteBasedBitPackingReader_8bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_9bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_9bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(9, is) {}

    ByteBasedBitPackingReader_9bit_LE(const ByteBasedBitPackingReader_9bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_9bit_LE(ByteBasedBitPackingReader_9bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_9bit_LE &operator=(const ByteBasedBitPackingReader_9bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_9bit_LE &operator=(ByteBasedBitPackingReader_9bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_9bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_9bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(9, is) {}

    ByteBasedBitPackingReader_9bit_BE(const ByteBasedBitPackingReader_9bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_9bit_BE(ByteBasedBitPackingReader_9bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_9bit_BE &operator=(const ByteBasedBitPackingReader_9bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_9bit_BE &operator=(ByteBasedBitPackingReader_9bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_10bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_10bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(10, is) {}

    ByteBasedBitPackingReader_10bit_LE(const ByteBasedBitPackingReader_10bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_10bit_LE(ByteBasedBitPackingReader_10bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_10bit_LE &operator=(const ByteBasedBitPackingReader_10bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_10bit_LE &operator=(ByteBasedBitPackingReader_10bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_10bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_10bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(10, is) {}

    ByteBasedBitPackingReader_10bit_BE(const ByteBasedBitPackingReader_10bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_10bit_BE(ByteBasedBitPackingReader_10bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_10bit_BE &operator=(const ByteBasedBitPackingReader_10bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_10bit_BE &operator=(ByteBasedBitPackingReader_10bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_11bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_11bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(11, is) {}

    ByteBasedBitPackingReader_11bit_LE(const ByteBasedBitPackingReader_11bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_11bit_LE(ByteBasedBitPackingReader_11bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_11bit_LE &operator=(const ByteBasedBitPackingReader_11bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_11bit_LE &operator=(ByteBasedBitPackingReader_11bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_11bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_11bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(11, is) {}

    ByteBasedBitPackingReader_11bit_BE(const ByteBasedBitPackingReader_11bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_11bit_BE(ByteBasedBitPackingReader_11bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_11bit_BE &operator=(const ByteBasedBitPackingReader_11bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_11bit_BE &operator=(ByteBasedBitPackingReader_11bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_12bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_12bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(12, is) {}

    ByteBasedBitPackingReader_12bit_LE(const ByteBasedBitPackingReader_12bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_12bit_LE(ByteBasedBitPackingReader_12bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_12bit_LE &operator=(const ByteBasedBitPackingReader_12bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_12bit_LE &operator=(ByteBasedBitPackingReader_12bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_12bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_12bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(12, is) {}

    ByteBasedBitPackingReader_12bit_BE(const ByteBasedBitPackingReader_12bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_12bit_BE(ByteBasedBitPackingReader_12bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_12bit_BE &operator=(const ByteBasedBitPackingReader_12bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_12bit_BE &operator=(ByteBasedBitPackingReader_12bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_13bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_13bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(13, is) {}

    ByteBasedBitPackingReader_13bit_LE(const ByteBasedBitPackingReader_13bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_13bit_LE(ByteBasedBitPackingReader_13bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_13bit_LE &operator=(const ByteBasedBitPackingReader_13bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_13bit_LE &operator=(ByteBasedBitPackingReader_13bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_13bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_13bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(13, is) {}

    ByteBasedBitPackingReader_13bit_BE(const ByteBasedBitPackingReader_13bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_13bit_BE(ByteBasedBitPackingReader_13bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_13bit_BE &operator=(const ByteBasedBitPackingReader_13bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_13bit_BE &operator=(ByteBasedBitPackingReader_13bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_14bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_14bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(14, is) {}

    ByteBasedBitPackingReader_14bit_LE(const ByteBasedBitPackingReader_14bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_14bit_LE(ByteBasedBitPackingReader_14bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_14bit_LE &operator=(const ByteBasedBitPackingReader_14bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_14bit_LE &operator=(ByteBasedBitPackingReader_14bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_14bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_14bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(14, is) {}

    ByteBasedBitPackingReader_14bit_BE(const ByteBasedBitPackingReader_14bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_14bit_BE(ByteBasedBitPackingReader_14bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_14bit_BE &operator=(const ByteBasedBitPackingReader_14bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_14bit_BE &operator=(ByteBasedBitPackingReader_14bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_15bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_15bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(15, is) {}

    ByteBasedBitPackingReader_15bit_LE(const ByteBasedBitPackingReader_15bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_15bit_LE(ByteBasedBitPackingReader_15bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_15bit_LE &operator=(const ByteBasedBitPackingReader_15bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_15bit_LE &operator=(ByteBasedBitPackingReader_15bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_15bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_15bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(15, is) {}

    ByteBasedBitPackingReader_15bit_BE(const ByteBasedBitPackingReader_15bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_15bit_BE(ByteBasedBitPackingReader_15bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_15bit_BE &operator=(const ByteBasedBitPackingReader_15bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_15bit_BE &operator=(ByteBasedBitPackingReader_15bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_16bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_16bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(16, is) {}

    ByteBasedBitPackingReader_16bit_LE(const ByteBasedBitPackingReader_16bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_16bit_LE(ByteBasedBitPackingReader_16bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_16bit_LE &operator=(const ByteBasedBitPackingReader_16bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_16bit_LE &operator=(ByteBasedBitPackingReader_16bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_16bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_16bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(16, is) {}

    ByteBasedBitPackingReader_16bit_BE(const ByteBasedBitPackingReader_16bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_16bit_BE(ByteBasedBitPackingReader_16bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_16bit_BE &operator=(const ByteBasedBitPackingReader_16bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_16bit_BE &operator=(ByteBasedBitPackingReader_16bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_17bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_17bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(17, is) {}

    ByteBasedBitPackingReader_17bit_LE(const ByteBasedBitPackingReader_17bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_17bit_LE(ByteBasedBitPackingReader_17bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_17bit_LE &operator=(const ByteBasedBitPackingReader_17bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_17bit_LE &operator=(ByteBasedBitPackingReader_17bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_17bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_17bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(17, is) {}

    ByteBasedBitPackingReader_17bit_BE(const ByteBasedBitPackingReader_17bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_17bit_BE(ByteBasedBitPackingReader_17bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_17bit_BE &operator=(const ByteBasedBitPackingReader_17bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_17bit_BE &operator=(ByteBasedBitPackingReader_17bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_18bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_18bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(18, is) {}

    ByteBasedBitPackingReader_18bit_LE(const ByteBasedBitPackingReader_18bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_18bit_LE(ByteBasedBitPackingReader_18bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_18bit_LE &operator=(const ByteBasedBitPackingReader_18bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_18bit_LE &operator=(ByteBasedBitPackingReader_18bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_18bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_18bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(18, is) {}

    ByteBasedBitPackingReader_18bit_BE(const ByteBasedBitPackingReader_18bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_18bit_BE(ByteBasedBitPackingReader_18bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_18bit_BE &operator=(const ByteBasedBitPackingReader_18bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_18bit_BE &operator=(ByteBasedBitPackingReader_18bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_19bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_19bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(19, is) {}

    ByteBasedBitPackingReader_19bit_LE(const ByteBasedBitPackingReader_19bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_19bit_LE(ByteBasedBitPackingReader_19bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_19bit_LE &operator=(const ByteBasedBitPackingReader_19bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_19bit_LE &operator=(ByteBasedBitPackingReader_19bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_19bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_19bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(19, is) {}

    ByteBasedBitPackingReader_19bit_BE(const ByteBasedBitPackingReader_19bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_19bit_BE(ByteBasedBitPackingReader_19bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_19bit_BE &operator=(const ByteBasedBitPackingReader_19bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_19bit_BE &operator=(ByteBasedBitPackingReader_19bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_20bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_20bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(20, is) {}

    ByteBasedBitPackingReader_20bit_LE(const ByteBasedBitPackingReader_20bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_20bit_LE(ByteBasedBitPackingReader_20bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_20bit_LE &operator=(const ByteBasedBitPackingReader_20bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_20bit_LE &operator=(ByteBasedBitPackingReader_20bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_20bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_20bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(20, is) {}

    ByteBasedBitPackingReader_20bit_BE(const ByteBasedBitPackingReader_20bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_20bit_BE(ByteBasedBitPackingReader_20bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_20bit_BE &operator=(const ByteBasedBitPackingReader_20bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_20bit_BE &operator=(ByteBasedBitPackingReader_20bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_21bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_21bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(21, is) {}

    ByteBasedBitPackingReader_21bit_LE(const ByteBasedBitPackingReader_21bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_21bit_LE(ByteBasedBitPackingReader_21bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_21bit_LE &operator=(const ByteBasedBitPackingReader_21bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_21bit_LE &operator=(ByteBasedBitPackingReader_21bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_21bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_21bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(21, is) {}

    ByteBasedBitPackingReader_21bit_BE(const ByteBasedBitPackingReader_21bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_21bit_BE(ByteBasedBitPackingReader_21bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_21bit_BE &operator=(const ByteBasedBitPackingReader_21bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_21bit_BE &operator=(ByteBasedBitPackingReader_21bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_22bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_22bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(22, is) {}

    ByteBasedBitPackingReader_22bit_LE(const ByteBasedBitPackingReader_22bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_22bit_LE(ByteBasedBitPackingReader_22bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_22bit_LE &operator=(const ByteBasedBitPackingReader_22bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_22bit_LE &operator=(ByteBasedBitPackingReader_22bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_22bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_22bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(22, is) {}

    ByteBasedBitPackingReader_22bit_BE(const ByteBasedBitPackingReader_22bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_22bit_BE(ByteBasedBitPackingReader_22bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_22bit_BE &operator=(const ByteBasedBitPackingReader_22bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_22bit_BE &operator=(ByteBasedBitPackingReader_22bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_23bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_23bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(23, is) {}

    ByteBasedBitPackingReader_23bit_LE(const ByteBasedBitPackingReader_23bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_23bit_LE(ByteBasedBitPackingReader_23bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_23bit_LE &operator=(const ByteBasedBitPackingReader_23bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_23bit_LE &operator=(ByteBasedBitPackingReader_23bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_23bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_23bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(23, is) {}

    ByteBasedBitPackingReader_23bit_BE(const ByteBasedBitPackingReader_23bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_23bit_BE(ByteBasedBitPackingReader_23bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_23bit_BE &operator=(const ByteBasedBitPackingReader_23bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_23bit_BE &operator=(ByteBasedBitPackingReader_23bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_24bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_24bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(24, is) {}

    ByteBasedBitPackingReader_24bit_LE(const ByteBasedBitPackingReader_24bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_24bit_LE(ByteBasedBitPackingReader_24bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_24bit_LE &operator=(const ByteBasedBitPackingReader_24bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_24bit_LE &operator=(ByteBasedBitPackingReader_24bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_24bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_24bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(24, is) {}

    ByteBasedBitPackingReader_24bit_BE(const ByteBasedBitPackingReader_24bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_24bit_BE(ByteBasedBitPackingReader_24bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_24bit_BE &operator=(const ByteBasedBitPackingReader_24bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_24bit_BE &operator=(ByteBasedBitPackingReader_24bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_25bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_25bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(25, is) {}

    ByteBasedBitPackingReader_25bit_LE(const ByteBasedBitPackingReader_25bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_25bit_LE(ByteBasedBitPackingReader_25bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_25bit_LE &operator=(const ByteBasedBitPackingReader_25bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_25bit_LE &operator=(ByteBasedBitPackingReader_25bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_25bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_25bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(25, is) {}

    ByteBasedBitPackingReader_25bit_BE(const ByteBasedBitPackingReader_25bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_25bit_BE(ByteBasedBitPackingReader_25bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_25bit_BE &operator=(const ByteBasedBitPackingReader_25bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_25bit_BE &operator=(ByteBasedBitPackingReader_25bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_26bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_26bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(26, is) {}

    ByteBasedBitPackingReader_26bit_LE(const ByteBasedBitPackingReader_26bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_26bit_LE(ByteBasedBitPackingReader_26bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_26bit_LE &operator=(const ByteBasedBitPackingReader_26bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_26bit_LE &operator=(ByteBasedBitPackingReader_26bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_26bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_26bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(26, is) {}

    ByteBasedBitPackingReader_26bit_BE(const ByteBasedBitPackingReader_26bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_26bit_BE(ByteBasedBitPackingReader_26bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_26bit_BE &operator=(const ByteBasedBitPackingReader_26bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_26bit_BE &operator=(ByteBasedBitPackingReader_26bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_27bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_27bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(27, is) {}

    ByteBasedBitPackingReader_27bit_LE(const ByteBasedBitPackingReader_27bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_27bit_LE(ByteBasedBitPackingReader_27bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_27bit_LE &operator=(const ByteBasedBitPackingReader_27bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_27bit_LE &operator=(ByteBasedBitPackingReader_27bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_27bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_27bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(27, is) {}

    ByteBasedBitPackingReader_27bit_BE(const ByteBasedBitPackingReader_27bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_27bit_BE(ByteBasedBitPackingReader_27bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_27bit_BE &operator=(const ByteBasedBitPackingReader_27bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_27bit_BE &operator=(ByteBasedBitPackingReader_27bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_28bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_28bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(28, is) {}

    ByteBasedBitPackingReader_28bit_LE(const ByteBasedBitPackingReader_28bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_28bit_LE(ByteBasedBitPackingReader_28bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_28bit_LE &operator=(const ByteBasedBitPackingReader_28bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_28bit_LE &operator=(ByteBasedBitPackingReader_28bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_28bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_28bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(28, is) {}

    ByteBasedBitPackingReader_28bit_BE(const ByteBasedBitPackingReader_28bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_28bit_BE(ByteBasedBitPackingReader_28bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_28bit_BE &operator=(const ByteBasedBitPackingReader_28bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_28bit_BE &operator=(ByteBasedBitPackingReader_28bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_29bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_29bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(29, is) {}

    ByteBasedBitPackingReader_29bit_LE(const ByteBasedBitPackingReader_29bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_29bit_LE(ByteBasedBitPackingReader_29bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_29bit_LE &operator=(const ByteBasedBitPackingReader_29bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_29bit_LE &operator=(ByteBasedBitPackingReader_29bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_29bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_29bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(29, is) {}

    ByteBasedBitPackingReader_29bit_BE(const ByteBasedBitPackingReader_29bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_29bit_BE(ByteBasedBitPackingReader_29bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_29bit_BE &operator=(const ByteBasedBitPackingReader_29bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_29bit_BE &operator=(ByteBasedBitPackingReader_29bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_30bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_30bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(30, is) {}

    ByteBasedBitPackingReader_30bit_LE(const ByteBasedBitPackingReader_30bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_30bit_LE(ByteBasedBitPackingReader_30bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_30bit_LE &operator=(const ByteBasedBitPackingReader_30bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_30bit_LE &operator=(ByteBasedBitPackingReader_30bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_30bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_30bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(30, is) {}

    ByteBasedBitPackingReader_30bit_BE(const ByteBasedBitPackingReader_30bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_30bit_BE(ByteBasedBitPackingReader_30bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_30bit_BE &operator=(const ByteBasedBitPackingReader_30bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_30bit_BE &operator=(ByteBasedBitPackingReader_30bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_31bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_31bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(31, is) {}

    ByteBasedBitPackingReader_31bit_LE(const ByteBasedBitPackingReader_31bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_31bit_LE(ByteBasedBitPackingReader_31bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_31bit_LE &operator=(const ByteBasedBitPackingReader_31bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_31bit_LE &operator=(ByteBasedBitPackingReader_31bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_31bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_31bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(31, is) {}

    ByteBasedBitPackingReader_31bit_BE(const ByteBasedBitPackingReader_31bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_31bit_BE(ByteBasedBitPackingReader_31bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_31bit_BE &operator=(const ByteBasedBitPackingReader_31bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_31bit_BE &operator=(ByteBasedBitPackingReader_31bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_32bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_32bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(32, is) {}

    ByteBasedBitPackingReader_32bit_LE(const ByteBasedBitPackingReader_32bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_32bit_LE(ByteBasedBitPackingReader_32bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_32bit_LE &operator=(const ByteBasedBitPackingReader_32bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_32bit_LE &operator=(ByteBasedBitPackingReader_32bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_32bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_32bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(32, is) {}

    ByteBasedBitPackingReader_32bit_BE(const ByteBasedBitPackingReader_32bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_32bit_BE(ByteBasedBitPackingReader_32bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_32bit_BE &operator=(const ByteBasedBitPackingReader_32bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_32bit_BE &operator=(ByteBasedBitPackingReader_32bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_33bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_33bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(33, is) {}

    ByteBasedBitPackingReader_33bit_LE(const ByteBasedBitPackingReader_33bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_33bit_LE(ByteBasedBitPackingReader_33bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_33bit_LE &operator=(const ByteBasedBitPackingReader_33bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_33bit_LE &operator=(ByteBasedBitPackingReader_33bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_33bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_33bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(33, is) {}

    ByteBasedBitPackingReader_33bit_BE(const ByteBasedBitPackingReader_33bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_33bit_BE(ByteBasedBitPackingReader_33bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_33bit_BE &operator=(const ByteBasedBitPackingReader_33bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_33bit_BE &operator=(ByteBasedBitPackingReader_33bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_34bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_34bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(34, is) {}

    ByteBasedBitPackingReader_34bit_LE(const ByteBasedBitPackingReader_34bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_34bit_LE(ByteBasedBitPackingReader_34bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_34bit_LE &operator=(const ByteBasedBitPackingReader_34bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_34bit_LE &operator=(ByteBasedBitPackingReader_34bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_34bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_34bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(34, is) {}

    ByteBasedBitPackingReader_34bit_BE(const ByteBasedBitPackingReader_34bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_34bit_BE(ByteBasedBitPackingReader_34bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_34bit_BE &operator=(const ByteBasedBitPackingReader_34bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_34bit_BE &operator=(ByteBasedBitPackingReader_34bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_35bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_35bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(35, is) {}

    ByteBasedBitPackingReader_35bit_LE(const ByteBasedBitPackingReader_35bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_35bit_LE(ByteBasedBitPackingReader_35bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_35bit_LE &operator=(const ByteBasedBitPackingReader_35bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_35bit_LE &operator=(ByteBasedBitPackingReader_35bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_35bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_35bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(35, is) {}

    ByteBasedBitPackingReader_35bit_BE(const ByteBasedBitPackingReader_35bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_35bit_BE(ByteBasedBitPackingReader_35bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_35bit_BE &operator=(const ByteBasedBitPackingReader_35bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_35bit_BE &operator=(ByteBasedBitPackingReader_35bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_36bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_36bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(36, is) {}

    ByteBasedBitPackingReader_36bit_LE(const ByteBasedBitPackingReader_36bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_36bit_LE(ByteBasedBitPackingReader_36bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_36bit_LE &operator=(const ByteBasedBitPackingReader_36bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_36bit_LE &operator=(ByteBasedBitPackingReader_36bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_36bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_36bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(36, is) {}

    ByteBasedBitPackingReader_36bit_BE(const ByteBasedBitPackingReader_36bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_36bit_BE(ByteBasedBitPackingReader_36bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_36bit_BE &operator=(const ByteBasedBitPackingReader_36bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_36bit_BE &operator=(ByteBasedBitPackingReader_36bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_37bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_37bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(37, is) {}

    ByteBasedBitPackingReader_37bit_LE(const ByteBasedBitPackingReader_37bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_37bit_LE(ByteBasedBitPackingReader_37bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_37bit_LE &operator=(const ByteBasedBitPackingReader_37bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_37bit_LE &operator=(ByteBasedBitPackingReader_37bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_37bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_37bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(37, is) {}

    ByteBasedBitPackingReader_37bit_BE(const ByteBasedBitPackingReader_37bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_37bit_BE(ByteBasedBitPackingReader_37bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_37bit_BE &operator=(const ByteBasedBitPackingReader_37bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_37bit_BE &operator=(ByteBasedBitPackingReader_37bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_38bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_38bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(38, is) {}

    ByteBasedBitPackingReader_38bit_LE(const ByteBasedBitPackingReader_38bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_38bit_LE(ByteBasedBitPackingReader_38bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_38bit_LE &operator=(const ByteBasedBitPackingReader_38bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_38bit_LE &operator=(ByteBasedBitPackingReader_38bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_38bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_38bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(38, is) {}

    ByteBasedBitPackingReader_38bit_BE(const ByteBasedBitPackingReader_38bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_38bit_BE(ByteBasedBitPackingReader_38bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_38bit_BE &operator=(const ByteBasedBitPackingReader_38bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_38bit_BE &operator=(ByteBasedBitPackingReader_38bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_39bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_39bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(39, is) {}

    ByteBasedBitPackingReader_39bit_LE(const ByteBasedBitPackingReader_39bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_39bit_LE(ByteBasedBitPackingReader_39bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_39bit_LE &operator=(const ByteBasedBitPackingReader_39bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_39bit_LE &operator=(ByteBasedBitPackingReader_39bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_39bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_39bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(39, is) {}

    ByteBasedBitPackingReader_39bit_BE(const ByteBasedBitPackingReader_39bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_39bit_BE(ByteBasedBitPackingReader_39bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_39bit_BE &operator=(const ByteBasedBitPackingReader_39bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_39bit_BE &operator=(ByteBasedBitPackingReader_39bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_40bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_40bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(40, is) {}

    ByteBasedBitPackingReader_40bit_LE(const ByteBasedBitPackingReader_40bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_40bit_LE(ByteBasedBitPackingReader_40bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_40bit_LE &operator=(const ByteBasedBitPackingReader_40bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_40bit_LE &operator=(ByteBasedBitPackingReader_40bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_40bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_40bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(40, is) {}

    ByteBasedBitPackingReader_40bit_BE(const ByteBasedBitPackingReader_40bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_40bit_BE(ByteBasedBitPackingReader_40bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_40bit_BE &operator=(const ByteBasedBitPackingReader_40bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_40bit_BE &operator=(ByteBasedBitPackingReader_40bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_41bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_41bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(41, is) {}

    ByteBasedBitPackingReader_41bit_LE(const ByteBasedBitPackingReader_41bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_41bit_LE(ByteBasedBitPackingReader_41bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_41bit_LE &operator=(const ByteBasedBitPackingReader_41bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_41bit_LE &operator=(ByteBasedBitPackingReader_41bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_41bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_41bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(41, is) {}

    ByteBasedBitPackingReader_41bit_BE(const ByteBasedBitPackingReader_41bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_41bit_BE(ByteBasedBitPackingReader_41bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_41bit_BE &operator=(const ByteBasedBitPackingReader_41bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_41bit_BE &operator=(ByteBasedBitPackingReader_41bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_42bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_42bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(42, is) {}

    ByteBasedBitPackingReader_42bit_LE(const ByteBasedBitPackingReader_42bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_42bit_LE(ByteBasedBitPackingReader_42bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_42bit_LE &operator=(const ByteBasedBitPackingReader_42bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_42bit_LE &operator=(ByteBasedBitPackingReader_42bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_42bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_42bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(42, is) {}

    ByteBasedBitPackingReader_42bit_BE(const ByteBasedBitPackingReader_42bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_42bit_BE(ByteBasedBitPackingReader_42bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_42bit_BE &operator=(const ByteBasedBitPackingReader_42bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_42bit_BE &operator=(ByteBasedBitPackingReader_42bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_43bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_43bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(43, is) {}

    ByteBasedBitPackingReader_43bit_LE(const ByteBasedBitPackingReader_43bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_43bit_LE(ByteBasedBitPackingReader_43bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_43bit_LE &operator=(const ByteBasedBitPackingReader_43bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_43bit_LE &operator=(ByteBasedBitPackingReader_43bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_43bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_43bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(43, is) {}

    ByteBasedBitPackingReader_43bit_BE(const ByteBasedBitPackingReader_43bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_43bit_BE(ByteBasedBitPackingReader_43bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_43bit_BE &operator=(const ByteBasedBitPackingReader_43bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_43bit_BE &operator=(ByteBasedBitPackingReader_43bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_44bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_44bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(44, is) {}

    ByteBasedBitPackingReader_44bit_LE(const ByteBasedBitPackingReader_44bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_44bit_LE(ByteBasedBitPackingReader_44bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_44bit_LE &operator=(const ByteBasedBitPackingReader_44bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_44bit_LE &operator=(ByteBasedBitPackingReader_44bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_44bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_44bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(44, is) {}

    ByteBasedBitPackingReader_44bit_BE(const ByteBasedBitPackingReader_44bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_44bit_BE(ByteBasedBitPackingReader_44bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_44bit_BE &operator=(const ByteBasedBitPackingReader_44bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_44bit_BE &operator=(ByteBasedBitPackingReader_44bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_45bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_45bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(45, is) {}

    ByteBasedBitPackingReader_45bit_LE(const ByteBasedBitPackingReader_45bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_45bit_LE(ByteBasedBitPackingReader_45bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_45bit_LE &operator=(const ByteBasedBitPackingReader_45bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_45bit_LE &operator=(ByteBasedBitPackingReader_45bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_45bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_45bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(45, is) {}

    ByteBasedBitPackingReader_45bit_BE(const ByteBasedBitPackingReader_45bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_45bit_BE(ByteBasedBitPackingReader_45bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_45bit_BE &operator=(const ByteBasedBitPackingReader_45bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_45bit_BE &operator=(ByteBasedBitPackingReader_45bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_46bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_46bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(46, is) {}

    ByteBasedBitPackingReader_46bit_LE(const ByteBasedBitPackingReader_46bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_46bit_LE(ByteBasedBitPackingReader_46bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_46bit_LE &operator=(const ByteBasedBitPackingReader_46bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_46bit_LE &operator=(ByteBasedBitPackingReader_46bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_46bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_46bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(46, is) {}

    ByteBasedBitPackingReader_46bit_BE(const ByteBasedBitPackingReader_46bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_46bit_BE(ByteBasedBitPackingReader_46bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_46bit_BE &operator=(const ByteBasedBitPackingReader_46bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_46bit_BE &operator=(ByteBasedBitPackingReader_46bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_47bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_47bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(47, is) {}

    ByteBasedBitPackingReader_47bit_LE(const ByteBasedBitPackingReader_47bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_47bit_LE(ByteBasedBitPackingReader_47bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_47bit_LE &operator=(const ByteBasedBitPackingReader_47bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_47bit_LE &operator=(ByteBasedBitPackingReader_47bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_47bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_47bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(47, is) {}

    ByteBasedBitPackingReader_47bit_BE(const ByteBasedBitPackingReader_47bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_47bit_BE(ByteBasedBitPackingReader_47bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_47bit_BE &operator=(const ByteBasedBitPackingReader_47bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_47bit_BE &operator=(ByteBasedBitPackingReader_47bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_48bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_48bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(48, is) {}

    ByteBasedBitPackingReader_48bit_LE(const ByteBasedBitPackingReader_48bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_48bit_LE(ByteBasedBitPackingReader_48bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_48bit_LE &operator=(const ByteBasedBitPackingReader_48bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_48bit_LE &operator=(ByteBasedBitPackingReader_48bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_48bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_48bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(48, is) {}

    ByteBasedBitPackingReader_48bit_BE(const ByteBasedBitPackingReader_48bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_48bit_BE(ByteBasedBitPackingReader_48bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_48bit_BE &operator=(const ByteBasedBitPackingReader_48bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_48bit_BE &operator=(ByteBasedBitPackingReader_48bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_49bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_49bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(49, is) {}

    ByteBasedBitPackingReader_49bit_LE(const ByteBasedBitPackingReader_49bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_49bit_LE(ByteBasedBitPackingReader_49bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_49bit_LE &operator=(const ByteBasedBitPackingReader_49bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_49bit_LE &operator=(ByteBasedBitPackingReader_49bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_49bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_49bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(49, is) {}

    ByteBasedBitPackingReader_49bit_BE(const ByteBasedBitPackingReader_49bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_49bit_BE(ByteBasedBitPackingReader_49bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_49bit_BE &operator=(const ByteBasedBitPackingReader_49bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_49bit_BE &operator=(ByteBasedBitPackingReader_49bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_50bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_50bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(50, is) {}

    ByteBasedBitPackingReader_50bit_LE(const ByteBasedBitPackingReader_50bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_50bit_LE(ByteBasedBitPackingReader_50bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_50bit_LE &operator=(const ByteBasedBitPackingReader_50bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_50bit_LE &operator=(ByteBasedBitPackingReader_50bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_50bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_50bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(50, is) {}

    ByteBasedBitPackingReader_50bit_BE(const ByteBasedBitPackingReader_50bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_50bit_BE(ByteBasedBitPackingReader_50bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_50bit_BE &operator=(const ByteBasedBitPackingReader_50bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_50bit_BE &operator=(ByteBasedBitPackingReader_50bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_51bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_51bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(51, is) {}

    ByteBasedBitPackingReader_51bit_LE(const ByteBasedBitPackingReader_51bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_51bit_LE(ByteBasedBitPackingReader_51bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_51bit_LE &operator=(const ByteBasedBitPackingReader_51bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_51bit_LE &operator=(ByteBasedBitPackingReader_51bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_51bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_51bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(51, is) {}

    ByteBasedBitPackingReader_51bit_BE(const ByteBasedBitPackingReader_51bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_51bit_BE(ByteBasedBitPackingReader_51bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_51bit_BE &operator=(const ByteBasedBitPackingReader_51bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_51bit_BE &operator=(ByteBasedBitPackingReader_51bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_52bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_52bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(52, is) {}

    ByteBasedBitPackingReader_52bit_LE(const ByteBasedBitPackingReader_52bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_52bit_LE(ByteBasedBitPackingReader_52bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_52bit_LE &operator=(const ByteBasedBitPackingReader_52bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_52bit_LE &operator=(ByteBasedBitPackingReader_52bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_52bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_52bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(52, is) {}

    ByteBasedBitPackingReader_52bit_BE(const ByteBasedBitPackingReader_52bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_52bit_BE(ByteBasedBitPackingReader_52bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_52bit_BE &operator=(const ByteBasedBitPackingReader_52bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_52bit_BE &operator=(ByteBasedBitPackingReader_52bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_53bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_53bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(53, is) {}

    ByteBasedBitPackingReader_53bit_LE(const ByteBasedBitPackingReader_53bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_53bit_LE(ByteBasedBitPackingReader_53bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_53bit_LE &operator=(const ByteBasedBitPackingReader_53bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_53bit_LE &operator=(ByteBasedBitPackingReader_53bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_53bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_53bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(53, is) {}

    ByteBasedBitPackingReader_53bit_BE(const ByteBasedBitPackingReader_53bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_53bit_BE(ByteBasedBitPackingReader_53bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_53bit_BE &operator=(const ByteBasedBitPackingReader_53bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_53bit_BE &operator=(ByteBasedBitPackingReader_53bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_54bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_54bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(54, is) {}

    ByteBasedBitPackingReader_54bit_LE(const ByteBasedBitPackingReader_54bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_54bit_LE(ByteBasedBitPackingReader_54bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_54bit_LE &operator=(const ByteBasedBitPackingReader_54bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_54bit_LE &operator=(ByteBasedBitPackingReader_54bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_54bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_54bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(54, is) {}

    ByteBasedBitPackingReader_54bit_BE(const ByteBasedBitPackingReader_54bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_54bit_BE(ByteBasedBitPackingReader_54bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_54bit_BE &operator=(const ByteBasedBitPackingReader_54bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_54bit_BE &operator=(ByteBasedBitPackingReader_54bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_55bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_55bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(55, is) {}

    ByteBasedBitPackingReader_55bit_LE(const ByteBasedBitPackingReader_55bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_55bit_LE(ByteBasedBitPackingReader_55bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_55bit_LE &operator=(const ByteBasedBitPackingReader_55bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_55bit_LE &operator=(ByteBasedBitPackingReader_55bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_55bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_55bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(55, is) {}

    ByteBasedBitPackingReader_55bit_BE(const ByteBasedBitPackingReader_55bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_55bit_BE(ByteBasedBitPackingReader_55bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_55bit_BE &operator=(const ByteBasedBitPackingReader_55bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_55bit_BE &operator=(ByteBasedBitPackingReader_55bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_56bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_56bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(56, is) {}

    ByteBasedBitPackingReader_56bit_LE(const ByteBasedBitPackingReader_56bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_56bit_LE(ByteBasedBitPackingReader_56bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_56bit_LE &operator=(const ByteBasedBitPackingReader_56bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_56bit_LE &operator=(ByteBasedBitPackingReader_56bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_56bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_56bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(56, is) {}

    ByteBasedBitPackingReader_56bit_BE(const ByteBasedBitPackingReader_56bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_56bit_BE(ByteBasedBitPackingReader_56bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_56bit_BE &operator=(const ByteBasedBitPackingReader_56bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_56bit_BE &operator=(ByteBasedBitPackingReader_56bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_57bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_57bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(57, is) {}

    ByteBasedBitPackingReader_57bit_LE(const ByteBasedBitPackingReader_57bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_57bit_LE(ByteBasedBitPackingReader_57bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_57bit_LE &operator=(const ByteBasedBitPackingReader_57bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_57bit_LE &operator=(ByteBasedBitPackingReader_57bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_57bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_57bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(57, is) {}

    ByteBasedBitPackingReader_57bit_BE(const ByteBasedBitPackingReader_57bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_57bit_BE(ByteBasedBitPackingReader_57bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_57bit_BE &operator=(const ByteBasedBitPackingReader_57bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_57bit_BE &operator=(ByteBasedBitPackingReader_57bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_58bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_58bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(58, is) {}

    ByteBasedBitPackingReader_58bit_LE(const ByteBasedBitPackingReader_58bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_58bit_LE(ByteBasedBitPackingReader_58bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_58bit_LE &operator=(const ByteBasedBitPackingReader_58bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_58bit_LE &operator=(ByteBasedBitPackingReader_58bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_58bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_58bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(58, is) {}

    ByteBasedBitPackingReader_58bit_BE(const ByteBasedBitPackingReader_58bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_58bit_BE(ByteBasedBitPackingReader_58bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_58bit_BE &operator=(const ByteBasedBitPackingReader_58bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_58bit_BE &operator=(ByteBasedBitPackingReader_58bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_59bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_59bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(59, is) {}

    ByteBasedBitPackingReader_59bit_LE(const ByteBasedBitPackingReader_59bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_59bit_LE(ByteBasedBitPackingReader_59bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_59bit_LE &operator=(const ByteBasedBitPackingReader_59bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_59bit_LE &operator=(ByteBasedBitPackingReader_59bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_59bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_59bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(59, is) {}

    ByteBasedBitPackingReader_59bit_BE(const ByteBasedBitPackingReader_59bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_59bit_BE(ByteBasedBitPackingReader_59bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_59bit_BE &operator=(const ByteBasedBitPackingReader_59bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_59bit_BE &operator=(ByteBasedBitPackingReader_59bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_60bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_60bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(60, is) {}

    ByteBasedBitPackingReader_60bit_LE(const ByteBasedBitPackingReader_60bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_60bit_LE(ByteBasedBitPackingReader_60bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_60bit_LE &operator=(const ByteBasedBitPackingReader_60bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_60bit_LE &operator=(ByteBasedBitPackingReader_60bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_60bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_60bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(60, is) {}

    ByteBasedBitPackingReader_60bit_BE(const ByteBasedBitPackingReader_60bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_60bit_BE(ByteBasedBitPackingReader_60bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_60bit_BE &operator=(const ByteBasedBitPackingReader_60bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_60bit_BE &operator=(ByteBasedBitPackingReader_60bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_61bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_61bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(61, is) {}

    ByteBasedBitPackingReader_61bit_LE(const ByteBasedBitPackingReader_61bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_61bit_LE(ByteBasedBitPackingReader_61bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_61bit_LE &operator=(const ByteBasedBitPackingReader_61bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_61bit_LE &operator=(ByteBasedBitPackingReader_61bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_61bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_61bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(61, is) {}

    ByteBasedBitPackingReader_61bit_BE(const ByteBasedBitPackingReader_61bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_61bit_BE(ByteBasedBitPackingReader_61bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_61bit_BE &operator=(const ByteBasedBitPackingReader_61bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_61bit_BE &operator=(ByteBasedBitPackingReader_61bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_62bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_62bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(62, is) {}

    ByteBasedBitPackingReader_62bit_LE(const ByteBasedBitPackingReader_62bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_62bit_LE(ByteBasedBitPackingReader_62bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_62bit_LE &operator=(const ByteBasedBitPackingReader_62bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_62bit_LE &operator=(ByteBasedBitPackingReader_62bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_62bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_62bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(62, is) {}

    ByteBasedBitPackingReader_62bit_BE(const ByteBasedBitPackingReader_62bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_62bit_BE(ByteBasedBitPackingReader_62bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_62bit_BE &operator=(const ByteBasedBitPackingReader_62bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_62bit_BE &operator=(ByteBasedBitPackingReader_62bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_63bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_63bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(63, is) {}

    ByteBasedBitPackingReader_63bit_LE(const ByteBasedBitPackingReader_63bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_63bit_LE(ByteBasedBitPackingReader_63bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_63bit_LE &operator=(const ByteBasedBitPackingReader_63bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_63bit_LE &operator=(ByteBasedBitPackingReader_63bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_63bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_63bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(63, is) {}

    ByteBasedBitPackingReader_63bit_BE(const ByteBasedBitPackingReader_63bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_63bit_BE(ByteBasedBitPackingReader_63bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_63bit_BE &operator=(const ByteBasedBitPackingReader_63bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_63bit_BE &operator=(ByteBasedBitPackingReader_63bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_64bit_LE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_64bit_LE(shared_ptr<istream> is) : ByteBasedBitPackingReader(64, is) {}

    ByteBasedBitPackingReader_64bit_LE(const ByteBasedBitPackingReader_64bit_LE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_64bit_LE(ByteBasedBitPackingReader_64bit_LE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_64bit_LE &operator=(const ByteBasedBitPackingReader_64bit_LE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_64bit_LE &operator=(ByteBasedBitPackingReader_64bit_LE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    
class ByteBasedBitPackingReader_64bit_BE : public ByteBasedBitPackingReader {
public:
    ByteBasedBitPackingReader_64bit_BE(shared_ptr<istream> is) : ByteBasedBitPackingReader(64, is) {}

    ByteBasedBitPackingReader_64bit_BE(const ByteBasedBitPackingReader_64bit_BE &other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_64bit_BE(ByteBasedBitPackingReader_64bit_BE &&other) : ByteBasedBitPackingReader(other) {}

    ByteBasedBitPackingReader_64bit_BE &operator=(const ByteBasedBitPackingReader_64bit_BE &other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

    ByteBasedBitPackingReader_64bit_BE &operator=(ByteBasedBitPackingReader_64bit_BE &&other) {
        ByteBasedBitPackingReader::operator=(other);
        return *this;
    }

protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) override;
};
    

class  ByteBasedBitPackingReaders {
public:
    static ByteBasedBitPackingReader*  create(shared_ptr<istream> is, int num_bits, bool big_endian) {

        switch(num_bits) {
    		case 1: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_1bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_1bit_LE(is));
		case 2: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_2bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_2bit_LE(is));
		case 3: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_3bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_3bit_LE(is));
		case 4: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_4bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_4bit_LE(is));
		case 5: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_5bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_5bit_LE(is));
		case 6: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_6bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_6bit_LE(is));
		case 7: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_7bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_7bit_LE(is));
		case 8: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_8bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_8bit_LE(is));
		case 9: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_9bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_9bit_LE(is));
		case 10: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_10bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_10bit_LE(is));
		case 11: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_11bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_11bit_LE(is));
		case 12: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_12bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_12bit_LE(is));
		case 13: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_13bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_13bit_LE(is));
		case 14: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_14bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_14bit_LE(is));
		case 15: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_15bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_15bit_LE(is));
		case 16: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_16bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_16bit_LE(is));
		case 17: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_17bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_17bit_LE(is));
		case 18: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_18bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_18bit_LE(is));
		case 19: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_19bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_19bit_LE(is));
		case 20: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_20bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_20bit_LE(is));
		case 21: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_21bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_21bit_LE(is));
		case 22: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_22bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_22bit_LE(is));
		case 23: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_23bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_23bit_LE(is));
		case 24: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_24bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_24bit_LE(is));
		case 25: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_25bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_25bit_LE(is));
		case 26: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_26bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_26bit_LE(is));
		case 27: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_27bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_27bit_LE(is));
		case 28: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_28bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_28bit_LE(is));
		case 29: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_29bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_29bit_LE(is));
		case 30: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_30bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_30bit_LE(is));
		case 31: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_31bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_31bit_LE(is));
		case 32: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_32bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_32bit_LE(is));
		case 33: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_33bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_33bit_LE(is));
		case 34: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_34bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_34bit_LE(is));
		case 35: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_35bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_35bit_LE(is));
		case 36: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_36bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_36bit_LE(is));
		case 37: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_37bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_37bit_LE(is));
		case 38: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_38bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_38bit_LE(is));
		case 39: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_39bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_39bit_LE(is));
		case 40: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_40bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_40bit_LE(is));
		case 41: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_41bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_41bit_LE(is));
		case 42: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_42bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_42bit_LE(is));
		case 43: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_43bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_43bit_LE(is));
		case 44: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_44bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_44bit_LE(is));
		case 45: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_45bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_45bit_LE(is));
		case 46: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_46bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_46bit_LE(is));
		case 47: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_47bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_47bit_LE(is));
		case 48: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_48bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_48bit_LE(is));
		case 49: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_49bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_49bit_LE(is));
		case 50: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_50bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_50bit_LE(is));
		case 51: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_51bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_51bit_LE(is));
		case 52: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_52bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_52bit_LE(is));
		case 53: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_53bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_53bit_LE(is));
		case 54: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_54bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_54bit_LE(is));
		case 55: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_55bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_55bit_LE(is));
		case 56: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_56bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_56bit_LE(is));
		case 57: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_57bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_57bit_LE(is));
		case 58: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_58bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_58bit_LE(is));
		case 59: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_59bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_59bit_LE(is));
		case 60: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_60bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_60bit_LE(is));
		case 61: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_61bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_61bit_LE(is));
		case 62: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_62bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_62bit_LE(is));
		case 63: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_63bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_63bit_LE(is));
		case 64: return big_endian ? static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_64bit_BE(is)) : static_cast<ByteBasedBitPackingReader*>(new ByteBasedBitPackingReader_64bit_LE(is));

        }

        stringstream s;
        s << "Invalid bitness: " << num_bits;
        throw new runtime_error(s.str());
    }
};

}
}
#endif
    