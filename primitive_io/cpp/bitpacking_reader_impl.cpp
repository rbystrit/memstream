
#include <primitive_io/primitive_io.h>
#include <primitive_io/bitpacking_reader_impl.h>

namespace rbystrit {
namespace primitive_io{

    
void ByteBasedBitPackingReader_1bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[1];
    memset(src_buffer,0, 1);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 1);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 1)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 1) & 1)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[0]) >> 2) & 1)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[0]) >> 3) & 1)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[0]) >> 4) & 1)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[0]) >> 5) & 1)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[0]) >> 6) & 1)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[0]) >> 7) & 1)) << 0;
        
}
    
void ByteBasedBitPackingReader_1bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[1];
    memset(src_buffer,0, 1);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 1);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 7) & 1)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 6) & 1)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[0]) >> 5) & 1)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[0]) >> 4) & 1)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[0]) >> 3) & 1)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[0]) >> 2) & 1)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[0]) >> 1) & 1)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 1)) << 0;
        
}
    
void ByteBasedBitPackingReader_2bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[2];
    memset(src_buffer,0, 2);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 2);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 3)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 2) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[0]) >> 4) & 3)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[0]) >> 6) & 3)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 3)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[1]) >> 2) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[1]) >> 4) & 3)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[1]) >> 6) & 3)) << 0;
        
}
    
void ByteBasedBitPackingReader_2bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[2];
    memset(src_buffer,0, 2);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 2);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 6) & 3)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 4) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[0]) >> 2) & 3)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 3)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[1]) >> 6) & 3)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[1]) >> 4) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[1]) >> 2) & 3)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 3)) << 0;
        
}
    
void ByteBasedBitPackingReader_3bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[3];
    memset(src_buffer,0, 3);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 3);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 7)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 3) & 7)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[0]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 1)) << 2;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[1]) >> 1) & 7)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[1]) >> 4) & 7)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[1]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 3)) << 1;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[2]) >> 2) & 7)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[2]) >> 5) & 7)) << 0;
        
}
    
void ByteBasedBitPackingReader_3bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[3];
    memset(src_buffer,0, 3);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 3);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 5) & 7)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 2) & 7)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 3)) << 1 | (((static_cast<uint64_t>(src_buffer[1]) >> 7) & 1)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[1]) >> 4) & 7)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[1]) >> 1) & 7)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 1)) << 2 | (((static_cast<uint64_t>(src_buffer[2]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[2]) >> 3) & 7)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 7)) << 0;
        
}
    
void ByteBasedBitPackingReader_4bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[4];
    memset(src_buffer,0, 4);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 4);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 15)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 15)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[1]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 15)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[2]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 15)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[3]) >> 4) & 15)) << 0;
        
}
    
void ByteBasedBitPackingReader_4bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[4];
    memset(src_buffer,0, 4);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 4);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 4) & 15)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[1]) >> 4) & 15)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[2]) >> 4) & 15)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[3]) >> 4) & 15)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 15)) << 0;
        
}
    
void ByteBasedBitPackingReader_5bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[5];
    memset(src_buffer,0, 5);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 5);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 31)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 3)) << 3;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[1]) >> 2) & 31)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[1]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 15)) << 1;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[2]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 1)) << 4;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[3]) >> 1) & 31)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[3]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 7)) << 2;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[4]) >> 3) & 31)) << 0;
        
}
    
void ByteBasedBitPackingReader_5bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[5];
    memset(src_buffer,0, 5);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 5);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 3) & 31)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 7)) << 2 | (((static_cast<uint64_t>(src_buffer[1]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[1]) >> 1) & 31)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 1)) << 4 | (((static_cast<uint64_t>(src_buffer[2]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 15)) << 1 | (((static_cast<uint64_t>(src_buffer[3]) >> 7) & 1)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[3]) >> 2) & 31)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 3)) << 3 | (((static_cast<uint64_t>(src_buffer[4]) >> 5) & 7)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 31)) << 0;
        
}
    
void ByteBasedBitPackingReader_6bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[6];
    memset(src_buffer,0, 6);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 6);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 63)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 15)) << 2;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[1]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 3)) << 4;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[2]) >> 2) & 63)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 63)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[3]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 15)) << 2;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[4]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 3)) << 4;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[5]) >> 2) & 63)) << 0;
        
}
    
void ByteBasedBitPackingReader_6bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[6];
    memset(src_buffer,0, 6);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 6);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 2) & 63)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 3)) << 4 | (((static_cast<uint64_t>(src_buffer[1]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 15)) << 2 | (((static_cast<uint64_t>(src_buffer[2]) >> 6) & 3)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 63)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[3]) >> 2) & 63)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 3)) << 4 | (((static_cast<uint64_t>(src_buffer[4]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 15)) << 2 | (((static_cast<uint64_t>(src_buffer[5]) >> 6) & 3)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 63)) << 0;
        
}
    
void ByteBasedBitPackingReader_7bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[7];
    memset(src_buffer,0, 7);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 7);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 127)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 63)) << 1;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[1]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 31)) << 2;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[2]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 15)) << 3;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[3]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 7)) << 4;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[4]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 3)) << 5;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[5]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 1)) << 6;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[6]) >> 1) & 127)) << 0;
        
}
    
void ByteBasedBitPackingReader_7bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[7];
    memset(src_buffer,0, 7);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 7);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 1) & 127)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 1)) << 6 | (((static_cast<uint64_t>(src_buffer[1]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 3)) << 5 | (((static_cast<uint64_t>(src_buffer[2]) >> 3) & 31)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 7)) << 4 | (((static_cast<uint64_t>(src_buffer[3]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 15)) << 3 | (((static_cast<uint64_t>(src_buffer[4]) >> 5) & 7)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 31)) << 2 | (((static_cast<uint64_t>(src_buffer[5]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 63)) << 1 | (((static_cast<uint64_t>(src_buffer[6]) >> 7) & 1)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 127)) << 0;
        
}
    
void ByteBasedBitPackingReader_8bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[8];
    memset(src_buffer,0, 8);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 8);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_8bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[8];
    memset(src_buffer,0, 8);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 8);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_9bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[9];
    memset(src_buffer,0, 9);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 9);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 1)) << 8;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 3)) << 7;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[2]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 7)) << 6;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[3]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 15)) << 5;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[4]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 31)) << 4;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[5]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 63)) << 3;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[6]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 127)) << 2;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[7]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 1;
        
}
    
