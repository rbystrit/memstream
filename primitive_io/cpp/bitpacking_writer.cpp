#include <primitive_io/primitive_io.h>

namespace rbystrit {
namespace primitive_io {

void ByteBasedBitPackingWriter::write_int8_t(int8_t value) {
    _state->buffer[_state->current_buffer_pos++] = *reinterpret_cast<uint8_t *>(&value);
    _state->values_written++;
    if (_state->current_buffer_pos == BIT_PACKING_WRITER_FLUSH_COUNT)
        flush();
}

void ByteBasedBitPackingWriter::write_uint8_t(uint8_t value) {
    _state->buffer[_state->current_buffer_pos++] = value;
    _state->values_written++;
    if (_state->current_buffer_pos == BIT_PACKING_WRITER_FLUSH_COUNT)
        flush();
}

void ByteBasedBitPackingWriter::write_int8_t(int8_t *value, int count) {
    for (int i = 0; i < count; i++)
        write_int8_t(value[i]);
}

void ByteBasedBitPackingWriter::write_uint8_t(uint8_t *value, int count) {
    for (int i = 0; i < count; i++)
        write_uint8_t(value[i]);
}

void ByteBasedBitPackingWriter::write_int16_t(int16_t value) {
    _state->buffer[_state->current_buffer_pos++] = *reinterpret_cast<uint16_t *>(&value);
    _state->values_written++;
    if (_state->current_buffer_pos == BIT_PACKING_WRITER_FLUSH_COUNT)
        flush();
}

void ByteBasedBitPackingWriter::write_uint16_t(uint16_t value) {
    _state->buffer[_state->current_buffer_pos++] = value;
    _state->values_written++;
    if (_state->current_buffer_pos == BIT_PACKING_WRITER_FLUSH_COUNT)
        flush();
}

void ByteBasedBitPackingWriter::write_int16_t(int16_t *value, int count) {
    for (int i = 0; i < count; i++)
        write_int16_t(value[i]);
}

void ByteBasedBitPackingWriter::write_uint16_t(uint16_t *value, int count) {
    for (int i = 0; i < count; i++)
        write_uint16_t(value[i]);
}

void ByteBasedBitPackingWriter::write_int32_t(int32_t value) {
    _state->buffer[_state->current_buffer_pos++] = *reinterpret_cast<uint32_t *>(&value);
    _state->values_written++;
    if (_state->current_buffer_pos == BIT_PACKING_WRITER_FLUSH_COUNT)
        flush();
}

void ByteBasedBitPackingWriter::write_uint32_t(uint32_t value) {
    _state->buffer[_state->current_buffer_pos++] = value;
    _state->values_written++;
    if (_state->current_buffer_pos == BIT_PACKING_WRITER_FLUSH_COUNT)
        flush();
}

void ByteBasedBitPackingWriter::write_int32_t(int32_t *value, int count) {
    for (int i = 0; i < count; i++)
        write_int32_t(value[i]);
}

void ByteBasedBitPackingWriter::write_uint32_t(uint32_t *value, int count) {
    for (int i = 0; i < count; i++)
        write_uint32_t(value[i]);
}

void ByteBasedBitPackingWriter::write_int64_t(int64_t value) {
    _state->buffer[_state->current_buffer_pos++] = *reinterpret_cast<uint64_t *>(&value);
    _state->values_written++;
    if (_state->current_buffer_pos == BIT_PACKING_WRITER_FLUSH_COUNT)
        flush();
}

void ByteBasedBitPackingWriter::write_uint64_t(uint64_t value) {
    _state->buffer[_state->current_buffer_pos++] = value;
    _state->values_written++;
    if (_state->current_buffer_pos == BIT_PACKING_WRITER_FLUSH_COUNT)
        flush();
}

void ByteBasedBitPackingWriter::write_int64_t(int64_t *value, int count) {
    for (int i = 0; i < count; i++)
        write_int64_t(value[i]);
}

void ByteBasedBitPackingWriter::write_uint64_t(uint64_t *value, int count) {
    for (int i = 0; i < count; i++)
        write_uint64_t(value[i]);
}
}
}
