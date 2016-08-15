//
// Created by rbyst on 8/14/2016.
//

#ifndef MEMUTILS_BITPACKING_READER_H
#define MEMUTILS_BITPACKING_READER_H

#include <primitive_io/primitive_reader_base.h>
#include <cstring>

#define BIT_PACKING_READER_FLUSH_COUNT 8

namespace rbystrit{
namespace primitive_io{
class ByteBasedBitPackingReader : public PrimitiveReaderBase{

public:
    ByteBasedBitPackingReader(uint8_t bitwidth, shared_ptr<istream> is) : PrimitiveReaderBase(is), _state(new packer_state()) {
        _state->current_buffer_pos = BIT_PACKING_READER_FLUSH_COUNT;
        _state->bit_width = bitwidth;
    }

    ByteBasedBitPackingReader(const ByteBasedBitPackingReader &other) : PrimitiveReaderBase(other), _state(new packer_state(*other._state)) {
    }

    ByteBasedBitPackingReader(ByteBasedBitPackingReader &&other) : PrimitiveReaderBase(other), _state(move(other._state)) {

    }

    ByteBasedBitPackingReader &operator=(const ByteBasedBitPackingReader &other) {
        PrimitiveReaderBase::operator=(other);
        _state->operator=(*other._state);
        return *this;
    }

    ByteBasedBitPackingReader &operator=(ByteBasedBitPackingReader &&other) {
        PrimitiveReaderBase::operator=(other);
        swap(_state, other._state);
        return *this;
    }

    virtual int8_t read_int8_t() override;

    virtual uint8_t read_uint8_t() override;

    virtual void read_int8_t(int8_t *dest, int count) override;

    virtual void read_uint8_t(uint8_t *dest, int count) override;

    virtual int16_t read_int16_t() override;

    virtual uint16_t read_uint16_t() override;

    virtual void read_int16_t(int16_t *dest, int count) override;

    virtual void read_uint16_t(uint16_t *dest, int count) override;

    virtual int32_t read_int32_t() override;

    virtual uint32_t read_uint32_t() override;

    virtual void read_int32_t(int32_t *dest, int count) override;

    virtual void read_uint32_t(uint32_t *dest, int count) override;

    virtual int64_t read_int64_t() override;

    virtual uint64_t read_uint64_t() override;

    virtual void read_int64_t(int64_t *dest, int count) override;

    virtual void read_uint64_t(uint64_t *dest, int count) override;

    uint8_t bit_width() const { return _state->bit_width; }
private:
    typedef struct _packer_state {
        uint8_t bit_width;
        size_t values_read;
        size_t current_buffer_pos;
        uint64_t* buffer;

        _packer_state(){
            bit_width = 0;
            values_read = 0;
            current_buffer_pos = 0;
            buffer = new uint64_t[BIT_PACKING_READER_FLUSH_COUNT];
        }

        _packer_state(const _packer_state & other) : _packer_state() {
            operator=(other);
        }

        _packer_state& operator =(const _packer_state& other) {
            bit_width = other.bit_width;
            values_read = other.values_read;
            current_buffer_pos = other.current_buffer_pos;

            memcpy(buffer, other.buffer, sizeof(uint64_t) * BIT_PACKING_READER_FLUSH_COUNT);
        }

        ~_packer_state(){
            delete [] buffer;
        }
    } packer_state;

    unique_ptr<packer_state> _state;

    void hydrate_buffer(){
        memset(_state->buffer, 0, sizeof(_state->buffer));
        hydrate_buffer_core(_state->buffer);
        _state->current_buffer_pos = 0;
    }
protected:
    virtual void hydrate_buffer_core(uint64_t* buffer) = 0;
};


}
}

#endif //MEMUTILS_BITPACKING_READER_H