void ByteBasedBitPackingReader_9bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[9];
    memset(src_buffer,0, 9);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 9);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[1]) >> 7) & 1)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 127)) << 2 | (((static_cast<uint64_t>(src_buffer[2]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 63)) << 3 | (((static_cast<uint64_t>(src_buffer[3]) >> 5) & 7)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 31)) << 4 | (((static_cast<uint64_t>(src_buffer[4]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 15)) << 5 | (((static_cast<uint64_t>(src_buffer[5]) >> 3) & 31)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 7)) << 6 | (((static_cast<uint64_t>(src_buffer[6]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 3)) << 7 | (((static_cast<uint64_t>(src_buffer[7]) >> 1) & 127)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 1)) << 8 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_10bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[10];
    memset(src_buffer,0, 10);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 10);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 3)) << 8;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 15)) << 6;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[2]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 63)) << 4;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[3]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 2;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 3)) << 8;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[6]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 15)) << 6;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[7]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 63)) << 4;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[8]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 2;
        
}
    
void ByteBasedBitPackingReader_10bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[10];
    memset(src_buffer,0, 10);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 10);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[1]) >> 6) & 3)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 63)) << 4 | (((static_cast<uint64_t>(src_buffer[2]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 15)) << 6 | (((static_cast<uint64_t>(src_buffer[3]) >> 2) & 63)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 3)) << 8 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[6]) >> 6) & 3)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 63)) << 4 | (((static_cast<uint64_t>(src_buffer[7]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 15)) << 6 | (((static_cast<uint64_t>(src_buffer[8]) >> 2) & 63)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 3)) << 8 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_11bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[11];
    memset(src_buffer,0, 11);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 11);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 7)) << 8;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 63)) << 5;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[2]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 1)) << 10;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[4]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 15)) << 7;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[5]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 127)) << 4;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[6]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 3)) << 9;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[8]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 31)) << 6;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[9]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 3;
        
}
    
void ByteBasedBitPackingReader_11bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[11];
    memset(src_buffer,0, 11);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 11);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[1]) >> 5) & 7)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 31)) << 6 | (((static_cast<uint64_t>(src_buffer[2]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 3)) << 9 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[4]) >> 7) & 1)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 127)) << 4 | (((static_cast<uint64_t>(src_buffer[5]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 15)) << 7 | (((static_cast<uint64_t>(src_buffer[6]) >> 1) & 127)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 1)) << 10 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[8]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 63)) << 5 | (((static_cast<uint64_t>(src_buffer[9]) >> 3) & 31)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 7)) << 8 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_12bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[12];
    memset(src_buffer,0, 12);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 12);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 15)) << 8;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 4;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 15)) << 8;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[4]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 4;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 15)) << 8;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[7]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 4;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 15)) << 8;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[10]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 4;
        
}
    
void ByteBasedBitPackingReader_12bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[12];
    memset(src_buffer,0, 12);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 12);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[1]) >> 4) & 15)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 15)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[4]) >> 4) & 15)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 15)) << 8 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[7]) >> 4) & 15)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 15)) << 8 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[10]) >> 4) & 15)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 15)) << 8 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_13bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[13];
    memset(src_buffer,0, 13);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 13);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 31)) << 8;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 3)) << 11;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[3]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 127)) << 6;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[4]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 15)) << 9;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[6]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 1)) << 12;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[8]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 63)) << 7;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[9]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 7)) << 10;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[11]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 5;
        
}
    
void ByteBasedBitPackingReader_13bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[13];
    memset(src_buffer,0, 13);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 13);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[1]) >> 3) & 31)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 7)) << 10 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[3]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 63)) << 7 | (((static_cast<uint64_t>(src_buffer[4]) >> 1) & 127)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 1)) << 12 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[6]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 15)) << 9 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[8]) >> 7) & 1)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 127)) << 6 | (((static_cast<uint64_t>(src_buffer[9]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 3)) << 11 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[11]) >> 5) & 7)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 31)) << 8 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_14bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[14];
    memset(src_buffer,0, 14);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 14);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 63)) << 8;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 15)) << 10;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[3]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 3)) << 12;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[5]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 6;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 63)) << 8;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[8]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 15)) << 10;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[10]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 3)) << 12;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[12]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 6;
        
}
    
void ByteBasedBitPackingReader_14bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[14];
    memset(src_buffer,0, 14);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 14);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[1]) >> 2) & 63)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 3)) << 12 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[3]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 15)) << 10 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[5]) >> 6) & 3)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 63)) << 8 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[8]) >> 2) & 63)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 3)) << 12 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[10]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 15)) << 10 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[12]) >> 6) & 3)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 63)) << 8 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_15bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[15];
    memset(src_buffer,0, 15);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 15);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 127)) << 8;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 63)) << 9;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[3]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 31)) << 10;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[5]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 15)) << 11;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[7]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 7)) << 12;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[9]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 3)) << 13;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[11]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 1)) << 14;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[13]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 7;
        
}
    
void ByteBasedBitPackingReader_15bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[15];
    memset(src_buffer,0, 15);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 15);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[1]) >> 1) & 127)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 1)) << 14 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[3]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 3)) << 13 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[5]) >> 3) & 31)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 7)) << 12 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[7]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 15)) << 11 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[9]) >> 5) & 7)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 31)) << 10 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[11]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 63)) << 9 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[13]) >> 7) & 1)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 127)) << 8 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_16bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[16];
    memset(src_buffer,0, 16);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 16);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 8;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 8;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 8;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 8;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 8;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 8;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 8;
        
}
    
void ByteBasedBitPackingReader_16bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[16];
    memset(src_buffer,0, 16);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 16);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_17bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[17];
    memset(src_buffer,0, 17);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 17);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 1)) << 16;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 3)) << 15;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[4]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 7)) << 14;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[6]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 15)) << 13;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[8]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 31)) << 12;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[10]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 63)) << 11;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[12]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 127)) << 10;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[14]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 9;
        
}
    
