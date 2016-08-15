//
// Created by rbyst on 8/14/2016.
//

#include <primitive_io/bitpacking_reader.h>

namespace rbystrit{
namespace primitive_io{

int8_t ByteBasedBitPackingReader::read_int8_t() {
    if(_state->current_buffer_pos == BIT_PACKING_READER_FLUSH_COUNT)
        hydrate_buffer();

    _state->values_read ++;
    return static_cast<int8_t>(_state->buffer[_state->current_buffer_pos++]);
}

uint8_t ByteBasedBitPackingReader::read_uint8_t() {
    if(_state->current_buffer_pos == BIT_PACKING_READER_FLUSH_COUNT)
        hydrate_buffer();

    _state->values_read ++;
    return static_cast<uint8_t>(_state->buffer[_state->current_buffer_pos++]);
}

void ByteBasedBitPackingReader::read_int8_t(int8_t *dest, int count) {
    for(int i=0; i< count; i++)
        dest[i] = read_int8_t();
}

void ByteBasedBitPackingReader::read_uint8_t(uint8_t *dest, int count) {
    for(int i=0; i< count; i++)
        dest[i] = read_uint8_t();
}

int16_t ByteBasedBitPackingReader::read_int16_t() {
    if(_state->current_buffer_pos == BIT_PACKING_READER_FLUSH_COUNT)
        hydrate_buffer();

    _state->values_read ++;
    return static_cast<int16_t>(_state->buffer[_state->current_buffer_pos++]);
}

uint16_t ByteBasedBitPackingReader::read_uint16_t() {
    if(_state->current_buffer_pos == BIT_PACKING_READER_FLUSH_COUNT)
        hydrate_buffer();

    _state->values_read ++;
    return static_cast<uint16_t>(_state->buffer[_state->current_buffer_pos++]);
}

void ByteBasedBitPackingReader::read_int16_t(int16_t *dest, int count) {
    for(int i=0; i< count; i++)
        dest[i] = read_int16_t();
}

void ByteBasedBitPackingReader::read_uint16_t(uint16_t *dest, int count) {
    for(int i=0; i< count; i++)
        dest[i] = read_uint16_t();
}

int32_t ByteBasedBitPackingReader::read_int32_t() {
    if(_state->current_buffer_pos == BIT_PACKING_READER_FLUSH_COUNT)
        hydrate_buffer();

    _state->values_read ++;
    return static_cast<int32_t>(_state->buffer[_state->current_buffer_pos++]);
}

uint32_t ByteBasedBitPackingReader::read_uint32_t() {
    if(_state->current_buffer_pos == BIT_PACKING_READER_FLUSH_COUNT)
        hydrate_buffer();

    _state->values_read ++;
    return static_cast<uint32_t>(_state->buffer[_state->current_buffer_pos++]);
}

void ByteBasedBitPackingReader::read_int32_t(int32_t *dest, int count) {
    for(int i=0; i< count; i++)
        dest[i] = read_int32_t();
}

void ByteBasedBitPackingReader::read_uint32_t(uint32_t *dest, int count) {
    for(int i=0; i< count; i++)
        dest[i] = read_uint32_t();
}

int64_t ByteBasedBitPackingReader::read_int64_t() {
    if(_state->current_buffer_pos == BIT_PACKING_READER_FLUSH_COUNT)
        hydrate_buffer();

    _state->values_read ++;
    return static_cast<uint8_t>(_state->buffer[_state->current_buffer_pos++]);
}

uint64_t ByteBasedBitPackingReader::read_uint64_t() {
    if(_state->current_buffer_pos == BIT_PACKING_READER_FLUSH_COUNT)
        hydrate_buffer();

    _state->values_read ++;
    return _state->buffer[_state->current_buffer_pos++];
}

void ByteBasedBitPackingReader::read_int64_t(int64_t *dest, int count) {
    for(int i=0; i< count; i++)
        dest[i] = read_int64_t();
}

void ByteBasedBitPackingReader::read_uint64_t(uint64_t *dest, int count) {
    for(int i=0; i< count; i++)
        dest[i] = read_uint64_t();
}

}
}