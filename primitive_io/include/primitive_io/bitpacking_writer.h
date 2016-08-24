/*
 * This file is based on ByteBasedBitPackingEncoder obtained from  https://github.com/apache/parquet-mr/
*/
//
// Created by rbyst on 8/14/2016.
//

#ifndef PRIMITIVE_IO_PRIMITIVE_IO_BITPACKING_WRITER_H
#define PRIMITIVE_IO_PRIMITIVE_IO_BITPACKING_WRITER_H

#include <primitive_io/primitive_writer_base.h>
#include <cstring>

using namespace std;

namespace rbystrit {
namespace primitive_io {

#define BIT_PACKING_WRITER_FLUSH_COUNT 8

class ByteBasedBitPackingWriter : public PrimitiveWriterBase {
public:
    ByteBasedBitPackingWriter(uint8_t bitwidth, shared_ptr<ostream> os) : PrimitiveWriterBase(os),
                                                                          _state(new packer_state()) {
        _state->bit_width = bitwidth;
    }

    ByteBasedBitPackingWriter(const ByteBasedBitPackingWriter &other) : PrimitiveWriterBase(other),
                                                                        _state(new packer_state(*other._state)) {
    }

    ByteBasedBitPackingWriter(ByteBasedBitPackingWriter &&other) : PrimitiveWriterBase(other),
                                                                   _state(move(other._state)) {}

    ByteBasedBitPackingWriter &operator=(const ByteBasedBitPackingWriter &other) {
        PrimitiveWriterBase::operator=(other);
        _state->operator=(*other._state);
        return *this;
    }

    ByteBasedBitPackingWriter &operator=(ByteBasedBitPackingWriter &&other) {
        PrimitiveWriterBase::operator=(other);
        swap(_state, other._state);
        return *this;
    }

    virtual void write_int8_t(int8_t value) override;

    virtual void write_uint8_t(uint8_t value) override;

    virtual void write_int8_t(int8_t *value, int count) override;

    virtual void write_uint8_t(uint8_t *value, int count) override;

    virtual void write_int16_t(int16_t value) override;

    virtual void write_uint16_t(uint16_t value) override;

    virtual void write_int16_t(int16_t *value, int count) override;

    virtual void write_uint16_t(uint16_t *value, int count) override;

    virtual void write_int32_t(int32_t value) override;

    virtual void write_uint32_t(uint32_t value) override;

    virtual void write_int32_t(int32_t *value, int count) override;

    virtual void write_uint32_t(uint32_t *value, int count) override;

    virtual void write_int64_t(int64_t value) override;

    virtual void write_uint64_t(uint64_t value) override;

    virtual void write_int64_t(int64_t *value, int count) override;

    virtual void write_uint64_t(uint64_t *value, int count) override;

    virtual void flush() {
        flush_buffer(_state->buffer);
        memset(_state->buffer, 0, BIT_PACKING_WRITER_FLUSH_COUNT * sizeof(uint64_t));
        _state->current_buffer_pos = 0;
    }

    uint8_t bit_width() const { return _state->bit_width; }

    size_t packed_bit_size() const { return _state->values_written * _state->bit_width; };

    size_t packed_size() const { return packed_bit_size() / 8 + (packed_bit_size() % 8 == 0 ? 0 : 1); }

private:

    typedef struct _packer_state {
        uint8_t bit_width;
        size_t values_written;
        size_t current_buffer_pos;
        uint64_t* buffer;

        _packer_state(){
            bit_width = 0;
            values_written = 0;
            current_buffer_pos = 0;
            buffer = new uint64_t[BIT_PACKING_WRITER_FLUSH_COUNT];
        }

        _packer_state(const _packer_state & other) : _packer_state() {
            operator=(other);
        }

        ~_packer_state(){
            delete [] buffer;
        }

        _packer_state& operator =(const _packer_state& other) {
            bit_width = other.bit_width;
            values_written = other.values_written;
            current_buffer_pos = other.current_buffer_pos;

            memcpy(buffer, other.buffer, sizeof(uint64_t) * BIT_PACKING_WRITER_FLUSH_COUNT);
        }
    } packer_state;

    unique_ptr<packer_state> _state;
protected:
    virtual void flush_buffer(const uint64_t *buffer) = 0;
};


}
}
#endif //MEMUTILS_BITPACKING_WRITER_H