void ByteBasedBitPackingReader_17bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[17];
    memset(src_buffer,0, 17);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 17);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[2]) >> 7) & 1)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 127)) << 10 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[4]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 63)) << 11 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[6]) >> 5) & 7)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 31)) << 12 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[8]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 15)) << 13 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[10]) >> 3) & 31)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 7)) << 14 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[12]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 3)) << 15 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[14]) >> 1) & 127)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 1)) << 16 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_18bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[18];
    memset(src_buffer,0, 18);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 18);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 3)) << 16;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 15)) << 14;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[4]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 63)) << 12;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[6]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 10;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 3)) << 16;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[11]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 15)) << 14;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[13]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 63)) << 12;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[15]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 10;
        
}
    
void ByteBasedBitPackingReader_18bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[18];
    memset(src_buffer,0, 18);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 18);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[2]) >> 6) & 3)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 63)) << 12 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[4]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 15)) << 14 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[6]) >> 2) & 63)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 3)) << 16 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[11]) >> 6) & 3)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 63)) << 12 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[13]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 15)) << 14 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[15]) >> 2) & 63)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 3)) << 16 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_19bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[19];
    memset(src_buffer,0, 19);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 19);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 7)) << 16;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 63)) << 13;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[4]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 1)) << 18;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[7]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 15)) << 15;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[9]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 127)) << 12;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[11]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 3)) << 17;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[14]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 31)) << 14;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[16]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 11;
        
}
    
void ByteBasedBitPackingReader_19bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[19];
    memset(src_buffer,0, 19);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 19);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[2]) >> 5) & 7)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 31)) << 14 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[4]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 3)) << 17 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[7]) >> 7) & 1)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 127)) << 12 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[9]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 15)) << 15 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[11]) >> 1) & 127)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 1)) << 18 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[14]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 63)) << 13 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[16]) >> 3) & 31)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 7)) << 16 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_20bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[20];
    memset(src_buffer,0, 20);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 20);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 15)) << 16;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 12;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 15)) << 16;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[7]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 12;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 15)) << 16;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[12]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 12;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 15)) << 16;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[17]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 12;
        
}
    
void ByteBasedBitPackingReader_20bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[20];
    memset(src_buffer,0, 20);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 20);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[2]) >> 4) & 15)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 15)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[7]) >> 4) & 15)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 15)) << 16 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[12]) >> 4) & 15)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 15)) << 16 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[17]) >> 4) & 15)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 15)) << 16 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_21bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[21];
    memset(src_buffer,0, 21);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 21);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 31)) << 16;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 3)) << 19;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[5]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 127)) << 14;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[7]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 15)) << 17;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[10]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 1)) << 20;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[13]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 63)) << 15;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[15]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 7)) << 18;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[18]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 13;
        
}
    
void ByteBasedBitPackingReader_21bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[21];
    memset(src_buffer,0, 21);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 21);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[2]) >> 3) & 31)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 7)) << 18 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[5]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 63)) << 15 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[7]) >> 1) & 127)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 1)) << 20 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[10]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 15)) << 17 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[13]) >> 7) & 1)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 127)) << 14 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[15]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 3)) << 19 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[18]) >> 5) & 7)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 31)) << 16 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_22bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[22];
    memset(src_buffer,0, 22);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 22);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 63)) << 16;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 15)) << 18;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[5]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 3)) << 20;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[8]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 14;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 63)) << 16;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[13]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 15)) << 18;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[16]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 3)) << 20;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[19]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 14;
        
}
    
void ByteBasedBitPackingReader_22bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[22];
    memset(src_buffer,0, 22);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 22);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[2]) >> 2) & 63)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 3)) << 20 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[5]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 15)) << 18 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[8]) >> 6) & 3)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 63)) << 16 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[13]) >> 2) & 63)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 3)) << 20 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[16]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 15)) << 18 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[19]) >> 6) & 3)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 63)) << 16 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_23bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[23];
    memset(src_buffer,0, 23);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 23);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 127)) << 16;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 63)) << 17;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[5]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 31)) << 18;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[8]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 15)) << 19;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[11]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 7)) << 20;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[14]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 3)) << 21;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[17]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 1)) << 22;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[20]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 15;
        
}
    
void ByteBasedBitPackingReader_23bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[23];
    memset(src_buffer,0, 23);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 23);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[2]) >> 1) & 127)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 1)) << 22 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[5]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 3)) << 21 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[8]) >> 3) & 31)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 7)) << 20 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[11]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 15)) << 19 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[14]) >> 5) & 7)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 31)) << 18 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[17]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 63)) << 17 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[20]) >> 7) & 1)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 127)) << 16 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_24bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[24];
    memset(src_buffer,0, 24);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 24);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 16;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 16;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 16;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 16;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 16;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 16;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 16;
        
}
    
void ByteBasedBitPackingReader_24bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[24];
    memset(src_buffer,0, 24);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 24);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_25bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[25];
    memset(src_buffer,0, 25);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 25);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 1)) << 24;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 3)) << 23;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[6]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 7)) << 22;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[9]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 15)) << 21;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[12]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 31)) << 20;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[15]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 63)) << 19;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[18]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 127)) << 18;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[21]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 17;
        
}
    
void ByteBasedBitPackingReader_25bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[25];
    memset(src_buffer,0, 25);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 25);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[3]) >> 7) & 1)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 127)) << 18 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[6]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 63)) << 19 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[9]) >> 5) & 7)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 31)) << 20 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[12]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 15)) << 21 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[15]) >> 3) & 31)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 7)) << 22 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[18]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 3)) << 23 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[21]) >> 1) & 127)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 1)) << 24 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_26bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[26];
    memset(src_buffer,0, 26);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 26);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 3)) << 24;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 15)) << 22;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[6]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 63)) << 20;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[9]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 18;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 3)) << 24;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[16]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 15)) << 22;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[19]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 63)) << 20;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[22]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 18;
        
}
    
