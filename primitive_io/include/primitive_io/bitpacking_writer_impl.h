
/*
 * This file is based on ByteBasedBitPackingEncoder obtained from  https://github.com/apache/parquet-mr/
*/
//
// Created by rbyst on 8/14/2016.
//

#ifndef PRIMITIVE_IO_PRIMITIVE_IO_BITPACKING_WRITER_H
#define PRIMITIVE_IO_PRIMITIVE_IO_BITPACKING_WRITER_H

#include <primitive_io/bitpacking_writer.h>
#include <cstring>
#include <stdexcept>
#include <string>
#include <sstream>
#include <ostream>

using namespace std;

namespace rbystrit {
namespace primitive_io {

    
class ByteBasedBitPackingWriter_1bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_1bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(1, os) {}

    ByteBasedBitPackingWriter_1bit_LE(const ByteBasedBitPackingWriter_1bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_1bit_LE(ByteBasedBitPackingWriter_1bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_1bit_LE &operator=(const ByteBasedBitPackingWriter_1bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_1bit_LE &operator=(ByteBasedBitPackingWriter_1bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_1bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_1bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(1, os) {}

    ByteBasedBitPackingWriter_1bit_BE(const ByteBasedBitPackingWriter_1bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_1bit_BE(ByteBasedBitPackingWriter_1bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_1bit_BE &operator=(const ByteBasedBitPackingWriter_1bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_1bit_BE &operator=(ByteBasedBitPackingWriter_1bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_2bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_2bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(2, os) {}

    ByteBasedBitPackingWriter_2bit_LE(const ByteBasedBitPackingWriter_2bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_2bit_LE(ByteBasedBitPackingWriter_2bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_2bit_LE &operator=(const ByteBasedBitPackingWriter_2bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_2bit_LE &operator=(ByteBasedBitPackingWriter_2bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_2bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_2bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(2, os) {}

    ByteBasedBitPackingWriter_2bit_BE(const ByteBasedBitPackingWriter_2bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_2bit_BE(ByteBasedBitPackingWriter_2bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_2bit_BE &operator=(const ByteBasedBitPackingWriter_2bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_2bit_BE &operator=(ByteBasedBitPackingWriter_2bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_3bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_3bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(3, os) {}

    ByteBasedBitPackingWriter_3bit_LE(const ByteBasedBitPackingWriter_3bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_3bit_LE(ByteBasedBitPackingWriter_3bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_3bit_LE &operator=(const ByteBasedBitPackingWriter_3bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_3bit_LE &operator=(ByteBasedBitPackingWriter_3bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_3bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_3bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(3, os) {}

    ByteBasedBitPackingWriter_3bit_BE(const ByteBasedBitPackingWriter_3bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_3bit_BE(ByteBasedBitPackingWriter_3bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_3bit_BE &operator=(const ByteBasedBitPackingWriter_3bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_3bit_BE &operator=(ByteBasedBitPackingWriter_3bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_4bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_4bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(4, os) {}

    ByteBasedBitPackingWriter_4bit_LE(const ByteBasedBitPackingWriter_4bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_4bit_LE(ByteBasedBitPackingWriter_4bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_4bit_LE &operator=(const ByteBasedBitPackingWriter_4bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_4bit_LE &operator=(ByteBasedBitPackingWriter_4bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_4bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_4bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(4, os) {}

    ByteBasedBitPackingWriter_4bit_BE(const ByteBasedBitPackingWriter_4bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_4bit_BE(ByteBasedBitPackingWriter_4bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_4bit_BE &operator=(const ByteBasedBitPackingWriter_4bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_4bit_BE &operator=(ByteBasedBitPackingWriter_4bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_5bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_5bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(5, os) {}

    ByteBasedBitPackingWriter_5bit_LE(const ByteBasedBitPackingWriter_5bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_5bit_LE(ByteBasedBitPackingWriter_5bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_5bit_LE &operator=(const ByteBasedBitPackingWriter_5bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_5bit_LE &operator=(ByteBasedBitPackingWriter_5bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_5bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_5bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(5, os) {}

    ByteBasedBitPackingWriter_5bit_BE(const ByteBasedBitPackingWriter_5bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_5bit_BE(ByteBasedBitPackingWriter_5bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_5bit_BE &operator=(const ByteBasedBitPackingWriter_5bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_5bit_BE &operator=(ByteBasedBitPackingWriter_5bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_6bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_6bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(6, os) {}

    ByteBasedBitPackingWriter_6bit_LE(const ByteBasedBitPackingWriter_6bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_6bit_LE(ByteBasedBitPackingWriter_6bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_6bit_LE &operator=(const ByteBasedBitPackingWriter_6bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_6bit_LE &operator=(ByteBasedBitPackingWriter_6bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_6bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_6bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(6, os) {}

    ByteBasedBitPackingWriter_6bit_BE(const ByteBasedBitPackingWriter_6bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_6bit_BE(ByteBasedBitPackingWriter_6bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_6bit_BE &operator=(const ByteBasedBitPackingWriter_6bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_6bit_BE &operator=(ByteBasedBitPackingWriter_6bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_7bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_7bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(7, os) {}

    ByteBasedBitPackingWriter_7bit_LE(const ByteBasedBitPackingWriter_7bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_7bit_LE(ByteBasedBitPackingWriter_7bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_7bit_LE &operator=(const ByteBasedBitPackingWriter_7bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_7bit_LE &operator=(ByteBasedBitPackingWriter_7bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_7bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_7bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(7, os) {}

    ByteBasedBitPackingWriter_7bit_BE(const ByteBasedBitPackingWriter_7bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_7bit_BE(ByteBasedBitPackingWriter_7bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_7bit_BE &operator=(const ByteBasedBitPackingWriter_7bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_7bit_BE &operator=(ByteBasedBitPackingWriter_7bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_8bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_8bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(8, os) {}

    ByteBasedBitPackingWriter_8bit_LE(const ByteBasedBitPackingWriter_8bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_8bit_LE(ByteBasedBitPackingWriter_8bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_8bit_LE &operator=(const ByteBasedBitPackingWriter_8bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_8bit_LE &operator=(ByteBasedBitPackingWriter_8bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_8bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_8bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(8, os) {}

    ByteBasedBitPackingWriter_8bit_BE(const ByteBasedBitPackingWriter_8bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_8bit_BE(ByteBasedBitPackingWriter_8bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_8bit_BE &operator=(const ByteBasedBitPackingWriter_8bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_8bit_BE &operator=(ByteBasedBitPackingWriter_8bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_9bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_9bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(9, os) {}

    ByteBasedBitPackingWriter_9bit_LE(const ByteBasedBitPackingWriter_9bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_9bit_LE(ByteBasedBitPackingWriter_9bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_9bit_LE &operator=(const ByteBasedBitPackingWriter_9bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_9bit_LE &operator=(ByteBasedBitPackingWriter_9bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_9bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_9bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(9, os) {}

    ByteBasedBitPackingWriter_9bit_BE(const ByteBasedBitPackingWriter_9bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_9bit_BE(ByteBasedBitPackingWriter_9bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_9bit_BE &operator=(const ByteBasedBitPackingWriter_9bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_9bit_BE &operator=(ByteBasedBitPackingWriter_9bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_10bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_10bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(10, os) {}

    ByteBasedBitPackingWriter_10bit_LE(const ByteBasedBitPackingWriter_10bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_10bit_LE(ByteBasedBitPackingWriter_10bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_10bit_LE &operator=(const ByteBasedBitPackingWriter_10bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_10bit_LE &operator=(ByteBasedBitPackingWriter_10bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_10bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_10bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(10, os) {}

    ByteBasedBitPackingWriter_10bit_BE(const ByteBasedBitPackingWriter_10bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_10bit_BE(ByteBasedBitPackingWriter_10bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_10bit_BE &operator=(const ByteBasedBitPackingWriter_10bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_10bit_BE &operator=(ByteBasedBitPackingWriter_10bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_11bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_11bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(11, os) {}

    ByteBasedBitPackingWriter_11bit_LE(const ByteBasedBitPackingWriter_11bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_11bit_LE(ByteBasedBitPackingWriter_11bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_11bit_LE &operator=(const ByteBasedBitPackingWriter_11bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_11bit_LE &operator=(ByteBasedBitPackingWriter_11bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_11bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_11bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(11, os) {}

    ByteBasedBitPackingWriter_11bit_BE(const ByteBasedBitPackingWriter_11bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_11bit_BE(ByteBasedBitPackingWriter_11bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_11bit_BE &operator=(const ByteBasedBitPackingWriter_11bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_11bit_BE &operator=(ByteBasedBitPackingWriter_11bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_12bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_12bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(12, os) {}

    ByteBasedBitPackingWriter_12bit_LE(const ByteBasedBitPackingWriter_12bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_12bit_LE(ByteBasedBitPackingWriter_12bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_12bit_LE &operator=(const ByteBasedBitPackingWriter_12bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_12bit_LE &operator=(ByteBasedBitPackingWriter_12bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_12bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_12bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(12, os) {}

    ByteBasedBitPackingWriter_12bit_BE(const ByteBasedBitPackingWriter_12bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_12bit_BE(ByteBasedBitPackingWriter_12bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_12bit_BE &operator=(const ByteBasedBitPackingWriter_12bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_12bit_BE &operator=(ByteBasedBitPackingWriter_12bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_13bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_13bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(13, os) {}

    ByteBasedBitPackingWriter_13bit_LE(const ByteBasedBitPackingWriter_13bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_13bit_LE(ByteBasedBitPackingWriter_13bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_13bit_LE &operator=(const ByteBasedBitPackingWriter_13bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_13bit_LE &operator=(ByteBasedBitPackingWriter_13bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_13bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_13bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(13, os) {}

    ByteBasedBitPackingWriter_13bit_BE(const ByteBasedBitPackingWriter_13bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_13bit_BE(ByteBasedBitPackingWriter_13bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_13bit_BE &operator=(const ByteBasedBitPackingWriter_13bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_13bit_BE &operator=(ByteBasedBitPackingWriter_13bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_14bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_14bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(14, os) {}

    ByteBasedBitPackingWriter_14bit_LE(const ByteBasedBitPackingWriter_14bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_14bit_LE(ByteBasedBitPackingWriter_14bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_14bit_LE &operator=(const ByteBasedBitPackingWriter_14bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_14bit_LE &operator=(ByteBasedBitPackingWriter_14bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_14bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_14bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(14, os) {}

    ByteBasedBitPackingWriter_14bit_BE(const ByteBasedBitPackingWriter_14bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_14bit_BE(ByteBasedBitPackingWriter_14bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_14bit_BE &operator=(const ByteBasedBitPackingWriter_14bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_14bit_BE &operator=(ByteBasedBitPackingWriter_14bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_15bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_15bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(15, os) {}

    ByteBasedBitPackingWriter_15bit_LE(const ByteBasedBitPackingWriter_15bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_15bit_LE(ByteBasedBitPackingWriter_15bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_15bit_LE &operator=(const ByteBasedBitPackingWriter_15bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_15bit_LE &operator=(ByteBasedBitPackingWriter_15bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_15bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_15bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(15, os) {}

    ByteBasedBitPackingWriter_15bit_BE(const ByteBasedBitPackingWriter_15bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_15bit_BE(ByteBasedBitPackingWriter_15bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_15bit_BE &operator=(const ByteBasedBitPackingWriter_15bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_15bit_BE &operator=(ByteBasedBitPackingWriter_15bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_16bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_16bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(16, os) {}

    ByteBasedBitPackingWriter_16bit_LE(const ByteBasedBitPackingWriter_16bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_16bit_LE(ByteBasedBitPackingWriter_16bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_16bit_LE &operator=(const ByteBasedBitPackingWriter_16bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_16bit_LE &operator=(ByteBasedBitPackingWriter_16bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_16bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_16bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(16, os) {}

    ByteBasedBitPackingWriter_16bit_BE(const ByteBasedBitPackingWriter_16bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_16bit_BE(ByteBasedBitPackingWriter_16bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_16bit_BE &operator=(const ByteBasedBitPackingWriter_16bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_16bit_BE &operator=(ByteBasedBitPackingWriter_16bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_17bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_17bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(17, os) {}

    ByteBasedBitPackingWriter_17bit_LE(const ByteBasedBitPackingWriter_17bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_17bit_LE(ByteBasedBitPackingWriter_17bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_17bit_LE &operator=(const ByteBasedBitPackingWriter_17bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_17bit_LE &operator=(ByteBasedBitPackingWriter_17bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_17bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_17bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(17, os) {}

    ByteBasedBitPackingWriter_17bit_BE(const ByteBasedBitPackingWriter_17bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_17bit_BE(ByteBasedBitPackingWriter_17bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_17bit_BE &operator=(const ByteBasedBitPackingWriter_17bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_17bit_BE &operator=(ByteBasedBitPackingWriter_17bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_18bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_18bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(18, os) {}

    ByteBasedBitPackingWriter_18bit_LE(const ByteBasedBitPackingWriter_18bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_18bit_LE(ByteBasedBitPackingWriter_18bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_18bit_LE &operator=(const ByteBasedBitPackingWriter_18bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_18bit_LE &operator=(ByteBasedBitPackingWriter_18bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_18bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_18bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(18, os) {}

    ByteBasedBitPackingWriter_18bit_BE(const ByteBasedBitPackingWriter_18bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_18bit_BE(ByteBasedBitPackingWriter_18bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_18bit_BE &operator=(const ByteBasedBitPackingWriter_18bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_18bit_BE &operator=(ByteBasedBitPackingWriter_18bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_19bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_19bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(19, os) {}

    ByteBasedBitPackingWriter_19bit_LE(const ByteBasedBitPackingWriter_19bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_19bit_LE(ByteBasedBitPackingWriter_19bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_19bit_LE &operator=(const ByteBasedBitPackingWriter_19bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_19bit_LE &operator=(ByteBasedBitPackingWriter_19bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_19bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_19bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(19, os) {}

    ByteBasedBitPackingWriter_19bit_BE(const ByteBasedBitPackingWriter_19bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_19bit_BE(ByteBasedBitPackingWriter_19bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_19bit_BE &operator=(const ByteBasedBitPackingWriter_19bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_19bit_BE &operator=(ByteBasedBitPackingWriter_19bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_20bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_20bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(20, os) {}

    ByteBasedBitPackingWriter_20bit_LE(const ByteBasedBitPackingWriter_20bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_20bit_LE(ByteBasedBitPackingWriter_20bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_20bit_LE &operator=(const ByteBasedBitPackingWriter_20bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_20bit_LE &operator=(ByteBasedBitPackingWriter_20bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_20bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_20bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(20, os) {}

    ByteBasedBitPackingWriter_20bit_BE(const ByteBasedBitPackingWriter_20bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_20bit_BE(ByteBasedBitPackingWriter_20bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_20bit_BE &operator=(const ByteBasedBitPackingWriter_20bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_20bit_BE &operator=(ByteBasedBitPackingWriter_20bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_21bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_21bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(21, os) {}

    ByteBasedBitPackingWriter_21bit_LE(const ByteBasedBitPackingWriter_21bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_21bit_LE(ByteBasedBitPackingWriter_21bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_21bit_LE &operator=(const ByteBasedBitPackingWriter_21bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_21bit_LE &operator=(ByteBasedBitPackingWriter_21bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_21bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_21bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(21, os) {}

    ByteBasedBitPackingWriter_21bit_BE(const ByteBasedBitPackingWriter_21bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_21bit_BE(ByteBasedBitPackingWriter_21bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_21bit_BE &operator=(const ByteBasedBitPackingWriter_21bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_21bit_BE &operator=(ByteBasedBitPackingWriter_21bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_22bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_22bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(22, os) {}

    ByteBasedBitPackingWriter_22bit_LE(const ByteBasedBitPackingWriter_22bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_22bit_LE(ByteBasedBitPackingWriter_22bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_22bit_LE &operator=(const ByteBasedBitPackingWriter_22bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_22bit_LE &operator=(ByteBasedBitPackingWriter_22bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_22bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_22bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(22, os) {}

    ByteBasedBitPackingWriter_22bit_BE(const ByteBasedBitPackingWriter_22bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_22bit_BE(ByteBasedBitPackingWriter_22bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_22bit_BE &operator=(const ByteBasedBitPackingWriter_22bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_22bit_BE &operator=(ByteBasedBitPackingWriter_22bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_23bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_23bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(23, os) {}

    ByteBasedBitPackingWriter_23bit_LE(const ByteBasedBitPackingWriter_23bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_23bit_LE(ByteBasedBitPackingWriter_23bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_23bit_LE &operator=(const ByteBasedBitPackingWriter_23bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_23bit_LE &operator=(ByteBasedBitPackingWriter_23bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_23bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_23bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(23, os) {}

    ByteBasedBitPackingWriter_23bit_BE(const ByteBasedBitPackingWriter_23bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_23bit_BE(ByteBasedBitPackingWriter_23bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_23bit_BE &operator=(const ByteBasedBitPackingWriter_23bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_23bit_BE &operator=(ByteBasedBitPackingWriter_23bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_24bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_24bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(24, os) {}

    ByteBasedBitPackingWriter_24bit_LE(const ByteBasedBitPackingWriter_24bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_24bit_LE(ByteBasedBitPackingWriter_24bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_24bit_LE &operator=(const ByteBasedBitPackingWriter_24bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_24bit_LE &operator=(ByteBasedBitPackingWriter_24bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_24bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_24bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(24, os) {}

    ByteBasedBitPackingWriter_24bit_BE(const ByteBasedBitPackingWriter_24bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_24bit_BE(ByteBasedBitPackingWriter_24bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_24bit_BE &operator=(const ByteBasedBitPackingWriter_24bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_24bit_BE &operator=(ByteBasedBitPackingWriter_24bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_25bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_25bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(25, os) {}

    ByteBasedBitPackingWriter_25bit_LE(const ByteBasedBitPackingWriter_25bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_25bit_LE(ByteBasedBitPackingWriter_25bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_25bit_LE &operator=(const ByteBasedBitPackingWriter_25bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_25bit_LE &operator=(ByteBasedBitPackingWriter_25bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_25bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_25bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(25, os) {}

    ByteBasedBitPackingWriter_25bit_BE(const ByteBasedBitPackingWriter_25bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_25bit_BE(ByteBasedBitPackingWriter_25bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_25bit_BE &operator=(const ByteBasedBitPackingWriter_25bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_25bit_BE &operator=(ByteBasedBitPackingWriter_25bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_26bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_26bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(26, os) {}

    ByteBasedBitPackingWriter_26bit_LE(const ByteBasedBitPackingWriter_26bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_26bit_LE(ByteBasedBitPackingWriter_26bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_26bit_LE &operator=(const ByteBasedBitPackingWriter_26bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_26bit_LE &operator=(ByteBasedBitPackingWriter_26bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_26bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_26bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(26, os) {}

    ByteBasedBitPackingWriter_26bit_BE(const ByteBasedBitPackingWriter_26bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_26bit_BE(ByteBasedBitPackingWriter_26bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_26bit_BE &operator=(const ByteBasedBitPackingWriter_26bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_26bit_BE &operator=(ByteBasedBitPackingWriter_26bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_27bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_27bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(27, os) {}

    ByteBasedBitPackingWriter_27bit_LE(const ByteBasedBitPackingWriter_27bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_27bit_LE(ByteBasedBitPackingWriter_27bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_27bit_LE &operator=(const ByteBasedBitPackingWriter_27bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_27bit_LE &operator=(ByteBasedBitPackingWriter_27bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_27bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_27bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(27, os) {}

    ByteBasedBitPackingWriter_27bit_BE(const ByteBasedBitPackingWriter_27bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_27bit_BE(ByteBasedBitPackingWriter_27bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_27bit_BE &operator=(const ByteBasedBitPackingWriter_27bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_27bit_BE &operator=(ByteBasedBitPackingWriter_27bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_28bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_28bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(28, os) {}

    ByteBasedBitPackingWriter_28bit_LE(const ByteBasedBitPackingWriter_28bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_28bit_LE(ByteBasedBitPackingWriter_28bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_28bit_LE &operator=(const ByteBasedBitPackingWriter_28bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_28bit_LE &operator=(ByteBasedBitPackingWriter_28bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_28bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_28bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(28, os) {}

    ByteBasedBitPackingWriter_28bit_BE(const ByteBasedBitPackingWriter_28bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_28bit_BE(ByteBasedBitPackingWriter_28bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_28bit_BE &operator=(const ByteBasedBitPackingWriter_28bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_28bit_BE &operator=(ByteBasedBitPackingWriter_28bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_29bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_29bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(29, os) {}

    ByteBasedBitPackingWriter_29bit_LE(const ByteBasedBitPackingWriter_29bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_29bit_LE(ByteBasedBitPackingWriter_29bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_29bit_LE &operator=(const ByteBasedBitPackingWriter_29bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_29bit_LE &operator=(ByteBasedBitPackingWriter_29bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_29bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_29bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(29, os) {}

    ByteBasedBitPackingWriter_29bit_BE(const ByteBasedBitPackingWriter_29bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_29bit_BE(ByteBasedBitPackingWriter_29bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_29bit_BE &operator=(const ByteBasedBitPackingWriter_29bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_29bit_BE &operator=(ByteBasedBitPackingWriter_29bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_30bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_30bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(30, os) {}

    ByteBasedBitPackingWriter_30bit_LE(const ByteBasedBitPackingWriter_30bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_30bit_LE(ByteBasedBitPackingWriter_30bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_30bit_LE &operator=(const ByteBasedBitPackingWriter_30bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_30bit_LE &operator=(ByteBasedBitPackingWriter_30bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_30bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_30bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(30, os) {}

    ByteBasedBitPackingWriter_30bit_BE(const ByteBasedBitPackingWriter_30bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_30bit_BE(ByteBasedBitPackingWriter_30bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_30bit_BE &operator=(const ByteBasedBitPackingWriter_30bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_30bit_BE &operator=(ByteBasedBitPackingWriter_30bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_31bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_31bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(31, os) {}

    ByteBasedBitPackingWriter_31bit_LE(const ByteBasedBitPackingWriter_31bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_31bit_LE(ByteBasedBitPackingWriter_31bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_31bit_LE &operator=(const ByteBasedBitPackingWriter_31bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_31bit_LE &operator=(ByteBasedBitPackingWriter_31bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_31bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_31bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(31, os) {}

    ByteBasedBitPackingWriter_31bit_BE(const ByteBasedBitPackingWriter_31bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_31bit_BE(ByteBasedBitPackingWriter_31bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_31bit_BE &operator=(const ByteBasedBitPackingWriter_31bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_31bit_BE &operator=(ByteBasedBitPackingWriter_31bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_32bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_32bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(32, os) {}

    ByteBasedBitPackingWriter_32bit_LE(const ByteBasedBitPackingWriter_32bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_32bit_LE(ByteBasedBitPackingWriter_32bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_32bit_LE &operator=(const ByteBasedBitPackingWriter_32bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_32bit_LE &operator=(ByteBasedBitPackingWriter_32bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_32bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_32bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(32, os) {}

    ByteBasedBitPackingWriter_32bit_BE(const ByteBasedBitPackingWriter_32bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_32bit_BE(ByteBasedBitPackingWriter_32bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_32bit_BE &operator=(const ByteBasedBitPackingWriter_32bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_32bit_BE &operator=(ByteBasedBitPackingWriter_32bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_33bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_33bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(33, os) {}

    ByteBasedBitPackingWriter_33bit_LE(const ByteBasedBitPackingWriter_33bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_33bit_LE(ByteBasedBitPackingWriter_33bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_33bit_LE &operator=(const ByteBasedBitPackingWriter_33bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_33bit_LE &operator=(ByteBasedBitPackingWriter_33bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_33bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_33bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(33, os) {}

    ByteBasedBitPackingWriter_33bit_BE(const ByteBasedBitPackingWriter_33bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_33bit_BE(ByteBasedBitPackingWriter_33bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_33bit_BE &operator=(const ByteBasedBitPackingWriter_33bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_33bit_BE &operator=(ByteBasedBitPackingWriter_33bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_34bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_34bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(34, os) {}

    ByteBasedBitPackingWriter_34bit_LE(const ByteBasedBitPackingWriter_34bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_34bit_LE(ByteBasedBitPackingWriter_34bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_34bit_LE &operator=(const ByteBasedBitPackingWriter_34bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_34bit_LE &operator=(ByteBasedBitPackingWriter_34bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_34bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_34bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(34, os) {}

    ByteBasedBitPackingWriter_34bit_BE(const ByteBasedBitPackingWriter_34bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_34bit_BE(ByteBasedBitPackingWriter_34bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_34bit_BE &operator=(const ByteBasedBitPackingWriter_34bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_34bit_BE &operator=(ByteBasedBitPackingWriter_34bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_35bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_35bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(35, os) {}

    ByteBasedBitPackingWriter_35bit_LE(const ByteBasedBitPackingWriter_35bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_35bit_LE(ByteBasedBitPackingWriter_35bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_35bit_LE &operator=(const ByteBasedBitPackingWriter_35bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_35bit_LE &operator=(ByteBasedBitPackingWriter_35bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_35bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_35bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(35, os) {}

    ByteBasedBitPackingWriter_35bit_BE(const ByteBasedBitPackingWriter_35bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_35bit_BE(ByteBasedBitPackingWriter_35bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_35bit_BE &operator=(const ByteBasedBitPackingWriter_35bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_35bit_BE &operator=(ByteBasedBitPackingWriter_35bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_36bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_36bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(36, os) {}

    ByteBasedBitPackingWriter_36bit_LE(const ByteBasedBitPackingWriter_36bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_36bit_LE(ByteBasedBitPackingWriter_36bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_36bit_LE &operator=(const ByteBasedBitPackingWriter_36bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_36bit_LE &operator=(ByteBasedBitPackingWriter_36bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_36bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_36bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(36, os) {}

    ByteBasedBitPackingWriter_36bit_BE(const ByteBasedBitPackingWriter_36bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_36bit_BE(ByteBasedBitPackingWriter_36bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_36bit_BE &operator=(const ByteBasedBitPackingWriter_36bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_36bit_BE &operator=(ByteBasedBitPackingWriter_36bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_37bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_37bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(37, os) {}

    ByteBasedBitPackingWriter_37bit_LE(const ByteBasedBitPackingWriter_37bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_37bit_LE(ByteBasedBitPackingWriter_37bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_37bit_LE &operator=(const ByteBasedBitPackingWriter_37bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_37bit_LE &operator=(ByteBasedBitPackingWriter_37bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_37bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_37bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(37, os) {}

    ByteBasedBitPackingWriter_37bit_BE(const ByteBasedBitPackingWriter_37bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_37bit_BE(ByteBasedBitPackingWriter_37bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_37bit_BE &operator=(const ByteBasedBitPackingWriter_37bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_37bit_BE &operator=(ByteBasedBitPackingWriter_37bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_38bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_38bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(38, os) {}

    ByteBasedBitPackingWriter_38bit_LE(const ByteBasedBitPackingWriter_38bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_38bit_LE(ByteBasedBitPackingWriter_38bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_38bit_LE &operator=(const ByteBasedBitPackingWriter_38bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_38bit_LE &operator=(ByteBasedBitPackingWriter_38bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_38bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_38bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(38, os) {}

    ByteBasedBitPackingWriter_38bit_BE(const ByteBasedBitPackingWriter_38bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_38bit_BE(ByteBasedBitPackingWriter_38bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_38bit_BE &operator=(const ByteBasedBitPackingWriter_38bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_38bit_BE &operator=(ByteBasedBitPackingWriter_38bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_39bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_39bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(39, os) {}

    ByteBasedBitPackingWriter_39bit_LE(const ByteBasedBitPackingWriter_39bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_39bit_LE(ByteBasedBitPackingWriter_39bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_39bit_LE &operator=(const ByteBasedBitPackingWriter_39bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_39bit_LE &operator=(ByteBasedBitPackingWriter_39bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_39bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_39bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(39, os) {}

    ByteBasedBitPackingWriter_39bit_BE(const ByteBasedBitPackingWriter_39bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_39bit_BE(ByteBasedBitPackingWriter_39bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_39bit_BE &operator=(const ByteBasedBitPackingWriter_39bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_39bit_BE &operator=(ByteBasedBitPackingWriter_39bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_40bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_40bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(40, os) {}

    ByteBasedBitPackingWriter_40bit_LE(const ByteBasedBitPackingWriter_40bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_40bit_LE(ByteBasedBitPackingWriter_40bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_40bit_LE &operator=(const ByteBasedBitPackingWriter_40bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_40bit_LE &operator=(ByteBasedBitPackingWriter_40bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_40bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_40bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(40, os) {}

    ByteBasedBitPackingWriter_40bit_BE(const ByteBasedBitPackingWriter_40bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_40bit_BE(ByteBasedBitPackingWriter_40bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_40bit_BE &operator=(const ByteBasedBitPackingWriter_40bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_40bit_BE &operator=(ByteBasedBitPackingWriter_40bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_41bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_41bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(41, os) {}

    ByteBasedBitPackingWriter_41bit_LE(const ByteBasedBitPackingWriter_41bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_41bit_LE(ByteBasedBitPackingWriter_41bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_41bit_LE &operator=(const ByteBasedBitPackingWriter_41bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_41bit_LE &operator=(ByteBasedBitPackingWriter_41bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_41bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_41bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(41, os) {}

    ByteBasedBitPackingWriter_41bit_BE(const ByteBasedBitPackingWriter_41bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_41bit_BE(ByteBasedBitPackingWriter_41bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_41bit_BE &operator=(const ByteBasedBitPackingWriter_41bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_41bit_BE &operator=(ByteBasedBitPackingWriter_41bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_42bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_42bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(42, os) {}

    ByteBasedBitPackingWriter_42bit_LE(const ByteBasedBitPackingWriter_42bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_42bit_LE(ByteBasedBitPackingWriter_42bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_42bit_LE &operator=(const ByteBasedBitPackingWriter_42bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_42bit_LE &operator=(ByteBasedBitPackingWriter_42bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_42bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_42bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(42, os) {}

    ByteBasedBitPackingWriter_42bit_BE(const ByteBasedBitPackingWriter_42bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_42bit_BE(ByteBasedBitPackingWriter_42bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_42bit_BE &operator=(const ByteBasedBitPackingWriter_42bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_42bit_BE &operator=(ByteBasedBitPackingWriter_42bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_43bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_43bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(43, os) {}

    ByteBasedBitPackingWriter_43bit_LE(const ByteBasedBitPackingWriter_43bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_43bit_LE(ByteBasedBitPackingWriter_43bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_43bit_LE &operator=(const ByteBasedBitPackingWriter_43bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_43bit_LE &operator=(ByteBasedBitPackingWriter_43bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_43bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_43bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(43, os) {}

    ByteBasedBitPackingWriter_43bit_BE(const ByteBasedBitPackingWriter_43bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_43bit_BE(ByteBasedBitPackingWriter_43bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_43bit_BE &operator=(const ByteBasedBitPackingWriter_43bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_43bit_BE &operator=(ByteBasedBitPackingWriter_43bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_44bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_44bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(44, os) {}

    ByteBasedBitPackingWriter_44bit_LE(const ByteBasedBitPackingWriter_44bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_44bit_LE(ByteBasedBitPackingWriter_44bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_44bit_LE &operator=(const ByteBasedBitPackingWriter_44bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_44bit_LE &operator=(ByteBasedBitPackingWriter_44bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_44bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_44bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(44, os) {}

    ByteBasedBitPackingWriter_44bit_BE(const ByteBasedBitPackingWriter_44bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_44bit_BE(ByteBasedBitPackingWriter_44bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_44bit_BE &operator=(const ByteBasedBitPackingWriter_44bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_44bit_BE &operator=(ByteBasedBitPackingWriter_44bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_45bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_45bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(45, os) {}

    ByteBasedBitPackingWriter_45bit_LE(const ByteBasedBitPackingWriter_45bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_45bit_LE(ByteBasedBitPackingWriter_45bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_45bit_LE &operator=(const ByteBasedBitPackingWriter_45bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_45bit_LE &operator=(ByteBasedBitPackingWriter_45bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_45bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_45bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(45, os) {}

    ByteBasedBitPackingWriter_45bit_BE(const ByteBasedBitPackingWriter_45bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_45bit_BE(ByteBasedBitPackingWriter_45bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_45bit_BE &operator=(const ByteBasedBitPackingWriter_45bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_45bit_BE &operator=(ByteBasedBitPackingWriter_45bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_46bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_46bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(46, os) {}

    ByteBasedBitPackingWriter_46bit_LE(const ByteBasedBitPackingWriter_46bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_46bit_LE(ByteBasedBitPackingWriter_46bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_46bit_LE &operator=(const ByteBasedBitPackingWriter_46bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_46bit_LE &operator=(ByteBasedBitPackingWriter_46bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_46bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_46bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(46, os) {}

    ByteBasedBitPackingWriter_46bit_BE(const ByteBasedBitPackingWriter_46bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_46bit_BE(ByteBasedBitPackingWriter_46bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_46bit_BE &operator=(const ByteBasedBitPackingWriter_46bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_46bit_BE &operator=(ByteBasedBitPackingWriter_46bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_47bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_47bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(47, os) {}

    ByteBasedBitPackingWriter_47bit_LE(const ByteBasedBitPackingWriter_47bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_47bit_LE(ByteBasedBitPackingWriter_47bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_47bit_LE &operator=(const ByteBasedBitPackingWriter_47bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_47bit_LE &operator=(ByteBasedBitPackingWriter_47bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_47bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_47bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(47, os) {}

    ByteBasedBitPackingWriter_47bit_BE(const ByteBasedBitPackingWriter_47bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_47bit_BE(ByteBasedBitPackingWriter_47bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_47bit_BE &operator=(const ByteBasedBitPackingWriter_47bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_47bit_BE &operator=(ByteBasedBitPackingWriter_47bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_48bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_48bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(48, os) {}

    ByteBasedBitPackingWriter_48bit_LE(const ByteBasedBitPackingWriter_48bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_48bit_LE(ByteBasedBitPackingWriter_48bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_48bit_LE &operator=(const ByteBasedBitPackingWriter_48bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_48bit_LE &operator=(ByteBasedBitPackingWriter_48bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_48bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_48bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(48, os) {}

    ByteBasedBitPackingWriter_48bit_BE(const ByteBasedBitPackingWriter_48bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_48bit_BE(ByteBasedBitPackingWriter_48bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_48bit_BE &operator=(const ByteBasedBitPackingWriter_48bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_48bit_BE &operator=(ByteBasedBitPackingWriter_48bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_49bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_49bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(49, os) {}

    ByteBasedBitPackingWriter_49bit_LE(const ByteBasedBitPackingWriter_49bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_49bit_LE(ByteBasedBitPackingWriter_49bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_49bit_LE &operator=(const ByteBasedBitPackingWriter_49bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_49bit_LE &operator=(ByteBasedBitPackingWriter_49bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_49bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_49bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(49, os) {}

    ByteBasedBitPackingWriter_49bit_BE(const ByteBasedBitPackingWriter_49bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_49bit_BE(ByteBasedBitPackingWriter_49bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_49bit_BE &operator=(const ByteBasedBitPackingWriter_49bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_49bit_BE &operator=(ByteBasedBitPackingWriter_49bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_50bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_50bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(50, os) {}

    ByteBasedBitPackingWriter_50bit_LE(const ByteBasedBitPackingWriter_50bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_50bit_LE(ByteBasedBitPackingWriter_50bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_50bit_LE &operator=(const ByteBasedBitPackingWriter_50bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_50bit_LE &operator=(ByteBasedBitPackingWriter_50bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_50bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_50bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(50, os) {}

    ByteBasedBitPackingWriter_50bit_BE(const ByteBasedBitPackingWriter_50bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_50bit_BE(ByteBasedBitPackingWriter_50bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_50bit_BE &operator=(const ByteBasedBitPackingWriter_50bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_50bit_BE &operator=(ByteBasedBitPackingWriter_50bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_51bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_51bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(51, os) {}

    ByteBasedBitPackingWriter_51bit_LE(const ByteBasedBitPackingWriter_51bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_51bit_LE(ByteBasedBitPackingWriter_51bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_51bit_LE &operator=(const ByteBasedBitPackingWriter_51bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_51bit_LE &operator=(ByteBasedBitPackingWriter_51bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_51bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_51bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(51, os) {}

    ByteBasedBitPackingWriter_51bit_BE(const ByteBasedBitPackingWriter_51bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_51bit_BE(ByteBasedBitPackingWriter_51bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_51bit_BE &operator=(const ByteBasedBitPackingWriter_51bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_51bit_BE &operator=(ByteBasedBitPackingWriter_51bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_52bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_52bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(52, os) {}

    ByteBasedBitPackingWriter_52bit_LE(const ByteBasedBitPackingWriter_52bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_52bit_LE(ByteBasedBitPackingWriter_52bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_52bit_LE &operator=(const ByteBasedBitPackingWriter_52bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_52bit_LE &operator=(ByteBasedBitPackingWriter_52bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_52bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_52bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(52, os) {}

    ByteBasedBitPackingWriter_52bit_BE(const ByteBasedBitPackingWriter_52bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_52bit_BE(ByteBasedBitPackingWriter_52bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_52bit_BE &operator=(const ByteBasedBitPackingWriter_52bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_52bit_BE &operator=(ByteBasedBitPackingWriter_52bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_53bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_53bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(53, os) {}

    ByteBasedBitPackingWriter_53bit_LE(const ByteBasedBitPackingWriter_53bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_53bit_LE(ByteBasedBitPackingWriter_53bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_53bit_LE &operator=(const ByteBasedBitPackingWriter_53bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_53bit_LE &operator=(ByteBasedBitPackingWriter_53bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_53bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_53bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(53, os) {}

    ByteBasedBitPackingWriter_53bit_BE(const ByteBasedBitPackingWriter_53bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_53bit_BE(ByteBasedBitPackingWriter_53bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_53bit_BE &operator=(const ByteBasedBitPackingWriter_53bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_53bit_BE &operator=(ByteBasedBitPackingWriter_53bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_54bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_54bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(54, os) {}

    ByteBasedBitPackingWriter_54bit_LE(const ByteBasedBitPackingWriter_54bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_54bit_LE(ByteBasedBitPackingWriter_54bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_54bit_LE &operator=(const ByteBasedBitPackingWriter_54bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_54bit_LE &operator=(ByteBasedBitPackingWriter_54bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_54bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_54bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(54, os) {}

    ByteBasedBitPackingWriter_54bit_BE(const ByteBasedBitPackingWriter_54bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_54bit_BE(ByteBasedBitPackingWriter_54bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_54bit_BE &operator=(const ByteBasedBitPackingWriter_54bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_54bit_BE &operator=(ByteBasedBitPackingWriter_54bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_55bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_55bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(55, os) {}

    ByteBasedBitPackingWriter_55bit_LE(const ByteBasedBitPackingWriter_55bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_55bit_LE(ByteBasedBitPackingWriter_55bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_55bit_LE &operator=(const ByteBasedBitPackingWriter_55bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_55bit_LE &operator=(ByteBasedBitPackingWriter_55bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_55bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_55bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(55, os) {}

    ByteBasedBitPackingWriter_55bit_BE(const ByteBasedBitPackingWriter_55bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_55bit_BE(ByteBasedBitPackingWriter_55bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_55bit_BE &operator=(const ByteBasedBitPackingWriter_55bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_55bit_BE &operator=(ByteBasedBitPackingWriter_55bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_56bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_56bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(56, os) {}

    ByteBasedBitPackingWriter_56bit_LE(const ByteBasedBitPackingWriter_56bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_56bit_LE(ByteBasedBitPackingWriter_56bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_56bit_LE &operator=(const ByteBasedBitPackingWriter_56bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_56bit_LE &operator=(ByteBasedBitPackingWriter_56bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_56bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_56bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(56, os) {}

    ByteBasedBitPackingWriter_56bit_BE(const ByteBasedBitPackingWriter_56bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_56bit_BE(ByteBasedBitPackingWriter_56bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_56bit_BE &operator=(const ByteBasedBitPackingWriter_56bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_56bit_BE &operator=(ByteBasedBitPackingWriter_56bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_57bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_57bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(57, os) {}

    ByteBasedBitPackingWriter_57bit_LE(const ByteBasedBitPackingWriter_57bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_57bit_LE(ByteBasedBitPackingWriter_57bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_57bit_LE &operator=(const ByteBasedBitPackingWriter_57bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_57bit_LE &operator=(ByteBasedBitPackingWriter_57bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_57bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_57bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(57, os) {}

    ByteBasedBitPackingWriter_57bit_BE(const ByteBasedBitPackingWriter_57bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_57bit_BE(ByteBasedBitPackingWriter_57bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_57bit_BE &operator=(const ByteBasedBitPackingWriter_57bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_57bit_BE &operator=(ByteBasedBitPackingWriter_57bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_58bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_58bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(58, os) {}

    ByteBasedBitPackingWriter_58bit_LE(const ByteBasedBitPackingWriter_58bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_58bit_LE(ByteBasedBitPackingWriter_58bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_58bit_LE &operator=(const ByteBasedBitPackingWriter_58bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_58bit_LE &operator=(ByteBasedBitPackingWriter_58bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_58bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_58bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(58, os) {}

    ByteBasedBitPackingWriter_58bit_BE(const ByteBasedBitPackingWriter_58bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_58bit_BE(ByteBasedBitPackingWriter_58bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_58bit_BE &operator=(const ByteBasedBitPackingWriter_58bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_58bit_BE &operator=(ByteBasedBitPackingWriter_58bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_59bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_59bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(59, os) {}

    ByteBasedBitPackingWriter_59bit_LE(const ByteBasedBitPackingWriter_59bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_59bit_LE(ByteBasedBitPackingWriter_59bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_59bit_LE &operator=(const ByteBasedBitPackingWriter_59bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_59bit_LE &operator=(ByteBasedBitPackingWriter_59bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_59bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_59bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(59, os) {}

    ByteBasedBitPackingWriter_59bit_BE(const ByteBasedBitPackingWriter_59bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_59bit_BE(ByteBasedBitPackingWriter_59bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_59bit_BE &operator=(const ByteBasedBitPackingWriter_59bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_59bit_BE &operator=(ByteBasedBitPackingWriter_59bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_60bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_60bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(60, os) {}

    ByteBasedBitPackingWriter_60bit_LE(const ByteBasedBitPackingWriter_60bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_60bit_LE(ByteBasedBitPackingWriter_60bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_60bit_LE &operator=(const ByteBasedBitPackingWriter_60bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_60bit_LE &operator=(ByteBasedBitPackingWriter_60bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_60bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_60bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(60, os) {}

    ByteBasedBitPackingWriter_60bit_BE(const ByteBasedBitPackingWriter_60bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_60bit_BE(ByteBasedBitPackingWriter_60bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_60bit_BE &operator=(const ByteBasedBitPackingWriter_60bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_60bit_BE &operator=(ByteBasedBitPackingWriter_60bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_61bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_61bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(61, os) {}

    ByteBasedBitPackingWriter_61bit_LE(const ByteBasedBitPackingWriter_61bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_61bit_LE(ByteBasedBitPackingWriter_61bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_61bit_LE &operator=(const ByteBasedBitPackingWriter_61bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_61bit_LE &operator=(ByteBasedBitPackingWriter_61bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_61bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_61bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(61, os) {}

    ByteBasedBitPackingWriter_61bit_BE(const ByteBasedBitPackingWriter_61bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_61bit_BE(ByteBasedBitPackingWriter_61bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_61bit_BE &operator=(const ByteBasedBitPackingWriter_61bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_61bit_BE &operator=(ByteBasedBitPackingWriter_61bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_62bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_62bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(62, os) {}

    ByteBasedBitPackingWriter_62bit_LE(const ByteBasedBitPackingWriter_62bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_62bit_LE(ByteBasedBitPackingWriter_62bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_62bit_LE &operator=(const ByteBasedBitPackingWriter_62bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_62bit_LE &operator=(ByteBasedBitPackingWriter_62bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_62bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_62bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(62, os) {}

    ByteBasedBitPackingWriter_62bit_BE(const ByteBasedBitPackingWriter_62bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_62bit_BE(ByteBasedBitPackingWriter_62bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_62bit_BE &operator=(const ByteBasedBitPackingWriter_62bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_62bit_BE &operator=(ByteBasedBitPackingWriter_62bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_63bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_63bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(63, os) {}

    ByteBasedBitPackingWriter_63bit_LE(const ByteBasedBitPackingWriter_63bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_63bit_LE(ByteBasedBitPackingWriter_63bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_63bit_LE &operator=(const ByteBasedBitPackingWriter_63bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_63bit_LE &operator=(ByteBasedBitPackingWriter_63bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_63bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_63bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(63, os) {}

    ByteBasedBitPackingWriter_63bit_BE(const ByteBasedBitPackingWriter_63bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_63bit_BE(ByteBasedBitPackingWriter_63bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_63bit_BE &operator=(const ByteBasedBitPackingWriter_63bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_63bit_BE &operator=(ByteBasedBitPackingWriter_63bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_64bit_LE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_64bit_LE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(64, os) {}

    ByteBasedBitPackingWriter_64bit_LE(const ByteBasedBitPackingWriter_64bit_LE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_64bit_LE(ByteBasedBitPackingWriter_64bit_LE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_64bit_LE &operator=(const ByteBasedBitPackingWriter_64bit_LE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_64bit_LE &operator=(ByteBasedBitPackingWriter_64bit_LE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    
class ByteBasedBitPackingWriter_64bit_BE : public ByteBasedBitPackingWriter {
public:
    ByteBasedBitPackingWriter_64bit_BE(shared_ptr<ostream> os) : ByteBasedBitPackingWriter(64, os) {}

    ByteBasedBitPackingWriter_64bit_BE(const ByteBasedBitPackingWriter_64bit_BE &other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_64bit_BE(ByteBasedBitPackingWriter_64bit_BE &&other) : ByteBasedBitPackingWriter(other) {}

    ByteBasedBitPackingWriter_64bit_BE &operator=(const ByteBasedBitPackingWriter_64bit_BE &other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

    ByteBasedBitPackingWriter_64bit_BE &operator=(ByteBasedBitPackingWriter_64bit_BE &&other) {
        ByteBasedBitPackingWriter::operator=(other);
        return *this;
    }

protected:
    virtual void flush_buffer(const uint64_t *buffer) override;
};
    

class  ByteBasedBitPackingWriters {
public:
    static ByteBasedBitPackingWriter*  create(shared_ptr<ostream> os, int num_bits, bool big_endian) {

        switch(num_bits) {
    		case 1: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_1bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_1bit_LE(os));
		case 2: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_2bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_2bit_LE(os));
		case 3: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_3bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_3bit_LE(os));
		case 4: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_4bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_4bit_LE(os));
		case 5: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_5bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_5bit_LE(os));
		case 6: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_6bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_6bit_LE(os));
		case 7: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_7bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_7bit_LE(os));
		case 8: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_8bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_8bit_LE(os));
		case 9: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_9bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_9bit_LE(os));
		case 10: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_10bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_10bit_LE(os));
		case 11: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_11bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_11bit_LE(os));
		case 12: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_12bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_12bit_LE(os));
		case 13: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_13bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_13bit_LE(os));
		case 14: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_14bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_14bit_LE(os));
		case 15: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_15bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_15bit_LE(os));
		case 16: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_16bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_16bit_LE(os));
		case 17: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_17bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_17bit_LE(os));
		case 18: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_18bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_18bit_LE(os));
		case 19: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_19bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_19bit_LE(os));
		case 20: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_20bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_20bit_LE(os));
		case 21: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_21bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_21bit_LE(os));
		case 22: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_22bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_22bit_LE(os));
		case 23: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_23bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_23bit_LE(os));
		case 24: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_24bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_24bit_LE(os));
		case 25: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_25bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_25bit_LE(os));
		case 26: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_26bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_26bit_LE(os));
		case 27: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_27bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_27bit_LE(os));
		case 28: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_28bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_28bit_LE(os));
		case 29: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_29bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_29bit_LE(os));
		case 30: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_30bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_30bit_LE(os));
		case 31: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_31bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_31bit_LE(os));
		case 32: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_32bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_32bit_LE(os));
		case 33: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_33bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_33bit_LE(os));
		case 34: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_34bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_34bit_LE(os));
		case 35: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_35bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_35bit_LE(os));
		case 36: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_36bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_36bit_LE(os));
		case 37: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_37bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_37bit_LE(os));
		case 38: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_38bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_38bit_LE(os));
		case 39: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_39bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_39bit_LE(os));
		case 40: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_40bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_40bit_LE(os));
		case 41: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_41bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_41bit_LE(os));
		case 42: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_42bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_42bit_LE(os));
		case 43: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_43bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_43bit_LE(os));
		case 44: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_44bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_44bit_LE(os));
		case 45: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_45bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_45bit_LE(os));
		case 46: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_46bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_46bit_LE(os));
		case 47: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_47bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_47bit_LE(os));
		case 48: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_48bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_48bit_LE(os));
		case 49: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_49bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_49bit_LE(os));
		case 50: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_50bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_50bit_LE(os));
		case 51: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_51bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_51bit_LE(os));
		case 52: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_52bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_52bit_LE(os));
		case 53: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_53bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_53bit_LE(os));
		case 54: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_54bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_54bit_LE(os));
		case 55: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_55bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_55bit_LE(os));
		case 56: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_56bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_56bit_LE(os));
		case 57: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_57bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_57bit_LE(os));
		case 58: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_58bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_58bit_LE(os));
		case 59: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_59bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_59bit_LE(os));
		case 60: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_60bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_60bit_LE(os));
		case 61: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_61bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_61bit_LE(os));
		case 62: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_62bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_62bit_LE(os));
		case 63: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_63bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_63bit_LE(os));
		case 64: return big_endian ? static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_64bit_BE(os)) : static_cast<ByteBasedBitPackingWriter*>(new ByteBasedBitPackingWriter_64bit_LE(os));

        }

        stringstream s;
        s << "Invalid bitness: " << num_bits;
        throw new runtime_error(s.str());
    }
};

}
}
#endif
    