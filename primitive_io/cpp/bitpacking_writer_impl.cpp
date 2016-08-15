
#include <primitive_io/primitive_io.h>
#include <primitive_io/bitpacking_writer_impl.h>

namespace rbystrit {
namespace primitive_io{

    
void ByteBasedBitPackingWriter_1bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[1];
    memset(tgt_buffer,0, 1);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 1)) << 0 | (((buffer[1] >> 0) & 1)) << 1 | (((buffer[2] >> 0) & 1)) << 2 | (((buffer[3] >> 0) & 1)) << 3 | (((buffer[4] >> 0) & 1)) << 4 | (((buffer[5] >> 0) & 1)) << 5 | (((buffer[6] >> 0) & 1)) << 6 | (((buffer[7] >> 0) & 1)) << 7);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 1);
}
void ByteBasedBitPackingWriter_1bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[1];
    memset(tgt_buffer,0, 1);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 1)) << 7 | (((buffer[1] >> 0) & 1)) << 6 | (((buffer[2] >> 0) & 1)) << 5 | (((buffer[3] >> 0) & 1)) << 4 | (((buffer[4] >> 0) & 1)) << 3 | (((buffer[5] >> 0) & 1)) << 2 | (((buffer[6] >> 0) & 1)) << 1 | (((buffer[7] >> 0) & 1)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 1);
}
void ByteBasedBitPackingWriter_2bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[2];
    memset(tgt_buffer,0, 2);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 3)) << 0 | (((buffer[1] >> 0) & 3)) << 2 | (((buffer[2] >> 0) & 3)) << 4 | (((buffer[3] >> 0) & 3)) << 6);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[4] >> 0) & 3)) << 0 | (((buffer[5] >> 0) & 3)) << 2 | (((buffer[6] >> 0) & 3)) << 4 | (((buffer[7] >> 0) & 3)) << 6);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 2);
}
void ByteBasedBitPackingWriter_2bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[2];
    memset(tgt_buffer,0, 2);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 3)) << 6 | (((buffer[1] >> 0) & 3)) << 4 | (((buffer[2] >> 0) & 3)) << 2 | (((buffer[3] >> 0) & 3)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[4] >> 0) & 3)) << 6 | (((buffer[5] >> 0) & 3)) << 4 | (((buffer[6] >> 0) & 3)) << 2 | (((buffer[7] >> 0) & 3)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 2);
}
void ByteBasedBitPackingWriter_3bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[3];
    memset(tgt_buffer,0, 3);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 7)) << 0 | (((buffer[1] >> 0) & 7)) << 3 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[2] >> 2) & 1)) << 0 | (((buffer[3] >> 0) & 7)) << 1 | (((buffer[4] >> 0) & 7)) << 4 | (((buffer[5] >> 0) & 1)) << 7);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[5] >> 1) & 3)) << 0 | (((buffer[6] >> 0) & 7)) << 2 | (((buffer[7] >> 0) & 7)) << 5);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 3);
}
void ByteBasedBitPackingWriter_3bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[3];
    memset(tgt_buffer,0, 3);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 7)) << 5 | (((buffer[1] >> 0) & 7)) << 2 | (((buffer[2] >> 1) & 3)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[2] >> 0) & 1)) << 7 | (((buffer[3] >> 0) & 7)) << 4 | (((buffer[4] >> 0) & 7)) << 1 | (((buffer[5] >> 2) & 1)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 0) & 7)) << 3 | (((buffer[7] >> 0) & 7)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 3);
}
void ByteBasedBitPackingWriter_4bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[4];
    memset(tgt_buffer,0, 4);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 15)) << 0 | (((buffer[1] >> 0) & 15)) << 4);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[2] >> 0) & 15)) << 0 | (((buffer[3] >> 0) & 15)) << 4);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[4] >> 0) & 15)) << 0 | (((buffer[5] >> 0) & 15)) << 4);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[6] >> 0) & 15)) << 0 | (((buffer[7] >> 0) & 15)) << 4);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 4);
}
void ByteBasedBitPackingWriter_4bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[4];
    memset(tgt_buffer,0, 4);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 15)) << 4 | (((buffer[1] >> 0) & 15)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[2] >> 0) & 15)) << 4 | (((buffer[3] >> 0) & 15)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[4] >> 0) & 15)) << 4 | (((buffer[5] >> 0) & 15)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[6] >> 0) & 15)) << 4 | (((buffer[7] >> 0) & 15)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 4);
}
void ByteBasedBitPackingWriter_5bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[5];
    memset(tgt_buffer,0, 5);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 31)) << 0 | (((buffer[1] >> 0) & 7)) << 5);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[1] >> 3) & 3)) << 0 | (((buffer[2] >> 0) & 31)) << 2 | (((buffer[3] >> 0) & 1)) << 7);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[3] >> 1) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[4] >> 4) & 1)) << 0 | (((buffer[5] >> 0) & 31)) << 1 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[6] >> 2) & 7)) << 0 | (((buffer[7] >> 0) & 31)) << 3);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 5);
}
void ByteBasedBitPackingWriter_5bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[5];
    memset(tgt_buffer,0, 5);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 31)) << 3 | (((buffer[1] >> 2) & 7)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 0) & 31)) << 1 | (((buffer[3] >> 4) & 1)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 1) & 15)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[4] >> 0) & 1)) << 7 | (((buffer[5] >> 0) & 31)) << 2 | (((buffer[6] >> 3) & 3)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[6] >> 0) & 7)) << 5 | (((buffer[7] >> 0) & 31)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 5);
}
void ByteBasedBitPackingWriter_6bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[6];
    memset(tgt_buffer,0, 6);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 63)) << 0 | (((buffer[1] >> 0) & 3)) << 6);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[1] >> 2) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[2] >> 4) & 3)) << 0 | (((buffer[3] >> 0) & 63)) << 2);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[4] >> 0) & 63)) << 0 | (((buffer[5] >> 0) & 3)) << 6);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[5] >> 2) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[6] >> 4) & 3)) << 0 | (((buffer[7] >> 0) & 63)) << 2);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 6);
}
void ByteBasedBitPackingWriter_6bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[6];
    memset(tgt_buffer,0, 6);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 63)) << 2 | (((buffer[1] >> 4) & 3)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 2) & 15)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[2] >> 0) & 3)) << 6 | (((buffer[3] >> 0) & 63)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[4] >> 0) & 63)) << 2 | (((buffer[5] >> 4) & 3)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 2) & 15)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[6] >> 0) & 3)) << 6 | (((buffer[7] >> 0) & 63)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 6);
}
void ByteBasedBitPackingWriter_7bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[7];
    memset(tgt_buffer,0, 7);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 127)) << 0 | (((buffer[1] >> 0) & 1)) << 7);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[1] >> 1) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[2] >> 2) & 31)) << 0 | (((buffer[3] >> 0) & 7)) << 5);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[3] >> 3) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[4] >> 4) & 7)) << 0 | (((buffer[5] >> 0) & 31)) << 3);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[5] >> 5) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[6] >> 6) & 1)) << 0 | (((buffer[7] >> 0) & 127)) << 1);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 7);
}
void ByteBasedBitPackingWriter_7bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[7];
    memset(tgt_buffer,0, 7);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 127)) << 1 | (((buffer[1] >> 6) & 1)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 5) & 3)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[2] >> 0) & 31)) << 3 | (((buffer[3] >> 4) & 7)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 3) & 15)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[4] >> 0) & 7)) << 5 | (((buffer[5] >> 2) & 31)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 1) & 63)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[6] >> 0) & 1)) << 7 | (((buffer[7] >> 0) & 127)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 7);
}
void ByteBasedBitPackingWriter_8bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[8];
    memset(tgt_buffer,0, 8);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 8);
}
void ByteBasedBitPackingWriter_8bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[8];
    memset(tgt_buffer,0, 8);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 8);
}
void ByteBasedBitPackingWriter_9bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[9];
    memset(tgt_buffer,0, 9);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 1)) << 0 | (((buffer[1] >> 0) & 127)) << 1);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 7) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[2] >> 6) & 7)) << 0 | (((buffer[3] >> 0) & 31)) << 3);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[3] >> 5) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[4] >> 4) & 31)) << 0 | (((buffer[5] >> 0) & 7)) << 5);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[5] >> 3) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[6] >> 2) & 127)) << 0 | (((buffer[7] >> 0) & 1)) << 7);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[7] >> 1) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 9);
}
void ByteBasedBitPackingWriter_9bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[9];
    memset(tgt_buffer,0, 9);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 1) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 0) & 1)) << 7 | (((buffer[1] >> 2) & 127)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 3) & 63)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[2] >> 0) & 7)) << 5 | (((buffer[3] >> 4) & 31)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 5) & 15)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[4] >> 0) & 31)) << 3 | (((buffer[5] >> 6) & 7)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 7) & 3)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[6] >> 0) & 127)) << 1 | (((buffer[7] >> 8) & 1)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 9);
}
void ByteBasedBitPackingWriter_10bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[10];
    memset(tgt_buffer,0, 10);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 3)) << 0 | (((buffer[1] >> 0) & 63)) << 2);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 6) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[2] >> 4) & 63)) << 0 | (((buffer[3] >> 0) & 3)) << 6);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[3] >> 2) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[4] >> 8) & 3)) << 0 | (((buffer[5] >> 0) & 63)) << 2);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[5] >> 6) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[6] >> 4) & 63)) << 0 | (((buffer[7] >> 0) & 3)) << 6);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[7] >> 2) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 10);
}
void ByteBasedBitPackingWriter_10bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[10];
    memset(tgt_buffer,0, 10);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 2) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 0) & 3)) << 6 | (((buffer[1] >> 4) & 63)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 6) & 15)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[2] >> 0) & 63)) << 2 | (((buffer[3] >> 8) & 3)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[4] >> 2) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[4] >> 0) & 3)) << 6 | (((buffer[5] >> 4) & 63)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 6) & 15)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[6] >> 0) & 63)) << 2 | (((buffer[7] >> 8) & 3)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 10);
}
void ByteBasedBitPackingWriter_11bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[11];
    memset(tgt_buffer,0, 11);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 7)) << 0 | (((buffer[1] >> 0) & 31)) << 3);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 5) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[2] >> 10) & 1)) << 0 | (((buffer[3] >> 0) & 127)) << 1);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[3] >> 7) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[4] >> 4) & 127)) << 0 | (((buffer[5] >> 0) & 1)) << 7);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[5] >> 1) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[5] >> 9) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[6] >> 6) & 31)) << 0 | (((buffer[7] >> 0) & 7)) << 5);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[7] >> 3) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 11);
}
void ByteBasedBitPackingWriter_11bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[11];
    memset(tgt_buffer,0, 11);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 3) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 0) & 7)) << 5 | (((buffer[1] >> 6) & 31)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 9) & 3)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[2] >> 1) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[2] >> 0) & 1)) << 7 | (((buffer[3] >> 4) & 127)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 7) & 15)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[4] >> 0) & 127)) << 1 | (((buffer[5] >> 10) & 1)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 5) & 63)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[6] >> 0) & 31)) << 3 | (((buffer[7] >> 8) & 7)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 11);
}
void ByteBasedBitPackingWriter_12bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[12];
    memset(tgt_buffer,0, 12);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 15)) << 0 | (((buffer[1] >> 0) & 15)) << 4);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[2] >> 8) & 15)) << 0 | (((buffer[3] >> 0) & 15)) << 4);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[4] >> 8) & 15)) << 0 | (((buffer[5] >> 0) & 15)) << 4);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[6] >> 8) & 15)) << 0 | (((buffer[7] >> 0) & 15)) << 4);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[7] >> 4) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 12);
}
void ByteBasedBitPackingWriter_12bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[12];
    memset(tgt_buffer,0, 12);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 4) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 0) & 15)) << 4 | (((buffer[1] >> 8) & 15)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[2] >> 0) & 15)) << 4 | (((buffer[3] >> 8) & 15)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[4] >> 0) & 15)) << 4 | (((buffer[5] >> 8) & 15)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[6] >> 0) & 15)) << 4 | (((buffer[7] >> 8) & 15)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 12);
}
void ByteBasedBitPackingWriter_13bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[13];
    memset(tgt_buffer,0, 13);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 31)) << 0 | (((buffer[1] >> 0) & 7)) << 5);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 3) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 11) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[2] >> 6) & 127)) << 0 | (((buffer[3] >> 0) & 1)) << 7);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[3] >> 1) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[3] >> 9) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[4] >> 12) & 1)) << 0 | (((buffer[5] >> 0) & 127)) << 1);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[5] >> 7) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[6] >> 10) & 7)) << 0 | (((buffer[7] >> 0) & 31)) << 3);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[7] >> 5) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 13);
}
void ByteBasedBitPackingWriter_13bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[13];
    memset(tgt_buffer,0, 13);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 5) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 0) & 31)) << 3 | (((buffer[1] >> 10) & 7)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 7) & 63)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[2] >> 0) & 127)) << 1 | (((buffer[3] >> 12) & 1)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 9) & 15)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[4] >> 1) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[4] >> 0) & 1)) << 7 | (((buffer[5] >> 6) & 127)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 11) & 3)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[6] >> 3) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[6] >> 0) & 7)) << 5 | (((buffer[7] >> 8) & 31)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 13);
}
void ByteBasedBitPackingWriter_14bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[14];
    memset(tgt_buffer,0, 14);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 63)) << 0 | (((buffer[1] >> 0) & 3)) << 6);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 10) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 12) & 3)) << 0 | (((buffer[3] >> 0) & 63)) << 2);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[3] >> 6) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[4] >> 8) & 63)) << 0 | (((buffer[5] >> 0) & 3)) << 6);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[5] >> 10) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[6] >> 12) & 3)) << 0 | (((buffer[7] >> 0) & 63)) << 2);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[7] >> 6) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 14);
}
void ByteBasedBitPackingWriter_14bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[14];
    memset(tgt_buffer,0, 14);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 6) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 0) & 63)) << 2 | (((buffer[1] >> 12) & 3)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 10) & 15)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 0) & 3)) << 6 | (((buffer[3] >> 8) & 63)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[4] >> 6) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[4] >> 0) & 63)) << 2 | (((buffer[5] >> 12) & 3)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 10) & 15)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[6] >> 0) & 3)) << 6 | (((buffer[7] >> 8) & 63)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 14);
}
void ByteBasedBitPackingWriter_15bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[15];
    memset(tgt_buffer,0, 15);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 127)) << 0 | (((buffer[1] >> 0) & 1)) << 7);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 1) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 9) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 10) & 31)) << 0 | (((buffer[3] >> 0) & 7)) << 5);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[3] >> 3) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[3] >> 11) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[4] >> 12) & 7)) << 0 | (((buffer[5] >> 0) & 31)) << 3);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[5] >> 5) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[5] >> 13) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[6] >> 14) & 1)) << 0 | (((buffer[7] >> 0) & 127)) << 1);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[7] >> 7) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 15);
}
void ByteBasedBitPackingWriter_15bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[15];
    memset(tgt_buffer,0, 15);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 7) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 0) & 127)) << 1 | (((buffer[1] >> 14) & 1)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 13) & 3)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[2] >> 5) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 0) & 31)) << 3 | (((buffer[3] >> 12) & 7)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 11) & 15)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[4] >> 3) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[4] >> 0) & 7)) << 5 | (((buffer[5] >> 10) & 31)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 9) & 63)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[6] >> 1) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[6] >> 0) & 1)) << 7 | (((buffer[7] >> 8) & 127)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 15);
}
void ByteBasedBitPackingWriter_16bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[16];
    memset(tgt_buffer,0, 16);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 16);
}
void ByteBasedBitPackingWriter_16bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[16];
    memset(tgt_buffer,0, 16);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 16);
}
void ByteBasedBitPackingWriter_17bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[17];
    memset(tgt_buffer,0, 17);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 1)) << 0 | (((buffer[1] >> 0) & 127)) << 1);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 7) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 15) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 14) & 7)) << 0 | (((buffer[3] >> 0) & 31)) << 3);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[3] >> 5) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[3] >> 13) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[4] >> 12) & 31)) << 0 | (((buffer[5] >> 0) & 7)) << 5);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[5] >> 3) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[5] >> 11) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[6] >> 10) & 127)) << 0 | (((buffer[7] >> 0) & 1)) << 7);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[7] >> 1) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[7] >> 9) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 17);
}
void ByteBasedBitPackingWriter_17bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[17];
    memset(tgt_buffer,0, 17);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 9) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 1) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 0) & 1)) << 7 | (((buffer[1] >> 10) & 127)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 11) & 63)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 3) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 0) & 7)) << 5 | (((buffer[3] >> 12) & 31)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 13) & 15)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[4] >> 5) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[4] >> 0) & 31)) << 3 | (((buffer[5] >> 14) & 7)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 15) & 3)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[6] >> 7) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[6] >> 0) & 127)) << 1 | (((buffer[7] >> 16) & 1)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 17);
}
void ByteBasedBitPackingWriter_18bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[18];
    memset(tgt_buffer,0, 18);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 3)) << 0 | (((buffer[1] >> 0) & 63)) << 2);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 14) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 12) & 63)) << 0 | (((buffer[3] >> 0) & 3)) << 6);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[3] >> 2) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[3] >> 10) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[4] >> 16) & 3)) << 0 | (((buffer[5] >> 0) & 63)) << 2);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[5] >> 14) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[6] >> 12) & 63)) << 0 | (((buffer[7] >> 0) & 3)) << 6);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[7] >> 2) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[7] >> 10) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 18);
}
void ByteBasedBitPackingWriter_18bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[18];
    memset(tgt_buffer,0, 18);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 10) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 2) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 0) & 3)) << 6 | (((buffer[1] >> 12) & 63)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 14) & 15)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 0) & 63)) << 2 | (((buffer[3] >> 16) & 3)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[4] >> 10) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[4] >> 2) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[4] >> 0) & 3)) << 6 | (((buffer[5] >> 12) & 63)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 14) & 15)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[6] >> 0) & 63)) << 2 | (((buffer[7] >> 16) & 3)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 18);
}
void ByteBasedBitPackingWriter_19bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[19];
    memset(tgt_buffer,0, 19);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 7)) << 0 | (((buffer[1] >> 0) & 31)) << 3);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 5) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 13) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 18) & 1)) << 0 | (((buffer[3] >> 0) & 127)) << 1);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[3] >> 7) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[3] >> 15) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[4] >> 12) & 127)) << 0 | (((buffer[5] >> 0) & 1)) << 7);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[5] >> 1) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[5] >> 9) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[5] >> 17) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[6] >> 14) & 31)) << 0 | (((buffer[7] >> 0) & 7)) << 5);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[7] >> 3) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[7] >> 11) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 19);
}
void ByteBasedBitPackingWriter_19bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[19];
    memset(tgt_buffer,0, 19);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 11) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 3) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 0) & 7)) << 5 | (((buffer[1] >> 14) & 31)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 17) & 3)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 9) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 1) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 0) & 1)) << 7 | (((buffer[3] >> 12) & 127)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 15) & 15)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[4] >> 7) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[4] >> 0) & 127)) << 1 | (((buffer[5] >> 18) & 1)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 13) & 63)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[6] >> 5) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[6] >> 0) & 31)) << 3 | (((buffer[7] >> 16) & 7)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 19);
}
void ByteBasedBitPackingWriter_20bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[20];
    memset(tgt_buffer,0, 20);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 15)) << 0 | (((buffer[1] >> 0) & 15)) << 4);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 16) & 15)) << 0 | (((buffer[3] >> 0) & 15)) << 4);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[4] >> 16) & 15)) << 0 | (((buffer[5] >> 0) & 15)) << 4);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[6] >> 16) & 15)) << 0 | (((buffer[7] >> 0) & 15)) << 4);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[7] >> 4) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[7] >> 12) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 20);
}
void ByteBasedBitPackingWriter_20bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[20];
    memset(tgt_buffer,0, 20);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 12) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 4) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 0) & 15)) << 4 | (((buffer[1] >> 16) & 15)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 0) & 15)) << 4 | (((buffer[3] >> 16) & 15)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[4] >> 0) & 15)) << 4 | (((buffer[5] >> 16) & 15)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[6] >> 0) & 15)) << 4 | (((buffer[7] >> 16) & 15)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 20);
}
void ByteBasedBitPackingWriter_21bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[21];
    memset(tgt_buffer,0, 21);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 31)) << 0 | (((buffer[1] >> 0) & 7)) << 5);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 3) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 11) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 19) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 14) & 127)) << 0 | (((buffer[3] >> 0) & 1)) << 7);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[3] >> 1) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[3] >> 9) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[3] >> 17) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[4] >> 20) & 1)) << 0 | (((buffer[5] >> 0) & 127)) << 1);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[5] >> 7) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[5] >> 15) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[6] >> 18) & 7)) << 0 | (((buffer[7] >> 0) & 31)) << 3);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[7] >> 5) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[7] >> 13) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 21);
}
void ByteBasedBitPackingWriter_21bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[21];
    memset(tgt_buffer,0, 21);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 13) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 5) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 0) & 31)) << 3 | (((buffer[1] >> 18) & 7)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 15) & 63)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 7) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 0) & 127)) << 1 | (((buffer[3] >> 20) & 1)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 17) & 15)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[4] >> 9) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[4] >> 1) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[4] >> 0) & 1)) << 7 | (((buffer[5] >> 14) & 127)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 19) & 3)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[6] >> 11) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[6] >> 3) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[6] >> 0) & 7)) << 5 | (((buffer[7] >> 16) & 31)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 21);
}
void ByteBasedBitPackingWriter_22bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[22];
    memset(tgt_buffer,0, 22);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 63)) << 0 | (((buffer[1] >> 0) & 3)) << 6);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 18) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 20) & 3)) << 0 | (((buffer[3] >> 0) & 63)) << 2);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[3] >> 6) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[3] >> 14) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[4] >> 16) & 63)) << 0 | (((buffer[5] >> 0) & 3)) << 6);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[5] >> 18) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[6] >> 20) & 3)) << 0 | (((buffer[7] >> 0) & 63)) << 2);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[7] >> 6) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[7] >> 14) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 22);
}
void ByteBasedBitPackingWriter_22bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[22];
    memset(tgt_buffer,0, 22);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 14) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 6) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 0) & 63)) << 2 | (((buffer[1] >> 20) & 3)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 18) & 15)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 0) & 3)) << 6 | (((buffer[3] >> 16) & 63)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[4] >> 14) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[4] >> 6) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[4] >> 0) & 63)) << 2 | (((buffer[5] >> 20) & 3)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 18) & 15)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[6] >> 0) & 3)) << 6 | (((buffer[7] >> 16) & 63)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 22);
}
void ByteBasedBitPackingWriter_23bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[23];
    memset(tgt_buffer,0, 23);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 127)) << 0 | (((buffer[1] >> 0) & 1)) << 7);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 1) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 9) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 17) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 18) & 31)) << 0 | (((buffer[3] >> 0) & 7)) << 5);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[3] >> 3) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[3] >> 11) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 19) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[4] >> 20) & 7)) << 0 | (((buffer[5] >> 0) & 31)) << 3);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[5] >> 5) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[5] >> 13) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[5] >> 21) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[6] >> 22) & 1)) << 0 | (((buffer[7] >> 0) & 127)) << 1);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[7] >> 7) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[7] >> 15) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 23);
}
void ByteBasedBitPackingWriter_23bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[23];
    memset(tgt_buffer,0, 23);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 15) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 7) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 0) & 127)) << 1 | (((buffer[1] >> 22) & 1)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 21) & 3)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 13) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 5) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 0) & 31)) << 3 | (((buffer[3] >> 20) & 7)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 19) & 15)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[4] >> 11) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[4] >> 3) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[4] >> 0) & 7)) << 5 | (((buffer[5] >> 18) & 31)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 17) & 63)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[6] >> 9) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[6] >> 1) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[6] >> 0) & 1)) << 7 | (((buffer[7] >> 16) & 127)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 23);
}
void ByteBasedBitPackingWriter_24bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[24];
    memset(tgt_buffer,0, 24);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 24);
}
void ByteBasedBitPackingWriter_24bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[24];
    memset(tgt_buffer,0, 24);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 24);
}
void ByteBasedBitPackingWriter_25bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[25];
    memset(tgt_buffer,0, 25);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 1)) << 0 | (((buffer[1] >> 0) & 127)) << 1);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 7) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 15) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 23) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 22) & 7)) << 0 | (((buffer[3] >> 0) & 31)) << 3);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[3] >> 5) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 13) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 21) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[4] >> 20) & 31)) << 0 | (((buffer[5] >> 0) & 7)) << 5);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[5] >> 3) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[5] >> 11) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[5] >> 19) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[6] >> 18) & 127)) << 0 | (((buffer[7] >> 0) & 1)) << 7);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[7] >> 1) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[7] >> 9) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[7] >> 17) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 25);
}
void ByteBasedBitPackingWriter_25bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[25];
    memset(tgt_buffer,0, 25);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 17) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 9) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 1) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 0) & 1)) << 7 | (((buffer[1] >> 18) & 127)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 19) & 63)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 11) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 3) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 0) & 7)) << 5 | (((buffer[3] >> 20) & 31)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 21) & 15)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[4] >> 13) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[4] >> 5) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[4] >> 0) & 31)) << 3 | (((buffer[5] >> 22) & 7)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 23) & 3)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[6] >> 15) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[6] >> 7) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[6] >> 0) & 127)) << 1 | (((buffer[7] >> 24) & 1)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 25);
}
void ByteBasedBitPackingWriter_26bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[26];
    memset(tgt_buffer,0, 26);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 3)) << 0 | (((buffer[1] >> 0) & 63)) << 2);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 22) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 20) & 63)) << 0 | (((buffer[3] >> 0) & 3)) << 6);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[3] >> 2) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 10) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 18) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 24) & 3)) << 0 | (((buffer[5] >> 0) & 63)) << 2);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[5] >> 22) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[6] >> 20) & 63)) << 0 | (((buffer[7] >> 0) & 3)) << 6);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[7] >> 2) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[7] >> 10) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[7] >> 18) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 26);
}
void ByteBasedBitPackingWriter_26bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[26];
    memset(tgt_buffer,0, 26);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 18) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 10) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 2) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 0) & 3)) << 6 | (((buffer[1] >> 20) & 63)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 22) & 15)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 0) & 63)) << 2 | (((buffer[3] >> 24) & 3)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[4] >> 18) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[4] >> 10) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[4] >> 2) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 0) & 3)) << 6 | (((buffer[5] >> 20) & 63)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 22) & 15)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[6] >> 0) & 63)) << 2 | (((buffer[7] >> 24) & 3)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 26);
}
void ByteBasedBitPackingWriter_27bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[27];
    memset(tgt_buffer,0, 27);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 7)) << 0 | (((buffer[1] >> 0) & 31)) << 3);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 5) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 13) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 21) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 26) & 1)) << 0 | (((buffer[3] >> 0) & 127)) << 1);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 7) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 15) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 23) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 20) & 127)) << 0 | (((buffer[5] >> 0) & 1)) << 7);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[5] >> 1) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[5] >> 9) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[5] >> 17) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[5] >> 25) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[6] >> 22) & 31)) << 0 | (((buffer[7] >> 0) & 7)) << 5);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[7] >> 3) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[7] >> 11) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[7] >> 19) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 27);
}
void ByteBasedBitPackingWriter_27bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[27];
    memset(tgt_buffer,0, 27);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 19) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 11) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 3) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 0) & 7)) << 5 | (((buffer[1] >> 22) & 31)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 25) & 3)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 17) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 9) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 1) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 0) & 1)) << 7 | (((buffer[3] >> 20) & 127)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 23) & 15)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[4] >> 15) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[4] >> 7) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 0) & 127)) << 1 | (((buffer[5] >> 26) & 1)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 21) & 63)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[6] >> 13) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[6] >> 5) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[6] >> 0) & 31)) << 3 | (((buffer[7] >> 24) & 7)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 27);
}
void ByteBasedBitPackingWriter_28bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[28];
    memset(tgt_buffer,0, 28);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 15)) << 0 | (((buffer[1] >> 0) & 15)) << 4);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 24) & 15)) << 0 | (((buffer[3] >> 0) & 15)) << 4);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 24) & 15)) << 0 | (((buffer[5] >> 0) & 15)) << 4);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[6] >> 24) & 15)) << 0 | (((buffer[7] >> 0) & 15)) << 4);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[7] >> 4) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[7] >> 12) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[7] >> 20) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 28);
}
void ByteBasedBitPackingWriter_28bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[28];
    memset(tgt_buffer,0, 28);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 20) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 12) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 4) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 0) & 15)) << 4 | (((buffer[1] >> 24) & 15)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 0) & 15)) << 4 | (((buffer[3] >> 24) & 15)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 0) & 15)) << 4 | (((buffer[5] >> 24) & 15)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[6] >> 0) & 15)) << 4 | (((buffer[7] >> 24) & 15)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 28);
}
void ByteBasedBitPackingWriter_29bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[29];
    memset(tgt_buffer,0, 29);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 31)) << 0 | (((buffer[1] >> 0) & 7)) << 5);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 3) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 11) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 19) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 27) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 22) & 127)) << 0 | (((buffer[3] >> 0) & 1)) << 7);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 1) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 9) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 17) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 25) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 28) & 1)) << 0 | (((buffer[5] >> 0) & 127)) << 1);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[5] >> 7) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[5] >> 15) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[5] >> 23) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[6] >> 26) & 7)) << 0 | (((buffer[7] >> 0) & 31)) << 3);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[7] >> 5) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[7] >> 13) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[7] >> 21) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 29);
}
void ByteBasedBitPackingWriter_29bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[29];
    memset(tgt_buffer,0, 29);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 21) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 13) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 5) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 0) & 31)) << 3 | (((buffer[1] >> 26) & 7)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 23) & 63)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 15) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 7) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 0) & 127)) << 1 | (((buffer[3] >> 28) & 1)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 25) & 15)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[4] >> 17) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 9) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 1) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 0) & 1)) << 7 | (((buffer[5] >> 22) & 127)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 27) & 3)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[6] >> 19) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[6] >> 11) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[6] >> 3) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[6] >> 0) & 7)) << 5 | (((buffer[7] >> 24) & 31)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 29);
}
void ByteBasedBitPackingWriter_30bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[30];
    memset(tgt_buffer,0, 30);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 63)) << 0 | (((buffer[1] >> 0) & 3)) << 6);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 26) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 28) & 3)) << 0 | (((buffer[3] >> 0) & 63)) << 2);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 6) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 14) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 22) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 24) & 63)) << 0 | (((buffer[5] >> 0) & 3)) << 6);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[5] >> 26) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[6] >> 28) & 3)) << 0 | (((buffer[7] >> 0) & 63)) << 2);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[7] >> 6) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[7] >> 14) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[7] >> 22) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 30);
}
void ByteBasedBitPackingWriter_30bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[30];
    memset(tgt_buffer,0, 30);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 22) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 14) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 6) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 0) & 63)) << 2 | (((buffer[1] >> 28) & 3)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 26) & 15)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 0) & 3)) << 6 | (((buffer[3] >> 24) & 63)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[4] >> 22) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 14) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 6) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 0) & 63)) << 2 | (((buffer[5] >> 28) & 3)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 26) & 15)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[6] >> 0) & 3)) << 6 | (((buffer[7] >> 24) & 63)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 30);
}
void ByteBasedBitPackingWriter_31bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[31];
    memset(tgt_buffer,0, 31);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 127)) << 0 | (((buffer[1] >> 0) & 1)) << 7);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 1) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 9) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 17) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 25) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 26) & 31)) << 0 | (((buffer[3] >> 0) & 7)) << 5);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 3) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 11) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 19) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 27) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 28) & 7)) << 0 | (((buffer[5] >> 0) & 31)) << 3);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[5] >> 5) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[5] >> 13) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[5] >> 21) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[5] >> 29) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[6] >> 22) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[6] >> 30) & 1)) << 0 | (((buffer[7] >> 0) & 127)) << 1);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[7] >> 7) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[7] >> 15) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[7] >> 23) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 31);
}
void ByteBasedBitPackingWriter_31bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[31];
    memset(tgt_buffer,0, 31);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 23) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 15) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 7) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 0) & 127)) << 1 | (((buffer[1] >> 30) & 1)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 22) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 29) & 3)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 21) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 13) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 5) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 0) & 31)) << 3 | (((buffer[3] >> 28) & 7)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 27) & 15)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 19) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 11) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 3) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 0) & 7)) << 5 | (((buffer[5] >> 26) & 31)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 25) & 63)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[6] >> 17) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[6] >> 9) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[6] >> 1) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[6] >> 0) & 1)) << 7 | (((buffer[7] >> 24) & 127)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 31);
}
void ByteBasedBitPackingWriter_32bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[32];
    memset(tgt_buffer,0, 32);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 32);
}
void ByteBasedBitPackingWriter_32bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[32];
    memset(tgt_buffer,0, 32);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 32);
}
void ByteBasedBitPackingWriter_33bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[33];
    memset(tgt_buffer,0, 33);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 1)) << 0 | (((buffer[1] >> 0) & 127)) << 1);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 7) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 15) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 23) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 31) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 22) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 30) & 7)) << 0 | (((buffer[3] >> 0) & 31)) << 3);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 5) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 13) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 21) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 29) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 28) & 31)) << 0 | (((buffer[5] >> 0) & 7)) << 5);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[5] >> 3) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[5] >> 11) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[5] >> 19) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[5] >> 27) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[6] >> 26) & 127)) << 0 | (((buffer[7] >> 0) & 1)) << 7);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[7] >> 1) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[7] >> 9) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[7] >> 17) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[7] >> 25) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 33);
}
void ByteBasedBitPackingWriter_33bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[33];
    memset(tgt_buffer,0, 33);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 25) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 17) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 9) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 1) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 0) & 1)) << 7 | (((buffer[1] >> 26) & 127)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 27) & 63)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 19) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 11) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 3) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 0) & 7)) << 5 | (((buffer[3] >> 28) & 31)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 29) & 15)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 21) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 13) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 5) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 0) & 31)) << 3 | (((buffer[5] >> 30) & 7)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[5] >> 22) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 31) & 3)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[6] >> 23) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[6] >> 15) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[6] >> 7) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[6] >> 0) & 127)) << 1 | (((buffer[7] >> 32) & 1)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 33);
}
void ByteBasedBitPackingWriter_34bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[34];
    memset(tgt_buffer,0, 34);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 3)) << 0 | (((buffer[1] >> 0) & 63)) << 2);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 22) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 30) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 28) & 63)) << 0 | (((buffer[3] >> 0) & 3)) << 6);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 2) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 10) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 18) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 26) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 32) & 3)) << 0 | (((buffer[5] >> 0) & 63)) << 2);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[5] >> 22) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 30) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[6] >> 28) & 63)) << 0 | (((buffer[7] >> 0) & 3)) << 6);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[7] >> 2) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[7] >> 10) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[7] >> 18) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[7] >> 26) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 34);
}
void ByteBasedBitPackingWriter_34bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[34];
    memset(tgt_buffer,0, 34);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 26) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 18) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 10) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 2) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 0) & 3)) << 6 | (((buffer[1] >> 28) & 63)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 30) & 15)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 22) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 0) & 63)) << 2 | (((buffer[3] >> 32) & 3)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[4] >> 26) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 18) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 10) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 2) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 0) & 3)) << 6 | (((buffer[5] >> 28) & 63)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 30) & 15)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[6] >> 22) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[6] >> 0) & 63)) << 2 | (((buffer[7] >> 32) & 3)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 34);
}
void ByteBasedBitPackingWriter_35bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[35];
    memset(tgt_buffer,0, 35);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 7)) << 0 | (((buffer[1] >> 0) & 31)) << 3);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 5) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 13) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 21) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 29) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 26) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 34) & 1)) << 0 | (((buffer[3] >> 0) & 127)) << 1);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 7) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 15) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 23) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 31) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 28) & 127)) << 0 | (((buffer[5] >> 0) & 1)) << 7);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[5] >> 1) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[5] >> 9) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[5] >> 17) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 25) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 33) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[6] >> 22) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[6] >> 30) & 31)) << 0 | (((buffer[7] >> 0) & 7)) << 5);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[7] >> 3) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[7] >> 11) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[7] >> 19) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[7] >> 27) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 35);
}
void ByteBasedBitPackingWriter_35bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[35];
    memset(tgt_buffer,0, 35);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 27) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 19) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 11) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 3) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 0) & 7)) << 5 | (((buffer[1] >> 30) & 31)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 22) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 33) & 3)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 25) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 17) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 9) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 1) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 0) & 1)) << 7 | (((buffer[3] >> 28) & 127)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 31) & 15)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 23) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 15) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 7) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 0) & 127)) << 1 | (((buffer[5] >> 34) & 1)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[5] >> 26) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 29) & 63)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[6] >> 21) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[6] >> 13) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[6] >> 5) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[6] >> 0) & 31)) << 3 | (((buffer[7] >> 32) & 7)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 35);
}
void ByteBasedBitPackingWriter_36bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[36];
    memset(tgt_buffer,0, 36);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 15)) << 0 | (((buffer[1] >> 0) & 15)) << 4);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 28) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 32) & 15)) << 0 | (((buffer[3] >> 0) & 15)) << 4);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 32) & 15)) << 0 | (((buffer[5] >> 0) & 15)) << 4);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 28) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[6] >> 32) & 15)) << 0 | (((buffer[7] >> 0) & 15)) << 4);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[7] >> 4) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[7] >> 12) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[7] >> 20) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[7] >> 28) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 36);
}
void ByteBasedBitPackingWriter_36bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[36];
    memset(tgt_buffer,0, 36);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 28) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 20) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 12) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 4) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 0) & 15)) << 4 | (((buffer[1] >> 32) & 15)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[2] >> 28) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 0) & 15)) << 4 | (((buffer[3] >> 32) & 15)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 0) & 15)) << 4 | (((buffer[5] >> 32) & 15)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[6] >> 28) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[6] >> 0) & 15)) << 4 | (((buffer[7] >> 32) & 15)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 36);
}
void ByteBasedBitPackingWriter_37bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[37];
    memset(tgt_buffer,0, 37);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 31)) << 0 | (((buffer[1] >> 0) & 7)) << 5);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 3) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 11) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 19) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 27) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 35) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 22) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 30) & 127)) << 0 | (((buffer[3] >> 0) & 1)) << 7);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 1) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 9) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 17) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 25) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 33) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 36) & 1)) << 0 | (((buffer[5] >> 0) & 127)) << 1);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[5] >> 7) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 15) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 23) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 31) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[6] >> 26) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[6] >> 34) & 7)) << 0 | (((buffer[7] >> 0) & 31)) << 3);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[7] >> 5) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[7] >> 13) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[7] >> 21) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[7] >> 29) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 37);
}
void ByteBasedBitPackingWriter_37bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[37];
    memset(tgt_buffer,0, 37);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 29) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 21) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 13) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 5) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 0) & 31)) << 3 | (((buffer[1] >> 34) & 7)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 26) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 31) & 63)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 23) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 15) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 7) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 0) & 127)) << 1 | (((buffer[3] >> 36) & 1)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 33) & 15)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 25) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 17) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 9) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 1) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 0) & 1)) << 7 | (((buffer[5] >> 30) & 127)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[5] >> 22) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 35) & 3)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[6] >> 27) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[6] >> 19) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[6] >> 11) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[6] >> 3) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[6] >> 0) & 7)) << 5 | (((buffer[7] >> 32) & 31)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 37);
}
void ByteBasedBitPackingWriter_38bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[38];
    memset(tgt_buffer,0, 38);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 63)) << 0 | (((buffer[1] >> 0) & 3)) << 6);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 26) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 34) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 28) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 36) & 3)) << 0 | (((buffer[3] >> 0) & 63)) << 2);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 6) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 14) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 22) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 30) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 32) & 63)) << 0 | (((buffer[5] >> 0) & 3)) << 6);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 26) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 34) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[6] >> 28) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 36) & 3)) << 0 | (((buffer[7] >> 0) & 63)) << 2);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[7] >> 6) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[7] >> 14) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[7] >> 22) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[7] >> 30) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 38);
}
void ByteBasedBitPackingWriter_38bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[38];
    memset(tgt_buffer,0, 38);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 30) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 22) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 14) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 6) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 0) & 63)) << 2 | (((buffer[1] >> 36) & 3)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 28) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 34) & 15)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 26) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 0) & 3)) << 6 | (((buffer[3] >> 32) & 63)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[4] >> 30) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 22) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 14) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 6) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 0) & 63)) << 2 | (((buffer[5] >> 36) & 3)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[5] >> 28) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 34) & 15)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[6] >> 26) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 0) & 3)) << 6 | (((buffer[7] >> 32) & 63)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 38);
}
void ByteBasedBitPackingWriter_39bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[39];
    memset(tgt_buffer,0, 39);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 127)) << 0 | (((buffer[1] >> 0) & 1)) << 7);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 1) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 9) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 17) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 25) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 33) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 26) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 34) & 31)) << 0 | (((buffer[3] >> 0) & 7)) << 5);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 3) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 11) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 19) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 27) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 35) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 36) & 7)) << 0 | (((buffer[5] >> 0) & 31)) << 3);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 5) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 13) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 21) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 29) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 37) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[6] >> 22) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 30) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 38) & 1)) << 0 | (((buffer[7] >> 0) & 127)) << 1);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[7] >> 7) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[7] >> 15) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[7] >> 23) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[7] >> 31) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 39);
}
void ByteBasedBitPackingWriter_39bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[39];
    memset(tgt_buffer,0, 39);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 31) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 23) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 15) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 7) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 0) & 127)) << 1 | (((buffer[1] >> 38) & 1)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 30) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 22) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 37) & 3)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 29) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 21) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 13) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 5) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 0) & 31)) << 3 | (((buffer[3] >> 36) & 7)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 35) & 15)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 27) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 19) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 11) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 3) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 0) & 7)) << 5 | (((buffer[5] >> 34) & 31)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 26) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 33) & 63)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[6] >> 25) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[6] >> 17) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[6] >> 9) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 1) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 0) & 1)) << 7 | (((buffer[7] >> 32) & 127)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 39);
}
void ByteBasedBitPackingWriter_40bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[40];
    memset(tgt_buffer,0, 40);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 32) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 32) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 32) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 32) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 40);
}
void ByteBasedBitPackingWriter_40bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[40];
    memset(tgt_buffer,0, 40);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[1] >> 32) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[2] >> 32) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[5] >> 32) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[6] >> 32) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 40);
}
void ByteBasedBitPackingWriter_41bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[41];
    memset(tgt_buffer,0, 41);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 1)) << 0 | (((buffer[1] >> 0) & 127)) << 1);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 7) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 15) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 23) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 31) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 39) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 22) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 30) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 38) & 7)) << 0 | (((buffer[3] >> 0) & 31)) << 3);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 5) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 13) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 21) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 29) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 37) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 36) & 31)) << 0 | (((buffer[5] >> 0) & 7)) << 5);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 3) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 11) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 19) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 27) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 35) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 26) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[6] >> 34) & 127)) << 0 | (((buffer[7] >> 0) & 1)) << 7);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[7] >> 1) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[7] >> 9) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[7] >> 17) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[7] >> 25) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[7] >> 33) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 41);
}
void ByteBasedBitPackingWriter_41bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[41];
    memset(tgt_buffer,0, 41);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 33) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 25) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 17) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 9) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 1) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 0) & 1)) << 7 | (((buffer[1] >> 34) & 127)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 26) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 35) & 63)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 27) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 19) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 11) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 3) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 0) & 7)) << 5 | (((buffer[3] >> 36) & 31)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 37) & 15)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 29) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 21) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 13) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 5) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 0) & 31)) << 3 | (((buffer[5] >> 38) & 7)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[5] >> 30) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 22) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 39) & 3)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[6] >> 31) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[6] >> 23) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 15) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 7) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[6] >> 0) & 127)) << 1 | (((buffer[7] >> 40) & 1)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 41);
}
void ByteBasedBitPackingWriter_42bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[42];
    memset(tgt_buffer,0, 42);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 3)) << 0 | (((buffer[1] >> 0) & 63)) << 2);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 22) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 30) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 38) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 28) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 36) & 63)) << 0 | (((buffer[3] >> 0) & 3)) << 6);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 2) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 10) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 18) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 26) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 34) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 40) & 3)) << 0 | (((buffer[5] >> 0) & 63)) << 2);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 22) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 30) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 38) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[6] >> 28) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 36) & 63)) << 0 | (((buffer[7] >> 0) & 3)) << 6);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[7] >> 2) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[7] >> 10) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[7] >> 18) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[7] >> 26) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[7] >> 34) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 42);
}
void ByteBasedBitPackingWriter_42bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[42];
    memset(tgt_buffer,0, 42);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 34) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 26) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 18) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 10) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 2) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 0) & 3)) << 6 | (((buffer[1] >> 36) & 63)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 28) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 38) & 15)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 30) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 22) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 0) & 63)) << 2 | (((buffer[3] >> 40) & 3)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[4] >> 34) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 26) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 18) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 10) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 2) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 0) & 3)) << 6 | (((buffer[5] >> 36) & 63)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 28) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 38) & 15)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[6] >> 30) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 22) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 0) & 63)) << 2 | (((buffer[7] >> 40) & 3)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 42);
}
void ByteBasedBitPackingWriter_43bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[43];
    memset(tgt_buffer,0, 43);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 7)) << 0 | (((buffer[1] >> 0) & 31)) << 3);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 5) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 13) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 21) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 29) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 37) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 26) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 34) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 42) & 1)) << 0 | (((buffer[3] >> 0) & 127)) << 1);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 7) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 15) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 23) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 31) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 39) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 36) & 127)) << 0 | (((buffer[5] >> 0) & 1)) << 7);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 1) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 9) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 17) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 25) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 33) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 41) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[6] >> 22) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 30) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 38) & 31)) << 0 | (((buffer[7] >> 0) & 7)) << 5);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[7] >> 3) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[7] >> 11) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[7] >> 19) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[7] >> 27) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[7] >> 35) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 43);
}
void ByteBasedBitPackingWriter_43bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[43];
    memset(tgt_buffer,0, 43);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 35) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 27) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 19) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 11) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 3) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 0) & 7)) << 5 | (((buffer[1] >> 38) & 31)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 30) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 22) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 41) & 3)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 33) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 25) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 17) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 9) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 1) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 0) & 1)) << 7 | (((buffer[3] >> 36) & 127)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 39) & 15)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 31) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 23) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 15) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 7) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 0) & 127)) << 1 | (((buffer[5] >> 42) & 1)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[5] >> 34) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 26) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 37) & 63)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 29) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 21) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[6] >> 13) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 5) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 0) & 31)) << 3 | (((buffer[7] >> 40) & 7)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 43);
}
void ByteBasedBitPackingWriter_44bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[44];
    memset(tgt_buffer,0, 44);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 15)) << 0 | (((buffer[1] >> 0) & 15)) << 4);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 28) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 36) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 32) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 40) & 15)) << 0 | (((buffer[3] >> 0) & 15)) << 4);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 36) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 40) & 15)) << 0 | (((buffer[5] >> 0) & 15)) << 4);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 28) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 36) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 32) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 40) & 15)) << 0 | (((buffer[7] >> 0) & 15)) << 4);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[7] >> 4) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[7] >> 12) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[7] >> 20) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[7] >> 28) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[7] >> 36) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 44);
}
void ByteBasedBitPackingWriter_44bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[44];
    memset(tgt_buffer,0, 44);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 36) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 28) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 20) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 12) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 4) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 0) & 15)) << 4 | (((buffer[1] >> 40) & 15)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 32) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[2] >> 36) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 28) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 0) & 15)) << 4 | (((buffer[3] >> 40) & 15)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[4] >> 36) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 0) & 15)) << 4 | (((buffer[5] >> 40) & 15)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[5] >> 32) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[6] >> 36) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 28) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 0) & 15)) << 4 | (((buffer[7] >> 40) & 15)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 44);
}
void ByteBasedBitPackingWriter_45bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[45];
    memset(tgt_buffer,0, 45);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 31)) << 0 | (((buffer[1] >> 0) & 7)) << 5);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 3) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 11) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 19) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 27) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 35) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 43) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 22) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 30) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 38) & 127)) << 0 | (((buffer[3] >> 0) & 1)) << 7);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 1) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 9) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 17) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 25) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 33) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 41) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 36) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 44) & 1)) << 0 | (((buffer[5] >> 0) & 127)) << 1);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 7) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 15) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 23) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 31) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 39) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 26) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 34) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 42) & 7)) << 0 | (((buffer[7] >> 0) & 31)) << 3);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[7] >> 5) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[7] >> 13) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[7] >> 21) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[7] >> 29) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[7] >> 37) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 45);
}
void ByteBasedBitPackingWriter_45bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[45];
    memset(tgt_buffer,0, 45);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 37) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 29) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 21) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 13) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 5) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 0) & 31)) << 3 | (((buffer[1] >> 42) & 7)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 34) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 26) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 39) & 63)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 31) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 23) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 15) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 7) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 0) & 127)) << 1 | (((buffer[3] >> 44) & 1)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[3] >> 36) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 41) & 15)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 33) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 25) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 17) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 9) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 1) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 0) & 1)) << 7 | (((buffer[5] >> 38) & 127)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 30) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 22) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 43) & 3)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[6] >> 35) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[6] >> 27) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 19) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 11) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 3) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 0) & 7)) << 5 | (((buffer[7] >> 40) & 31)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 45);
}
void ByteBasedBitPackingWriter_46bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[46];
    memset(tgt_buffer,0, 46);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 63)) << 0 | (((buffer[1] >> 0) & 3)) << 6);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 26) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 34) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 42) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 28) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 36) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 44) & 3)) << 0 | (((buffer[3] >> 0) & 63)) << 2);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 6) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 14) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 22) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 30) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 38) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 40) & 63)) << 0 | (((buffer[5] >> 0) & 3)) << 6);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 26) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 34) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 42) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 28) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 36) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 44) & 3)) << 0 | (((buffer[7] >> 0) & 63)) << 2);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[7] >> 6) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[7] >> 14) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[7] >> 22) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[7] >> 30) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[7] >> 38) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 46);
}
void ByteBasedBitPackingWriter_46bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[46];
    memset(tgt_buffer,0, 46);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 38) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 30) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 22) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 14) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 6) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 0) & 63)) << 2 | (((buffer[1] >> 44) & 3)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 36) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 28) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 42) & 15)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 34) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 26) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 0) & 3)) << 6 | (((buffer[3] >> 40) & 63)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[4] >> 38) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 30) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 22) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 14) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 6) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 0) & 63)) << 2 | (((buffer[5] >> 44) & 3)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[5] >> 36) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 28) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 42) & 15)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[6] >> 34) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 26) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 0) & 3)) << 6 | (((buffer[7] >> 40) & 63)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 46);
}
void ByteBasedBitPackingWriter_47bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[47];
    memset(tgt_buffer,0, 47);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 127)) << 0 | (((buffer[1] >> 0) & 1)) << 7);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 1) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 9) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 17) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 25) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 33) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 41) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 26) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 34) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 42) & 31)) << 0 | (((buffer[3] >> 0) & 7)) << 5);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 3) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 11) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 19) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 27) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 35) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 43) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 36) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 44) & 7)) << 0 | (((buffer[5] >> 0) & 31)) << 3);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 5) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 13) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 21) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 29) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 37) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 45) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 22) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 30) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 38) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 46) & 1)) << 0 | (((buffer[7] >> 0) & 127)) << 1);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[7] >> 7) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[7] >> 15) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[7] >> 23) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[7] >> 31) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[7] >> 39) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 47);
}
void ByteBasedBitPackingWriter_47bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[47];
    memset(tgt_buffer,0, 47);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 39) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 31) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 23) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 15) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 7) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 0) & 127)) << 1 | (((buffer[1] >> 46) & 1)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 38) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 30) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 22) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 45) & 3)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 37) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 29) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 21) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 13) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 5) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 0) & 31)) << 3 | (((buffer[3] >> 44) & 7)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 36) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 43) & 15)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 35) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 27) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 19) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 11) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 3) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 0) & 7)) << 5 | (((buffer[5] >> 42) & 31)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 34) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 26) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 41) & 63)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 33) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 25) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 17) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 9) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 1) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 0) & 1)) << 7 | (((buffer[7] >> 40) & 127)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 47);
}
void ByteBasedBitPackingWriter_48bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[48];
    memset(tgt_buffer,0, 48);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 32) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 40) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 32) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 40) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 40) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 40) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 32) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 40) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 32) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 40) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 48);
}
void ByteBasedBitPackingWriter_48bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[48];
    memset(tgt_buffer,0, 48);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[1] >> 40) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 32) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[2] >> 40) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 32) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[3] >> 40) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[4] >> 40) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[5] >> 40) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 32) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[6] >> 40) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 32) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 48);
}
void ByteBasedBitPackingWriter_49bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[49];
    memset(tgt_buffer,0, 49);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 1)) << 0 | (((buffer[1] >> 0) & 127)) << 1);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 7) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 15) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 23) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 31) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 39) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 47) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 22) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 30) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 38) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 46) & 7)) << 0 | (((buffer[3] >> 0) & 31)) << 3);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 5) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 13) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 21) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 29) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 37) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 45) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 36) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 44) & 31)) << 0 | (((buffer[5] >> 0) & 7)) << 5);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 3) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 11) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 19) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 27) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 35) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 43) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 26) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 34) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 42) & 127)) << 0 | (((buffer[7] >> 0) & 1)) << 7);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[7] >> 1) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[7] >> 9) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[7] >> 17) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[7] >> 25) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[7] >> 33) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[7] >> 41) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 49);
}
void ByteBasedBitPackingWriter_49bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[49];
    memset(tgt_buffer,0, 49);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 41) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 33) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 25) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 17) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 9) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 1) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 0) & 1)) << 7 | (((buffer[1] >> 42) & 127)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 34) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 26) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 43) & 63)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 35) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 27) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 19) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 11) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 3) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 0) & 7)) << 5 | (((buffer[3] >> 44) & 31)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 36) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 45) & 15)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 37) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 29) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 21) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 13) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 5) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 0) & 31)) << 3 | (((buffer[5] >> 46) & 7)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[5] >> 38) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 30) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 22) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 47) & 3)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[6] >> 39) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 31) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 23) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 15) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 7) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 0) & 127)) << 1 | (((buffer[7] >> 48) & 1)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 49);
}
void ByteBasedBitPackingWriter_50bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[50];
    memset(tgt_buffer,0, 50);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 3)) << 0 | (((buffer[1] >> 0) & 63)) << 2);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 22) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 30) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 38) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 46) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 28) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 36) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 44) & 63)) << 0 | (((buffer[3] >> 0) & 3)) << 6);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 2) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 10) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 18) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 26) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 34) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 42) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 40) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 48) & 3)) << 0 | (((buffer[5] >> 0) & 63)) << 2);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 22) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 30) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 38) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 46) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 28) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 36) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 44) & 63)) << 0 | (((buffer[7] >> 0) & 3)) << 6);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[7] >> 2) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[7] >> 10) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[7] >> 18) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[7] >> 26) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[7] >> 34) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 42) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 50);
}
void ByteBasedBitPackingWriter_50bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[50];
    memset(tgt_buffer,0, 50);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 42) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 34) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 26) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 18) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 10) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 2) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 0) & 3)) << 6 | (((buffer[1] >> 44) & 63)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 36) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 28) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 46) & 15)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 38) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 30) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 22) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 0) & 63)) << 2 | (((buffer[3] >> 48) & 3)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[3] >> 40) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[4] >> 42) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 34) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 26) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 18) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 10) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 2) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 0) & 3)) << 6 | (((buffer[5] >> 44) & 63)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 36) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 28) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 46) & 15)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[6] >> 38) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 30) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 22) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 0) & 63)) << 2 | (((buffer[7] >> 48) & 3)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 50);
}
void ByteBasedBitPackingWriter_51bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[51];
    memset(tgt_buffer,0, 51);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 7)) << 0 | (((buffer[1] >> 0) & 31)) << 3);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 5) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 13) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 21) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 29) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 37) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 45) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 26) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 34) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 42) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 50) & 1)) << 0 | (((buffer[3] >> 0) & 127)) << 1);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 7) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 15) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 23) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 31) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 39) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 47) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 36) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 44) & 127)) << 0 | (((buffer[5] >> 0) & 1)) << 7);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 1) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 9) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 17) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 25) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 33) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 41) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 49) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 22) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 30) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 38) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 46) & 31)) << 0 | (((buffer[7] >> 0) & 7)) << 5);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[7] >> 3) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[7] >> 11) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[7] >> 19) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[7] >> 27) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 35) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 43) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 51);
}
void ByteBasedBitPackingWriter_51bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[51];
    memset(tgt_buffer,0, 51);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 43) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 35) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 27) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 19) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 11) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 3) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 0) & 7)) << 5 | (((buffer[1] >> 46) & 31)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 38) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 30) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 22) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 49) & 3)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 41) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 33) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 25) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 17) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 9) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 1) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 0) & 1)) << 7 | (((buffer[3] >> 44) & 127)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 36) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 47) & 15)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 39) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 31) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 23) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 15) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 7) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 0) & 127)) << 1 | (((buffer[5] >> 50) & 1)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[5] >> 42) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 34) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 26) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 45) & 63)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 37) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 29) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 21) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 13) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 5) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 0) & 31)) << 3 | (((buffer[7] >> 48) & 7)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 51);
}
void ByteBasedBitPackingWriter_52bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[52];
    memset(tgt_buffer,0, 52);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 15)) << 0 | (((buffer[1] >> 0) & 15)) << 4);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 28) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 36) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 44) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 32) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 40) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 48) & 15)) << 0 | (((buffer[3] >> 0) & 15)) << 4);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 36) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 44) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 40) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 48) & 15)) << 0 | (((buffer[5] >> 0) & 15)) << 4);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 28) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 36) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 44) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 32) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 40) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 48) & 15)) << 0 | (((buffer[7] >> 0) & 15)) << 4);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[7] >> 4) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[7] >> 12) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[7] >> 20) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 28) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 36) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 44) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 52);
}
void ByteBasedBitPackingWriter_52bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[52];
    memset(tgt_buffer,0, 52);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 44) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 36) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 28) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 20) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 12) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 4) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 0) & 15)) << 4 | (((buffer[1] >> 48) & 15)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 40) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 32) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[2] >> 44) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 36) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 28) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 0) & 15)) << 4 | (((buffer[3] >> 48) & 15)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 40) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[4] >> 44) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 36) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 0) & 15)) << 4 | (((buffer[5] >> 48) & 15)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[5] >> 40) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 32) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[6] >> 44) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 36) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 28) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 0) & 15)) << 4 | (((buffer[7] >> 48) & 15)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 52);
}
void ByteBasedBitPackingWriter_53bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[53];
    memset(tgt_buffer,0, 53);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 31)) << 0 | (((buffer[1] >> 0) & 7)) << 5);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 3) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 11) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 19) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 27) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 35) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 43) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 51) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 22) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 30) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 38) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 46) & 127)) << 0 | (((buffer[3] >> 0) & 1)) << 7);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 1) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 9) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 17) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 25) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 33) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 41) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 49) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 36) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 44) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 52) & 1)) << 0 | (((buffer[5] >> 0) & 127)) << 1);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 7) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 15) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 23) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 31) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 39) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 47) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 26) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 34) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 42) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 50) & 7)) << 0 | (((buffer[7] >> 0) & 31)) << 3);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[7] >> 5) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[7] >> 13) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 21) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 29) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 37) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 45) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 53);
}
void ByteBasedBitPackingWriter_53bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[53];
    memset(tgt_buffer,0, 53);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 45) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 37) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 29) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 21) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 13) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 5) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 0) & 31)) << 3 | (((buffer[1] >> 50) & 7)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 42) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 34) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 26) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 47) & 63)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 39) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 31) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 23) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 15) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 7) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 0) & 127)) << 1 | (((buffer[3] >> 52) & 1)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[3] >> 44) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 36) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 49) & 15)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 41) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 33) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 25) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 17) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 9) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 1) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 0) & 1)) << 7 | (((buffer[5] >> 46) & 127)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 38) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 30) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 22) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 51) & 3)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[6] >> 43) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 35) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 27) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 19) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 11) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 3) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 0) & 7)) << 5 | (((buffer[7] >> 48) & 31)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 53);
}
void ByteBasedBitPackingWriter_54bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[54];
    memset(tgt_buffer,0, 54);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 63)) << 0 | (((buffer[1] >> 0) & 3)) << 6);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 26) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 34) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 42) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 50) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 28) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 36) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 44) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 52) & 3)) << 0 | (((buffer[3] >> 0) & 63)) << 2);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 6) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 14) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 22) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 30) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 38) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 46) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 40) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 48) & 63)) << 0 | (((buffer[5] >> 0) & 3)) << 6);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 26) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 34) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 42) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 50) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 28) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 36) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 44) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 52) & 3)) << 0 | (((buffer[7] >> 0) & 63)) << 2);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[7] >> 6) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 14) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 22) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 30) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 38) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 46) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 54);
}
void ByteBasedBitPackingWriter_54bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[54];
    memset(tgt_buffer,0, 54);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 46) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 38) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 30) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 22) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 14) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 6) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 0) & 63)) << 2 | (((buffer[1] >> 52) & 3)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 44) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 36) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 28) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 50) & 15)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 42) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 34) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 26) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 0) & 3)) << 6 | (((buffer[3] >> 48) & 63)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 40) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[4] >> 46) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 38) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 30) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 22) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 14) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 6) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 0) & 63)) << 2 | (((buffer[5] >> 52) & 3)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[5] >> 44) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 36) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 28) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 50) & 15)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[6] >> 42) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 34) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 26) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 0) & 3)) << 6 | (((buffer[7] >> 48) & 63)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 54);
}
void ByteBasedBitPackingWriter_55bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[55];
    memset(tgt_buffer,0, 55);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 127)) << 0 | (((buffer[1] >> 0) & 1)) << 7);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 1) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 9) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 17) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 25) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 33) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 41) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 49) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 26) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 34) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 42) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 50) & 31)) << 0 | (((buffer[3] >> 0) & 7)) << 5);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 3) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 11) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 19) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 27) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 35) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 43) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 51) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 36) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 44) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 52) & 7)) << 0 | (((buffer[5] >> 0) & 31)) << 3);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 5) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 13) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 21) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 29) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 37) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 45) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 53) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 22) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 30) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 38) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 46) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 54) & 1)) << 0 | (((buffer[7] >> 0) & 127)) << 1);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 7) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 15) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 23) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 31) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 39) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 47) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 55);
}
void ByteBasedBitPackingWriter_55bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[55];
    memset(tgt_buffer,0, 55);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 47) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 39) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 31) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 23) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 15) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 7) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 0) & 127)) << 1 | (((buffer[1] >> 54) & 1)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 46) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 38) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 30) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 22) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 53) & 3)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 45) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 37) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 29) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 21) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 13) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 5) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 0) & 31)) << 3 | (((buffer[3] >> 52) & 7)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 44) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 36) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 51) & 15)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 43) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 35) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 27) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 19) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 11) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 3) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 0) & 7)) << 5 | (((buffer[5] >> 50) & 31)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 42) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 34) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 26) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 49) & 63)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 41) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 33) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 25) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 17) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 9) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 1) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 0) & 1)) << 7 | (((buffer[7] >> 48) & 127)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 55);
}
void ByteBasedBitPackingWriter_56bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[56];
    memset(tgt_buffer,0, 56);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 32) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 40) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 48) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 32) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 40) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 48) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 40) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 48) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 40) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 48) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 32) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 40) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 48) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 32) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 40) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 48) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 48) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 56);
}
void ByteBasedBitPackingWriter_56bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[56];
    memset(tgt_buffer,0, 56);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 48) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[1] >> 48) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 40) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 32) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[2] >> 48) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 40) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 32) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[3] >> 48) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 40) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[4] >> 48) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 40) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[5] >> 48) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 40) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 32) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[6] >> 48) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 40) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 32) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[7] >> 48) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 56);
}
void ByteBasedBitPackingWriter_57bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[57];
    memset(tgt_buffer,0, 57);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 56) & 1)) << 0 | (((buffer[1] >> 0) & 127)) << 1);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 7) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 15) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 23) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 31) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 39) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 47) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 55) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 22) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 30) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 38) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 46) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 54) & 7)) << 0 | (((buffer[3] >> 0) & 31)) << 3);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 5) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 13) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 21) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 29) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 37) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 45) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 53) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 36) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 44) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 52) & 31)) << 0 | (((buffer[5] >> 0) & 7)) << 5);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 3) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 11) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 19) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 27) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 35) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 43) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 51) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 26) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 34) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 42) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 50) & 127)) << 0 | (((buffer[7] >> 0) & 1)) << 7);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 1) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 9) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 17) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 25) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 33) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 41) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 49) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 57);
}
void ByteBasedBitPackingWriter_57bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[57];
    memset(tgt_buffer,0, 57);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 49) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 41) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 33) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 25) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 17) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 9) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 1) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 0) & 1)) << 7 | (((buffer[1] >> 50) & 127)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 42) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 34) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 26) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 51) & 63)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 43) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 35) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 27) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 19) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 11) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 3) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 0) & 7)) << 5 | (((buffer[3] >> 52) & 31)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 44) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 36) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 53) & 15)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 45) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 37) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 29) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 21) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 13) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 5) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 0) & 31)) << 3 | (((buffer[5] >> 54) & 7)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[5] >> 46) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 38) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 30) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 22) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 55) & 3)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[6] >> 47) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 39) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 31) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 23) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 15) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 7) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 0) & 127)) << 1 | (((buffer[7] >> 56) & 1)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[7] >> 48) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 57);
}
void ByteBasedBitPackingWriter_58bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[58];
    memset(tgt_buffer,0, 58);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 56) & 3)) << 0 | (((buffer[1] >> 0) & 63)) << 2);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 22) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 30) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 38) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 46) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 54) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 28) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 36) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 44) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 52) & 63)) << 0 | (((buffer[3] >> 0) & 3)) << 6);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 2) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 10) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 18) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 26) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 34) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 42) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 50) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 40) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 48) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 56) & 3)) << 0 | (((buffer[5] >> 0) & 63)) << 2);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 22) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 30) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 38) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 46) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 54) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 28) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 36) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 44) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 52) & 63)) << 0 | (((buffer[7] >> 0) & 3)) << 6);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 2) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 10) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 18) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 26) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 34) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 42) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 50) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 58);
}
void ByteBasedBitPackingWriter_58bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[58];
    memset(tgt_buffer,0, 58);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 50) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 42) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 34) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 26) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 18) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 10) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 2) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 0) & 3)) << 6 | (((buffer[1] >> 52) & 63)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 44) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 36) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 28) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 54) & 15)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 46) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 38) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 30) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 22) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 0) & 63)) << 2 | (((buffer[3] >> 56) & 3)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[3] >> 48) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 40) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[4] >> 50) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 42) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 34) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 26) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 18) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 10) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 2) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 0) & 3)) << 6 | (((buffer[5] >> 52) & 63)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 44) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 36) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 28) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 54) & 15)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[6] >> 46) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 38) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 30) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 22) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 0) & 63)) << 2 | (((buffer[7] >> 56) & 3)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[7] >> 48) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 58);
}
void ByteBasedBitPackingWriter_59bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[59];
    memset(tgt_buffer,0, 59);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 56) & 7)) << 0 | (((buffer[1] >> 0) & 31)) << 3);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 5) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 13) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 21) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 29) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 37) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 45) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 53) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 26) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 34) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 42) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 50) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[2] >> 58) & 1)) << 0 | (((buffer[3] >> 0) & 127)) << 1);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 7) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 15) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 23) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 31) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 39) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 47) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[3] >> 55) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 36) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 44) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 52) & 127)) << 0 | (((buffer[5] >> 0) & 1)) << 7);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 1) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 9) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 17) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 25) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 33) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 41) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 49) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[5] >> 57) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 22) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 30) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 38) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 46) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[6] >> 54) & 31)) << 0 | (((buffer[7] >> 0) & 7)) << 5);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 3) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 11) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 19) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 27) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 35) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 43) & 255)) << 0);
        
    tgt_buffer[58] = static_cast<uint8_t>((((buffer[7] >> 51) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 59);
}
void ByteBasedBitPackingWriter_59bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[59];
    memset(tgt_buffer,0, 59);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 51) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 43) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 35) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 27) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 19) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 11) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 3) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 0) & 7)) << 5 | (((buffer[1] >> 54) & 31)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 46) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 38) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 30) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 22) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 57) & 3)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 49) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 41) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 33) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 25) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 17) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 9) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 1) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[2] >> 0) & 1)) << 7 | (((buffer[3] >> 52) & 127)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 44) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 36) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 55) & 15)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 47) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 39) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 31) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 23) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 15) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 7) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 0) & 127)) << 1 | (((buffer[5] >> 58) & 1)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[5] >> 50) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 42) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 34) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 26) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 53) & 63)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 45) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 37) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 29) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 21) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 13) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 5) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[6] >> 0) & 31)) << 3 | (((buffer[7] >> 56) & 7)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[7] >> 48) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[58] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 59);
}
void ByteBasedBitPackingWriter_60bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[60];
    memset(tgt_buffer,0, 60);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 56) & 15)) << 0 | (((buffer[1] >> 0) & 15)) << 4);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 28) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 36) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 44) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 52) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 32) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 40) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 48) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[2] >> 56) & 15)) << 0 | (((buffer[3] >> 0) & 15)) << 4);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 36) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 44) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[3] >> 52) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 40) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 48) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[4] >> 56) & 15)) << 0 | (((buffer[5] >> 0) & 15)) << 4);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 28) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 36) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 44) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[5] >> 52) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 32) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 40) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[6] >> 48) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[6] >> 56) & 15)) << 0 | (((buffer[7] >> 0) & 15)) << 4);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 4) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 12) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 20) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 28) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 36) & 255)) << 0);
        
    tgt_buffer[58] = static_cast<uint8_t>((((buffer[7] >> 44) & 255)) << 0);
        
    tgt_buffer[59] = static_cast<uint8_t>((((buffer[7] >> 52) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 60);
}
void ByteBasedBitPackingWriter_60bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[60];
    memset(tgt_buffer,0, 60);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 52) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 44) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 36) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 28) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 20) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 12) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 4) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 0) & 15)) << 4 | (((buffer[1] >> 56) & 15)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 48) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 40) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 32) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[2] >> 52) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 44) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 36) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 28) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[2] >> 0) & 15)) << 4 | (((buffer[3] >> 56) & 15)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 48) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 40) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[4] >> 52) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 44) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 36) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[4] >> 0) & 15)) << 4 | (((buffer[5] >> 56) & 15)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[5] >> 48) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 40) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 32) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[6] >> 52) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 44) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 36) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 28) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[6] >> 0) & 15)) << 4 | (((buffer[7] >> 56) & 15)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[7] >> 48) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[58] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[59] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 60);
}
void ByteBasedBitPackingWriter_61bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[61];
    memset(tgt_buffer,0, 61);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 56) & 31)) << 0 | (((buffer[1] >> 0) & 7)) << 5);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 3) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 11) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 19) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 27) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 35) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 43) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 51) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[1] >> 59) & 3)) << 0 | (((buffer[2] >> 0) & 63)) << 2);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 6) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 14) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 22) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 30) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 38) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 46) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[2] >> 54) & 127)) << 0 | (((buffer[3] >> 0) & 1)) << 7);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 1) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 9) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 17) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 25) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 33) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 41) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[3] >> 49) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[3] >> 57) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 36) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 44) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[4] >> 52) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[4] >> 60) & 1)) << 0 | (((buffer[5] >> 0) & 127)) << 1);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 7) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 15) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 23) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 31) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 39) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[5] >> 47) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[5] >> 55) & 63)) << 0 | (((buffer[6] >> 0) & 3)) << 6);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 26) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 34) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[6] >> 42) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[6] >> 50) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[6] >> 58) & 7)) << 0 | (((buffer[7] >> 0) & 31)) << 3);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 5) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 13) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 21) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 29) & 255)) << 0);
        
    tgt_buffer[58] = static_cast<uint8_t>((((buffer[7] >> 37) & 255)) << 0);
        
    tgt_buffer[59] = static_cast<uint8_t>((((buffer[7] >> 45) & 255)) << 0);
        
    tgt_buffer[60] = static_cast<uint8_t>((((buffer[7] >> 53) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 61);
}
void ByteBasedBitPackingWriter_61bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[61];
    memset(tgt_buffer,0, 61);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 53) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 45) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 37) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 29) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 21) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 13) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 5) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 0) & 31)) << 3 | (((buffer[1] >> 58) & 7)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 50) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 42) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 34) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 26) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[1] >> 0) & 3)) << 6 | (((buffer[2] >> 55) & 63)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 47) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 39) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 31) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 23) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 15) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 7) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[2] >> 0) & 127)) << 1 | (((buffer[3] >> 60) & 1)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[3] >> 52) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 44) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 36) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 57) & 15)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 49) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 41) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 33) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 25) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 17) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 9) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[4] >> 1) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[4] >> 0) & 1)) << 7 | (((buffer[5] >> 54) & 127)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 46) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 38) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 30) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 22) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 14) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[5] >> 6) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[5] >> 0) & 63)) << 2 | (((buffer[6] >> 59) & 3)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[6] >> 51) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 43) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 35) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 27) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 19) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[6] >> 11) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[6] >> 3) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[6] >> 0) & 7)) << 5 | (((buffer[7] >> 56) & 31)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[7] >> 48) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[58] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[59] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[60] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 61);
}
void ByteBasedBitPackingWriter_62bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[62];
    memset(tgt_buffer,0, 62);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 56) & 63)) << 0 | (((buffer[1] >> 0) & 3)) << 6);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 2) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 10) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 18) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 26) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 34) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 42) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 50) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[1] >> 58) & 15)) << 0 | (((buffer[2] >> 0) & 15)) << 4);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 4) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 12) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 20) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 28) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 36) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 44) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[2] >> 52) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[2] >> 60) & 3)) << 0 | (((buffer[3] >> 0) & 63)) << 2);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 6) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 14) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 22) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 30) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 38) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[3] >> 46) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[3] >> 54) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 40) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[4] >> 48) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[4] >> 56) & 63)) << 0 | (((buffer[5] >> 0) & 3)) << 6);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 26) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 34) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[5] >> 42) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[5] >> 50) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[5] >> 58) & 15)) << 0 | (((buffer[6] >> 0) & 15)) << 4);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 4) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 12) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 20) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 28) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[6] >> 36) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[6] >> 44) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[6] >> 52) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[6] >> 60) & 3)) << 0 | (((buffer[7] >> 0) & 63)) << 2);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 6) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 14) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 22) & 255)) << 0);
        
    tgt_buffer[58] = static_cast<uint8_t>((((buffer[7] >> 30) & 255)) << 0);
        
    tgt_buffer[59] = static_cast<uint8_t>((((buffer[7] >> 38) & 255)) << 0);
        
    tgt_buffer[60] = static_cast<uint8_t>((((buffer[7] >> 46) & 255)) << 0);
        
    tgt_buffer[61] = static_cast<uint8_t>((((buffer[7] >> 54) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 62);
}
void ByteBasedBitPackingWriter_62bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[62];
    memset(tgt_buffer,0, 62);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 54) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 46) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 38) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 30) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 22) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 14) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 6) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 0) & 63)) << 2 | (((buffer[1] >> 60) & 3)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 52) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 44) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 36) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 28) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 20) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 12) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 4) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[1] >> 0) & 15)) << 4 | (((buffer[2] >> 58) & 15)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 50) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 42) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 34) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 26) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[2] >> 0) & 3)) << 6 | (((buffer[3] >> 56) & 63)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 48) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 40) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[4] >> 54) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 46) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 38) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 30) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 22) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 14) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[4] >> 6) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[4] >> 0) & 63)) << 2 | (((buffer[5] >> 60) & 3)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[5] >> 52) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 44) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 36) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 28) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 20) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[5] >> 12) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[5] >> 4) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[5] >> 0) & 15)) << 4 | (((buffer[6] >> 58) & 15)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[6] >> 50) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 42) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 34) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 26) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[6] >> 18) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[6] >> 10) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[6] >> 2) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[6] >> 0) & 3)) << 6 | (((buffer[7] >> 56) & 63)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[7] >> 48) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[58] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[59] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[60] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[61] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 62);
}
void ByteBasedBitPackingWriter_63bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[63];
    memset(tgt_buffer,0, 63);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 56) & 127)) << 0 | (((buffer[1] >> 0) & 1)) << 7);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 1) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 9) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 17) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 25) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 33) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 41) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 49) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[1] >> 57) & 63)) << 0 | (((buffer[2] >> 0) & 3)) << 6);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 2) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 10) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 18) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 26) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 34) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 42) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[2] >> 50) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[2] >> 58) & 31)) << 0 | (((buffer[3] >> 0) & 7)) << 5);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 3) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 11) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 19) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 27) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 35) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[3] >> 43) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[3] >> 51) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[3] >> 59) & 15)) << 0 | (((buffer[4] >> 0) & 15)) << 4);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 4) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 12) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 20) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 28) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 36) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[4] >> 44) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[4] >> 52) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[4] >> 60) & 7)) << 0 | (((buffer[5] >> 0) & 31)) << 3);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 5) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 13) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 21) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 29) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[5] >> 37) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[5] >> 45) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[5] >> 53) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[5] >> 61) & 3)) << 0 | (((buffer[6] >> 0) & 63)) << 2);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 6) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 14) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 22) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[6] >> 30) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[6] >> 38) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[6] >> 46) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[6] >> 54) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[6] >> 62) & 1)) << 0 | (((buffer[7] >> 0) & 127)) << 1);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 7) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 15) & 255)) << 0);
        
    tgt_buffer[58] = static_cast<uint8_t>((((buffer[7] >> 23) & 255)) << 0);
        
    tgt_buffer[59] = static_cast<uint8_t>((((buffer[7] >> 31) & 255)) << 0);
        
    tgt_buffer[60] = static_cast<uint8_t>((((buffer[7] >> 39) & 255)) << 0);
        
    tgt_buffer[61] = static_cast<uint8_t>((((buffer[7] >> 47) & 255)) << 0);
        
    tgt_buffer[62] = static_cast<uint8_t>((((buffer[7] >> 55) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 63);
}
void ByteBasedBitPackingWriter_63bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[63];
    memset(tgt_buffer,0, 63);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 55) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 47) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 39) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 31) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 23) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 15) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 7) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 0) & 127)) << 1 | (((buffer[1] >> 62) & 1)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 54) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 46) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 38) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 30) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 22) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 14) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 6) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[1] >> 0) & 63)) << 2 | (((buffer[2] >> 61) & 3)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 53) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 45) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 37) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 29) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 21) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 13) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[2] >> 5) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[2] >> 0) & 31)) << 3 | (((buffer[3] >> 60) & 7)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 52) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 44) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 36) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 28) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 20) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[3] >> 12) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[3] >> 4) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[3] >> 0) & 15)) << 4 | (((buffer[4] >> 59) & 15)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 51) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 43) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 35) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 27) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 19) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[4] >> 11) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[4] >> 3) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[4] >> 0) & 7)) << 5 | (((buffer[5] >> 58) & 31)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 50) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 42) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 34) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 26) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[5] >> 18) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[5] >> 10) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[5] >> 2) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[5] >> 0) & 3)) << 6 | (((buffer[6] >> 57) & 63)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 49) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 41) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 33) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[6] >> 25) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[6] >> 17) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[6] >> 9) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[6] >> 1) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[6] >> 0) & 1)) << 7 | (((buffer[7] >> 56) & 127)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 48) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[58] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[59] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[60] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[61] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[62] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 63);
}
void ByteBasedBitPackingWriter_64bit_LE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[64];
    memset(tgt_buffer,0, 64);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 48) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 56) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 32) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 40) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 48) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[1] >> 56) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 32) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 40) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[2] >> 48) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[2] >> 56) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[3] >> 40) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[3] >> 48) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[3] >> 56) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[4] >> 40) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[4] >> 48) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[4] >> 56) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[5] >> 32) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[5] >> 40) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[5] >> 48) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[5] >> 56) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[6] >> 32) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[6] >> 40) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[6] >> 48) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[6] >> 56) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[58] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[59] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[60] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[61] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[62] = static_cast<uint8_t>((((buffer[7] >> 48) & 255)) << 0);
        
    tgt_buffer[63] = static_cast<uint8_t>((((buffer[7] >> 56) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 64);
}
void ByteBasedBitPackingWriter_64bit_BE::flush_buffer(const uint64_t *buffer) {
    uint8_t tgt_buffer[64];
    memset(tgt_buffer,0, 64);

    
    tgt_buffer[0] = static_cast<uint8_t>((((buffer[0] >> 56) & 255)) << 0);
        
    tgt_buffer[1] = static_cast<uint8_t>((((buffer[0] >> 48) & 255)) << 0);
        
    tgt_buffer[2] = static_cast<uint8_t>((((buffer[0] >> 40) & 255)) << 0);
        
    tgt_buffer[3] = static_cast<uint8_t>((((buffer[0] >> 32) & 255)) << 0);
        
    tgt_buffer[4] = static_cast<uint8_t>((((buffer[0] >> 24) & 255)) << 0);
        
    tgt_buffer[5] = static_cast<uint8_t>((((buffer[0] >> 16) & 255)) << 0);
        
    tgt_buffer[6] = static_cast<uint8_t>((((buffer[0] >> 8) & 255)) << 0);
        
    tgt_buffer[7] = static_cast<uint8_t>((((buffer[0] >> 0) & 255)) << 0);
        
    tgt_buffer[8] = static_cast<uint8_t>((((buffer[1] >> 56) & 255)) << 0);
        
    tgt_buffer[9] = static_cast<uint8_t>((((buffer[1] >> 48) & 255)) << 0);
        
    tgt_buffer[10] = static_cast<uint8_t>((((buffer[1] >> 40) & 255)) << 0);
        
    tgt_buffer[11] = static_cast<uint8_t>((((buffer[1] >> 32) & 255)) << 0);
        
    tgt_buffer[12] = static_cast<uint8_t>((((buffer[1] >> 24) & 255)) << 0);
        
    tgt_buffer[13] = static_cast<uint8_t>((((buffer[1] >> 16) & 255)) << 0);
        
    tgt_buffer[14] = static_cast<uint8_t>((((buffer[1] >> 8) & 255)) << 0);
        
    tgt_buffer[15] = static_cast<uint8_t>((((buffer[1] >> 0) & 255)) << 0);
        
    tgt_buffer[16] = static_cast<uint8_t>((((buffer[2] >> 56) & 255)) << 0);
        
    tgt_buffer[17] = static_cast<uint8_t>((((buffer[2] >> 48) & 255)) << 0);
        
    tgt_buffer[18] = static_cast<uint8_t>((((buffer[2] >> 40) & 255)) << 0);
        
    tgt_buffer[19] = static_cast<uint8_t>((((buffer[2] >> 32) & 255)) << 0);
        
    tgt_buffer[20] = static_cast<uint8_t>((((buffer[2] >> 24) & 255)) << 0);
        
    tgt_buffer[21] = static_cast<uint8_t>((((buffer[2] >> 16) & 255)) << 0);
        
    tgt_buffer[22] = static_cast<uint8_t>((((buffer[2] >> 8) & 255)) << 0);
        
    tgt_buffer[23] = static_cast<uint8_t>((((buffer[2] >> 0) & 255)) << 0);
        
    tgt_buffer[24] = static_cast<uint8_t>((((buffer[3] >> 56) & 255)) << 0);
        
    tgt_buffer[25] = static_cast<uint8_t>((((buffer[3] >> 48) & 255)) << 0);
        
    tgt_buffer[26] = static_cast<uint8_t>((((buffer[3] >> 40) & 255)) << 0);
        
    tgt_buffer[27] = static_cast<uint8_t>((((buffer[3] >> 32) & 255)) << 0);
        
    tgt_buffer[28] = static_cast<uint8_t>((((buffer[3] >> 24) & 255)) << 0);
        
    tgt_buffer[29] = static_cast<uint8_t>((((buffer[3] >> 16) & 255)) << 0);
        
    tgt_buffer[30] = static_cast<uint8_t>((((buffer[3] >> 8) & 255)) << 0);
        
    tgt_buffer[31] = static_cast<uint8_t>((((buffer[3] >> 0) & 255)) << 0);
        
    tgt_buffer[32] = static_cast<uint8_t>((((buffer[4] >> 56) & 255)) << 0);
        
    tgt_buffer[33] = static_cast<uint8_t>((((buffer[4] >> 48) & 255)) << 0);
        
    tgt_buffer[34] = static_cast<uint8_t>((((buffer[4] >> 40) & 255)) << 0);
        
    tgt_buffer[35] = static_cast<uint8_t>((((buffer[4] >> 32) & 255)) << 0);
        
    tgt_buffer[36] = static_cast<uint8_t>((((buffer[4] >> 24) & 255)) << 0);
        
    tgt_buffer[37] = static_cast<uint8_t>((((buffer[4] >> 16) & 255)) << 0);
        
    tgt_buffer[38] = static_cast<uint8_t>((((buffer[4] >> 8) & 255)) << 0);
        
    tgt_buffer[39] = static_cast<uint8_t>((((buffer[4] >> 0) & 255)) << 0);
        
    tgt_buffer[40] = static_cast<uint8_t>((((buffer[5] >> 56) & 255)) << 0);
        
    tgt_buffer[41] = static_cast<uint8_t>((((buffer[5] >> 48) & 255)) << 0);
        
    tgt_buffer[42] = static_cast<uint8_t>((((buffer[5] >> 40) & 255)) << 0);
        
    tgt_buffer[43] = static_cast<uint8_t>((((buffer[5] >> 32) & 255)) << 0);
        
    tgt_buffer[44] = static_cast<uint8_t>((((buffer[5] >> 24) & 255)) << 0);
        
    tgt_buffer[45] = static_cast<uint8_t>((((buffer[5] >> 16) & 255)) << 0);
        
    tgt_buffer[46] = static_cast<uint8_t>((((buffer[5] >> 8) & 255)) << 0);
        
    tgt_buffer[47] = static_cast<uint8_t>((((buffer[5] >> 0) & 255)) << 0);
        
    tgt_buffer[48] = static_cast<uint8_t>((((buffer[6] >> 56) & 255)) << 0);
        
    tgt_buffer[49] = static_cast<uint8_t>((((buffer[6] >> 48) & 255)) << 0);
        
    tgt_buffer[50] = static_cast<uint8_t>((((buffer[6] >> 40) & 255)) << 0);
        
    tgt_buffer[51] = static_cast<uint8_t>((((buffer[6] >> 32) & 255)) << 0);
        
    tgt_buffer[52] = static_cast<uint8_t>((((buffer[6] >> 24) & 255)) << 0);
        
    tgt_buffer[53] = static_cast<uint8_t>((((buffer[6] >> 16) & 255)) << 0);
        
    tgt_buffer[54] = static_cast<uint8_t>((((buffer[6] >> 8) & 255)) << 0);
        
    tgt_buffer[55] = static_cast<uint8_t>((((buffer[6] >> 0) & 255)) << 0);
        
    tgt_buffer[56] = static_cast<uint8_t>((((buffer[7] >> 56) & 255)) << 0);
        
    tgt_buffer[57] = static_cast<uint8_t>((((buffer[7] >> 48) & 255)) << 0);
        
    tgt_buffer[58] = static_cast<uint8_t>((((buffer[7] >> 40) & 255)) << 0);
        
    tgt_buffer[59] = static_cast<uint8_t>((((buffer[7] >> 32) & 255)) << 0);
        
    tgt_buffer[60] = static_cast<uint8_t>((((buffer[7] >> 24) & 255)) << 0);
        
    tgt_buffer[61] = static_cast<uint8_t>((((buffer[7] >> 16) & 255)) << 0);
        
    tgt_buffer[62] = static_cast<uint8_t>((((buffer[7] >> 8) & 255)) << 0);
        
    tgt_buffer[63] = static_cast<uint8_t>((((buffer[7] >> 0) & 255)) << 0);
        
    get_os()->write(reinterpret_cast<char*>(tgt_buffer), 64);
}
}
}
    