void ByteBasedBitPackingReader_26bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[26];
    memset(src_buffer,0, 26);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 26);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[3]) >> 6) & 3)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 63)) << 20 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[6]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 15)) << 22 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[9]) >> 2) & 63)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 3)) << 24 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[16]) >> 6) & 3)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 63)) << 20 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[19]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 15)) << 22 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[22]) >> 2) & 63)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 3)) << 24 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_27bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[27];
    memset(src_buffer,0, 27);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 27);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 7)) << 24;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 63)) << 21;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[6]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 1)) << 26;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[10]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 15)) << 23;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[13]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 127)) << 20;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[16]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 3)) << 25;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[20]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 31)) << 22;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[23]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 19;
        
}
    
void ByteBasedBitPackingReader_27bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[27];
    memset(src_buffer,0, 27);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 27);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[3]) >> 5) & 7)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 31)) << 22 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[6]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 3)) << 25 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[10]) >> 7) & 1)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 127)) << 20 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[13]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 15)) << 23 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[16]) >> 1) & 127)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 1)) << 26 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[20]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 63)) << 21 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[23]) >> 3) & 31)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 7)) << 24 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_28bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[28];
    memset(src_buffer,0, 28);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 28);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 15)) << 24;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 20;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 15)) << 24;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[10]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 20;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 15)) << 24;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[17]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 20;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 15)) << 24;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[24]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 20;
        
}
    
void ByteBasedBitPackingReader_28bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[28];
    memset(src_buffer,0, 28);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 28);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[3]) >> 4) & 15)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 15)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[10]) >> 4) & 15)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 15)) << 24 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[17]) >> 4) & 15)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 15)) << 24 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[24]) >> 4) & 15)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 15)) << 24 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_29bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[29];
    memset(src_buffer,0, 29);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 29);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 31)) << 24;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 3)) << 27;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[7]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 127)) << 22;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[10]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 15)) << 25;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[14]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 1)) << 28;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[18]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 63)) << 23;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[21]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 7)) << 26;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[25]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 21;
        
}
    
void ByteBasedBitPackingReader_29bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[29];
    memset(src_buffer,0, 29);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 29);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[3]) >> 3) & 31)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 7)) << 26 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[7]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 63)) << 23 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[10]) >> 1) & 127)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 1)) << 28 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[14]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 15)) << 25 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[18]) >> 7) & 1)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 127)) << 22 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[21]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 3)) << 27 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[25]) >> 5) & 7)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 31)) << 24 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_30bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[30];
    memset(src_buffer,0, 30);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 30);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 63)) << 24;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 15)) << 26;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[7]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 3)) << 28;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[11]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 22;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 63)) << 24;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[18]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 15)) << 26;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[22]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 3)) << 28;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[26]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 22;
        
}
    
void ByteBasedBitPackingReader_30bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[30];
    memset(src_buffer,0, 30);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 30);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[3]) >> 2) & 63)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 3)) << 28 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[7]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 15)) << 26 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[11]) >> 6) & 3)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 63)) << 24 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[18]) >> 2) & 63)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 3)) << 28 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[22]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 15)) << 26 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[26]) >> 6) & 3)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 63)) << 24 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_31bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[31];
    memset(src_buffer,0, 31);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 31);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 127)) << 24;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 63)) << 25;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[7]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 31)) << 26;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[11]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 15)) << 27;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[15]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 7)) << 28;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[19]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 3)) << 29;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[23]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 1)) << 30;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[27]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 23;
        
}
    
void ByteBasedBitPackingReader_31bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[31];
    memset(src_buffer,0, 31);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 31);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[3]) >> 1) & 127)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 1)) << 30 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[7]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 3)) << 29 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[11]) >> 3) & 31)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 7)) << 28 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[15]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 15)) << 27 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[19]) >> 5) & 7)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 31)) << 26 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[23]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 63)) << 25 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[27]) >> 7) & 1)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 127)) << 24 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_32bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[32];
    memset(src_buffer,0, 32);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 32);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 24;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 24;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 24;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 24;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 24;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 24;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 24;
        
}
    
void ByteBasedBitPackingReader_32bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[32];
    memset(src_buffer,0, 32);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 32);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_33bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[33];
    memset(src_buffer,0, 33);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 33);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 1)) << 32;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 3)) << 31;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[8]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 7)) << 30;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[12]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 15)) << 29;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[16]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 31)) << 28;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[20]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 63)) << 27;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[24]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 127)) << 26;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[28]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 25;
        
}
    
void ByteBasedBitPackingReader_33bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[33];
    memset(src_buffer,0, 33);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 33);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[4]) >> 7) & 1)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 127)) << 26 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[8]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 63)) << 27 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[12]) >> 5) & 7)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 31)) << 28 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[16]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 15)) << 29 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[20]) >> 3) & 31)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 7)) << 30 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[24]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 3)) << 31 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[28]) >> 1) & 127)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 1)) << 32 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_34bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[34];
    memset(src_buffer,0, 34);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 34);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 3)) << 32;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 15)) << 30;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[8]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 63)) << 28;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[12]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 26;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 3)) << 32;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[21]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 15)) << 30;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[25]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 63)) << 28;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[29]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 26;
        
}
    
void ByteBasedBitPackingReader_34bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[34];
    memset(src_buffer,0, 34);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 34);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[4]) >> 6) & 3)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 63)) << 28 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[8]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 15)) << 30 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[12]) >> 2) & 63)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 3)) << 32 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[21]) >> 6) & 3)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 63)) << 28 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[25]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 15)) << 30 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[29]) >> 2) & 63)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 3)) << 32 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_35bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[35];
    memset(src_buffer,0, 35);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 35);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 7)) << 32;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 63)) << 29;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[8]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 1)) << 34;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[13]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 15)) << 31;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[17]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 127)) << 28;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[21]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 3)) << 33;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[26]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 31)) << 30;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[30]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 27;
        
}
    
void ByteBasedBitPackingReader_35bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[35];
    memset(src_buffer,0, 35);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 35);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[4]) >> 5) & 7)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 31)) << 30 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[8]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 3)) << 33 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[13]) >> 7) & 1)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 127)) << 28 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[17]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 15)) << 31 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[21]) >> 1) & 127)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 1)) << 34 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[26]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 63)) << 29 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[30]) >> 3) & 31)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 7)) << 32 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_36bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[36];
    memset(src_buffer,0, 36);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 36);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 15)) << 32;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 28;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 15)) << 32;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[13]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 28;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 15)) << 32;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[22]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 28;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 15)) << 32;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[31]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 28;
        
}
    
void ByteBasedBitPackingReader_36bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[36];
    memset(src_buffer,0, 36);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 36);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[4]) >> 4) & 15)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 15)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[13]) >> 4) & 15)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 15)) << 32 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[22]) >> 4) & 15)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 15)) << 32 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[31]) >> 4) & 15)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 15)) << 32 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_37bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[37];
    memset(src_buffer,0, 37);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 37);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 31)) << 32;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 3)) << 35;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[9]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 127)) << 30;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[13]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 15)) << 33;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[18]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 1)) << 36;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[23]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 63)) << 31;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[27]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 7)) << 34;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[32]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 29;
        
}
    
void ByteBasedBitPackingReader_37bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[37];
    memset(src_buffer,0, 37);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 37);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[4]) >> 3) & 31)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 7)) << 34 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[9]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 63)) << 31 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[13]) >> 1) & 127)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 1)) << 36 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[18]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 15)) << 33 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[23]) >> 7) & 1)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 127)) << 30 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[27]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 3)) << 35 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[32]) >> 5) & 7)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 31)) << 32 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_38bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[38];
    memset(src_buffer,0, 38);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 38);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 63)) << 32;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 15)) << 34;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[9]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 3)) << 36;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[14]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 30;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 63)) << 32;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[23]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 15)) << 34;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[28]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 3)) << 36;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[33]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 30;
        
}
    
void ByteBasedBitPackingReader_38bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[38];
    memset(src_buffer,0, 38);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 38);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[4]) >> 2) & 63)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 3)) << 36 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[9]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 15)) << 34 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[14]) >> 6) & 3)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 63)) << 32 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[23]) >> 2) & 63)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 3)) << 36 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[28]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 15)) << 34 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[33]) >> 6) & 3)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 63)) << 32 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_39bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[39];
    memset(src_buffer,0, 39);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 39);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 127)) << 32;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 63)) << 33;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[9]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 31)) << 34;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[14]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 15)) << 35;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[19]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 7)) << 36;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[24]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 3)) << 37;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[29]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 1)) << 38;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[34]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 31;
        
}
    
void ByteBasedBitPackingReader_39bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[39];
    memset(src_buffer,0, 39);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 39);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[4]) >> 1) & 127)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 1)) << 38 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[9]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 3)) << 37 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[14]) >> 3) & 31)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 7)) << 36 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[19]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 15)) << 35 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[24]) >> 5) & 7)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 31)) << 34 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[29]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 63)) << 33 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[34]) >> 7) & 1)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 127)) << 32 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_40bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[40];
    memset(src_buffer,0, 40);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 40);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 32;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 32;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 32;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 32;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 32;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 32;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 32;
        
}
    
void ByteBasedBitPackingReader_40bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[40];
    memset(src_buffer,0, 40);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 40);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_41bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[41];
    memset(src_buffer,0, 41);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 41);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 1)) << 40;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 3)) << 39;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[10]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 7)) << 38;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[15]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 15)) << 37;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[20]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 31)) << 36;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[25]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 63)) << 35;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[30]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 127)) << 34;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[35]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 33;
        
}
    
void ByteBasedBitPackingReader_41bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[41];
    memset(src_buffer,0, 41);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 41);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[5]) >> 7) & 1)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 127)) << 34 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[10]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 63)) << 35 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[15]) >> 5) & 7)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 31)) << 36 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[20]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 15)) << 37 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[25]) >> 3) & 31)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 7)) << 38 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[30]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 3)) << 39 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[35]) >> 1) & 127)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 1)) << 40 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_42bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[42];
    memset(src_buffer,0, 42);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 42);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 3)) << 40;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 15)) << 38;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[10]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 63)) << 36;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[15]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 34;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 3)) << 40;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[26]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 15)) << 38;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[31]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 63)) << 36;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[36]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 34;
        
}
    
void ByteBasedBitPackingReader_42bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[42];
    memset(src_buffer,0, 42);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 42);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[5]) >> 6) & 3)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 63)) << 36 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[10]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 15)) << 38 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[15]) >> 2) & 63)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 3)) << 40 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[26]) >> 6) & 3)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 63)) << 36 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[31]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 15)) << 38 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[36]) >> 2) & 63)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 3)) << 40 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_43bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[43];
    memset(src_buffer,0, 43);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 43);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 7)) << 40;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 63)) << 37;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[10]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 1)) << 42;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[16]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 15)) << 39;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[21]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 127)) << 36;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[26]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 3)) << 41;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[32]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 31)) << 38;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[37]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 35;
        
}
    
void ByteBasedBitPackingReader_43bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[43];
    memset(src_buffer,0, 43);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 43);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[5]) >> 5) & 7)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 31)) << 38 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[10]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 3)) << 41 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[16]) >> 7) & 1)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 127)) << 36 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[21]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 15)) << 39 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[26]) >> 1) & 127)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 1)) << 42 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[32]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 63)) << 37 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[37]) >> 3) & 31)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 7)) << 40 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_44bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[44];
    memset(src_buffer,0, 44);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 44);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 15)) << 40;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 36;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 15)) << 40;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[16]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 36;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 15)) << 40;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[27]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 36;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 15)) << 40;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[38]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 36;
        
}
    
void ByteBasedBitPackingReader_44bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[44];
    memset(src_buffer,0, 44);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 44);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[5]) >> 4) & 15)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 15)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[16]) >> 4) & 15)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 15)) << 40 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[27]) >> 4) & 15)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 15)) << 40 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[38]) >> 4) & 15)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 15)) << 40 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_45bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[45];
    memset(src_buffer,0, 45);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 45);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 31)) << 40;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 3)) << 43;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[11]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 127)) << 38;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[16]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 15)) << 41;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[22]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 1)) << 44;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[28]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 63)) << 39;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[33]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 7)) << 42;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[39]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 37;
        
}
    
void ByteBasedBitPackingReader_45bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[45];
    memset(src_buffer,0, 45);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 45);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[5]) >> 3) & 31)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 7)) << 42 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[11]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 63)) << 39 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[16]) >> 1) & 127)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 1)) << 44 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[22]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 15)) << 41 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[28]) >> 7) & 1)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 127)) << 38 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[33]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 3)) << 43 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[39]) >> 5) & 7)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 31)) << 40 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_46bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[46];
    memset(src_buffer,0, 46);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 46);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 63)) << 40;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 15)) << 42;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[11]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 3)) << 44;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[17]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 38;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 63)) << 40;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[28]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 15)) << 42;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[34]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 3)) << 44;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[40]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 38;
        
}
    
void ByteBasedBitPackingReader_46bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[46];
    memset(src_buffer,0, 46);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 46);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[5]) >> 2) & 63)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 3)) << 44 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[11]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 15)) << 42 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[17]) >> 6) & 3)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 63)) << 40 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[28]) >> 2) & 63)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 3)) << 44 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[34]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 15)) << 42 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[40]) >> 6) & 3)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 63)) << 40 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_47bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[47];
    memset(src_buffer,0, 47);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 47);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 127)) << 40;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 63)) << 41;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[11]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 31)) << 42;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[17]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 15)) << 43;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[23]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 7)) << 44;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[29]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 3)) << 45;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[35]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 1)) << 46;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[41]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 39;
        
}
    
void ByteBasedBitPackingReader_47bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[47];
    memset(src_buffer,0, 47);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 47);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[5]) >> 1) & 127)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 1)) << 46 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[11]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 3)) << 45 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[17]) >> 3) & 31)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 7)) << 44 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[23]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 15)) << 43 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[29]) >> 5) & 7)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 31)) << 42 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[35]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 63)) << 41 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[41]) >> 7) & 1)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 127)) << 40 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_48bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[48];
    memset(src_buffer,0, 48);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 48);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 40;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 40;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 40;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 40;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 40;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 40;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 40;
        
}
    
void ByteBasedBitPackingReader_48bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[48];
    memset(src_buffer,0, 48);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 48);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_49bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[49];
    memset(src_buffer,0, 49);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 49);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 1)) << 48;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 3)) << 47;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[12]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 7)) << 46;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[18]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 15)) << 45;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[24]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 31)) << 44;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[30]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 63)) << 43;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[36]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 127)) << 42;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[42]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 41;
        
}
    
void ByteBasedBitPackingReader_49bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[49];
    memset(src_buffer,0, 49);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 49);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[6]) >> 7) & 1)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 127)) << 42 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[12]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 63)) << 43 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[18]) >> 5) & 7)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 31)) << 44 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[24]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 15)) << 45 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[30]) >> 3) & 31)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 7)) << 46 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[36]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 3)) << 47 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[42]) >> 1) & 127)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 1)) << 48 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_50bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[50];
    memset(src_buffer,0, 50);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 50);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 3)) << 48;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 15)) << 46;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[12]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 63)) << 44;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[18]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 42;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 3)) << 48;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[31]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 15)) << 46;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[37]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 63)) << 44;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[43]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 42;
        
}
    
void ByteBasedBitPackingReader_50bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[50];
    memset(src_buffer,0, 50);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 50);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[6]) >> 6) & 3)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 63)) << 44 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[12]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 15)) << 46 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[18]) >> 2) & 63)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 3)) << 48 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[31]) >> 6) & 3)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 63)) << 44 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[37]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 15)) << 46 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[43]) >> 2) & 63)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 3)) << 48 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_51bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[51];
    memset(src_buffer,0, 51);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 51);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 7)) << 48;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 63)) << 45;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[12]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 1)) << 50;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[19]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 15)) << 47;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[25]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 127)) << 44;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[31]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 3)) << 49;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[38]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 31)) << 46;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[44]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 43;
        
}
    
void ByteBasedBitPackingReader_51bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[51];
    memset(src_buffer,0, 51);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 51);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 43 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[6]) >> 5) & 7)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 31)) << 46 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[12]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 3)) << 49 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[19]) >> 7) & 1)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 127)) << 44 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[25]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 15)) << 47 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[31]) >> 1) & 127)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 1)) << 50 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[38]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 63)) << 45 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[44]) >> 3) & 31)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 7)) << 48 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_52bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[52];
    memset(src_buffer,0, 52);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 52);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 15)) << 48;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 44;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 15)) << 48;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[19]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 44;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 15)) << 48;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[32]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 44;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 15)) << 48;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[45]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 44;
        
}
    
void ByteBasedBitPackingReader_52bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[52];
    memset(src_buffer,0, 52);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 52);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[6]) >> 4) & 15)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 15)) << 48 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[19]) >> 4) & 15)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 15)) << 48 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[32]) >> 4) & 15)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 15)) << 48 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[45]) >> 4) & 15)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 15)) << 48 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_53bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[53];
    memset(src_buffer,0, 53);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 53);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 31)) << 48;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 43 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 3)) << 51;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[13]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 127)) << 46;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[19]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 15)) << 49;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[26]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 1)) << 52;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[33]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 63)) << 47;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[39]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 7)) << 50;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[46]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 45;
        
}
    
void ByteBasedBitPackingReader_53bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[53];
    memset(src_buffer,0, 53);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 53);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 45 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[6]) >> 3) & 31)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 7)) << 50 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[13]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 63)) << 47 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[19]) >> 1) & 127)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 1)) << 52 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[26]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 15)) << 49 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[33]) >> 7) & 1)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 127)) << 46 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[39]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 3)) << 51 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 43 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[46]) >> 5) & 7)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 31)) << 48 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_54bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[54];
    memset(src_buffer,0, 54);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 54);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 63)) << 48;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 15)) << 50;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[13]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 3)) << 52;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[20]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 46;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 63)) << 48;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[33]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 15)) << 50;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[40]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 3)) << 52;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[47]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 46;
        
}
    
void ByteBasedBitPackingReader_54bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[54];
    memset(src_buffer,0, 54);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 54);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[6]) >> 2) & 63)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 3)) << 52 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[13]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 15)) << 50 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[20]) >> 6) & 3)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 63)) << 48 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[33]) >> 2) & 63)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 3)) << 52 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[40]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 15)) << 50 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[47]) >> 6) & 3)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 63)) << 48 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_55bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[55];
    memset(src_buffer,0, 55);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 55);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 127)) << 48;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 63)) << 49;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[13]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 31)) << 50;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[20]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 43 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 15)) << 51;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[27]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 7)) << 52;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[34]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 45 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 3)) << 53;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[41]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 1)) << 54;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[48]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 47;
        
}
    
void ByteBasedBitPackingReader_55bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[55];
    memset(src_buffer,0, 55);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 55);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 47 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[6]) >> 1) & 127)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 1)) << 54 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[13]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 3)) << 53 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 45 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[20]) >> 3) & 31)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 7)) << 52 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[27]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 15)) << 51 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 43 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[34]) >> 5) & 7)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 31)) << 50 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[41]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 63)) << 49 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[48]) >> 7) & 1)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 127)) << 48 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_56bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[56];
    memset(src_buffer,0, 56);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 56);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 48;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 48;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 48;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 48;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 48;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 48;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 48;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 48;
        
}
    
void ByteBasedBitPackingReader_56bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[56];
    memset(src_buffer,0, 56);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 56);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_57bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[57];
    memset(src_buffer,0, 57);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 57);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 1)) << 56;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 47 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 3)) << 55;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[14]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 7)) << 54;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[21]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 45 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 15)) << 53;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[28]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 31)) << 52;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[35]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 43 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 63)) << 51;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[42]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 127)) << 50;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[49]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 49;
        
}
    
void ByteBasedBitPackingReader_57bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[57];
    memset(src_buffer,0, 57);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 57);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 49 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[7]) >> 7) & 1)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 127)) << 50 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[14]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 63)) << 51 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 43 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[21]) >> 5) & 7)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 31)) << 52 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[28]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 15)) << 53 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 45 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[35]) >> 3) & 31)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 7)) << 54 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[42]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 3)) << 55 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 47 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[49]) >> 1) & 127)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 1)) << 56 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_58bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[58];
    memset(src_buffer,0, 58);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 58);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 3)) << 56;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 15)) << 54;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[14]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 63)) << 52;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[21]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 50;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 3)) << 56;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[36]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 15)) << 54;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[43]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 63)) << 52;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[50]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 50;
        
}
    
void ByteBasedBitPackingReader_58bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[58];
    memset(src_buffer,0, 58);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 58);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 50 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[7]) >> 6) & 3)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 63)) << 52 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[14]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 15)) << 54 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[21]) >> 2) & 63)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 3)) << 56 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 50 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[36]) >> 6) & 3)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 63)) << 52 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[43]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 15)) << 54 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[50]) >> 2) & 63)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 3)) << 56 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_59bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[59];
    memset(src_buffer,0, 59);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 59);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 7)) << 56;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 45 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 63)) << 53;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[14]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 50 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 1)) << 58;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[22]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 47 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 15)) << 55;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[29]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 127)) << 52;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[36]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 49 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 3)) << 57;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[44]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 31)) << 54;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[51]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 43 | (((static_cast<uint64_t>(src_buffer[58]) >> 0) & 255)) << 51;
        
}
    
void ByteBasedBitPackingReader_59bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[59];
    memset(src_buffer,0, 59);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 59);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 51 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 43 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[7]) >> 5) & 7)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 31)) << 54 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[14]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 3)) << 57 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 49 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[22]) >> 7) & 1)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 127)) << 52 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[29]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 15)) << 55 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 47 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[36]) >> 1) & 127)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 1)) << 58 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 50 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[44]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 63)) << 53 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 45 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[51]) >> 3) & 31)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 7)) << 56 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[58]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_60bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[60];
    memset(src_buffer,0, 60);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 60);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 15)) << 56;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 52;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 15)) << 56;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[22]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 52;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 15)) << 56;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[37]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 52;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 15)) << 56;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[52]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[58]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[59]) >> 0) & 255)) << 52;
        
}
    
void ByteBasedBitPackingReader_60bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[60];
    memset(src_buffer,0, 60);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 60);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 52 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[7]) >> 4) & 15)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 15)) << 56 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 52 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[22]) >> 4) & 15)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 15)) << 56 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 52 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[37]) >> 4) & 15)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 15)) << 56 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 52 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[52]) >> 4) & 15)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 15)) << 56 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[58]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[59]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_61bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[61];
    memset(src_buffer,0, 61);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 61);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 31)) << 56;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 43 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 51 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 3)) << 59;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[15]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 127)) << 54;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[22]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 49 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 15)) << 57;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[30]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 52 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 1)) << 60;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[38]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 47 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 63)) << 55;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[45]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 50 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 7)) << 58;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[53]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[58]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[59]) >> 0) & 255)) << 45 | (((static_cast<uint64_t>(src_buffer[60]) >> 0) & 255)) << 53;
        
}
    
void ByteBasedBitPackingReader_61bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[61];
    memset(src_buffer,0, 61);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 61);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 53 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 45 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[7]) >> 3) & 31)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 7)) << 58 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 50 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[15]) >> 6) & 3)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 63)) << 55 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 47 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[22]) >> 1) & 127)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 1)) << 60 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 52 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[30]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 15)) << 57 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 49 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[38]) >> 7) & 1)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 127)) << 54 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[45]) >> 2) & 63)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 3)) << 59 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 51 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 43 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[53]) >> 5) & 7)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 31)) << 56 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[58]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[59]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[60]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_62bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[62];
    memset(src_buffer,0, 62);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 62);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 63)) << 56;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 50 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 15)) << 58;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[15]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 52 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 3)) << 60;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[23]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 54;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 63)) << 56;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[38]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 50 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 15)) << 58;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[46]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 52 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 3)) << 60;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[54]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[58]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[59]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[60]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[61]) >> 0) & 255)) << 54;
        
}
    
void ByteBasedBitPackingReader_62bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[62];
    memset(src_buffer,0, 62);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 62);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 54 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[7]) >> 2) & 63)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 3)) << 60 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 52 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[15]) >> 4) & 15)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 15)) << 58 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 50 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[23]) >> 6) & 3)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 63)) << 56 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 54 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[38]) >> 2) & 63)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 3)) << 60 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 52 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[46]) >> 4) & 15)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 15)) << 58 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 50 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[54]) >> 6) & 3)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 63)) << 56 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[58]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[59]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[60]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[61]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_63bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[63];
    memset(src_buffer,0, 63);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 63);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 127)) << 56;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 7) & 1)) << 0 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 49 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 63)) << 57;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[15]) >> 6) & 3)) << 0 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 50 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 31)) << 58;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[23]) >> 5) & 7)) << 0 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 43 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 51 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 15)) << 59;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[31]) >> 4) & 15)) << 0 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 52 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 7)) << 60;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[39]) >> 3) & 31)) << 0 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 45 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 53 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 3)) << 61;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[47]) >> 2) & 63)) << 0 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 54 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 1)) << 62;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[55]) >> 1) & 127)) << 0 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[58]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[59]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[60]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[61]) >> 0) & 255)) << 47 | (((static_cast<uint64_t>(src_buffer[62]) >> 0) & 255)) << 55;
        
}
    
void ByteBasedBitPackingReader_63bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[63];
    memset(src_buffer,0, 63);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 63);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 55 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 47 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 39 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 31 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 23 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 15 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 7 | (((static_cast<uint64_t>(src_buffer[7]) >> 1) & 127)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 1)) << 62 | (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 54 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 46 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 38 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 30 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 22 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 14 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 6 | (((static_cast<uint64_t>(src_buffer[15]) >> 2) & 63)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 3)) << 61 | (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 53 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 45 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 37 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 29 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 21 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 13 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 5 | (((static_cast<uint64_t>(src_buffer[23]) >> 3) & 31)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 7)) << 60 | (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 52 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 44 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 36 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 28 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 20 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 12 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 4 | (((static_cast<uint64_t>(src_buffer[31]) >> 4) & 15)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 15)) << 59 | (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 51 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 43 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 35 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 27 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 19 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 11 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 3 | (((static_cast<uint64_t>(src_buffer[39]) >> 5) & 7)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 31)) << 58 | (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 50 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 42 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 34 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 26 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 18 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 10 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 2 | (((static_cast<uint64_t>(src_buffer[47]) >> 6) & 3)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 63)) << 57 | (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 49 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 41 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 33 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 25 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 17 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 9 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 1 | (((static_cast<uint64_t>(src_buffer[55]) >> 7) & 1)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 127)) << 56 | (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[58]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[59]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[60]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[61]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[62]) >> 0) & 255)) << 0;
        
}
    
void ByteBasedBitPackingReader_64bit_LE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[64];
    memset(src_buffer,0, 64);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 64);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 56;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 56;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 56;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 56;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 56;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 56;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 56;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 0 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[58]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[59]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[60]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[61]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[62]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[63]) >> 0) & 255)) << 56;
        
}
    
void ByteBasedBitPackingReader_64bit_BE::hydrate_buffer_core(uint64_t *buffer) {

    uint8_t src_buffer[64];
    memset(src_buffer,0, 64);

    get_is()->read(reinterpret_cast<char*>(src_buffer), 64);
    
    buffer[0] = (((static_cast<uint64_t>(src_buffer[0]) >> 0) & 255)) << 56 | (((static_cast<uint64_t>(src_buffer[1]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[2]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[3]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[4]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[5]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[6]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[7]) >> 0) & 255)) << 0;
        
    buffer[1] = (((static_cast<uint64_t>(src_buffer[8]) >> 0) & 255)) << 56 | (((static_cast<uint64_t>(src_buffer[9]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[10]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[11]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[12]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[13]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[14]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[15]) >> 0) & 255)) << 0;
        
    buffer[2] = (((static_cast<uint64_t>(src_buffer[16]) >> 0) & 255)) << 56 | (((static_cast<uint64_t>(src_buffer[17]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[18]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[19]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[20]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[21]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[22]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[23]) >> 0) & 255)) << 0;
        
    buffer[3] = (((static_cast<uint64_t>(src_buffer[24]) >> 0) & 255)) << 56 | (((static_cast<uint64_t>(src_buffer[25]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[26]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[27]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[28]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[29]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[30]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[31]) >> 0) & 255)) << 0;
        
    buffer[4] = (((static_cast<uint64_t>(src_buffer[32]) >> 0) & 255)) << 56 | (((static_cast<uint64_t>(src_buffer[33]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[34]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[35]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[36]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[37]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[38]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[39]) >> 0) & 255)) << 0;
        
    buffer[5] = (((static_cast<uint64_t>(src_buffer[40]) >> 0) & 255)) << 56 | (((static_cast<uint64_t>(src_buffer[41]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[42]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[43]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[44]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[45]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[46]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[47]) >> 0) & 255)) << 0;
        
    buffer[6] = (((static_cast<uint64_t>(src_buffer[48]) >> 0) & 255)) << 56 | (((static_cast<uint64_t>(src_buffer[49]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[50]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[51]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[52]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[53]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[54]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[55]) >> 0) & 255)) << 0;
        
    buffer[7] = (((static_cast<uint64_t>(src_buffer[56]) >> 0) & 255)) << 56 | (((static_cast<uint64_t>(src_buffer[57]) >> 0) & 255)) << 48 | (((static_cast<uint64_t>(src_buffer[58]) >> 0) & 255)) << 40 | (((static_cast<uint64_t>(src_buffer[59]) >> 0) & 255)) << 32 | (((static_cast<uint64_t>(src_buffer[60]) >> 0) & 255)) << 24 | (((static_cast<uint64_t>(src_buffer[61]) >> 0) & 255)) << 16 | (((static_cast<uint64_t>(src_buffer[62]) >> 0) & 255)) << 8 | (((static_cast<uint64_t>(src_buffer[63]) >> 0) & 255)) << 0;
        
}
    
}
}
    