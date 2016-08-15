//
// Created by rbyst on 8/14/2016.
//

#ifndef MEMUTILS_PRIMITIVE_READER_H
#define MEMUTILS_PRIMITIVE_READER_H

#include <memory>
#include <istream>

#include <primitive_io/primitive_reader_base.h>

using namespace std;

namespace rbystrit {
namespace primitive_io {

class PrimitiveReader : public PrimitiveReaderBase {
public:

    PrimitiveReader(shared_ptr<istream> is) : PrimitiveReaderBase(is) {}

    PrimitiveReader(const PrimitiveReader &other) : PrimitiveReaderBase(other) {}

    PrimitiveReader(PrimitiveReader &&other) : PrimitiveReaderBase(other) {}

    PrimitiveReader &operator=(const PrimitiveReader &other) {
        PrimitiveReaderBase::operator=(other);
        return *this;
    }

    PrimitiveReader operator=(PrimitiveReader &&other) {
        PrimitiveReaderBase::operator=(other);
        return *this;
    }


    virtual int8_t read_int8_t() override {
        return static_cast<int8_t>(get_is()->get());
    }

    virtual uint8_t read_uint8_t() override {
        return static_cast<uint8_t>(get_is()->get());
    }

    virtual void read_int8_t(int8_t *dest, int count) override {
        get_is()->read(reinterpret_cast<char*>(dest), count*sizeof(int8_t));
    }

    virtual void read_uint8_t(uint8_t* dest, int count) override {
        get_is()->read(reinterpret_cast<char*>(dest), count*sizeof(uint8_t));
    }

    virtual int16_t read_int16_t() override {
        int16_t result;
        get_is()->read(reinterpret_cast<char*>(&result), sizeof(int16_t));
        return result;
    }

    virtual uint16_t read_uint16_t() override {
        uint16_t result;
        get_is()->read(reinterpret_cast<char*>(&result), sizeof(uint16_t));
        return result;
    }

    virtual void read_int16_t(int16_t *dest, int count) override {
        get_is()->read(reinterpret_cast<char*>(dest), count*sizeof(int16_t));
    }

    virtual void read_uint16_t(uint16_t* dest, int count) override {
        get_is()->read(reinterpret_cast<char*>(dest), count*sizeof(uint16_t));
    }

    virtual int32_t read_int32_t() override {
        int32_t result;
        get_is()->read(reinterpret_cast<char*>(&result), sizeof(int32_t));
        return result;
    }

    virtual uint32_t read_uint32_t() override {
        uint32_t result;
        get_is()->read(reinterpret_cast<char*>(&result), sizeof(uint32_t));
        return result;
    }

    virtual void read_int32_t(int32_t *dest, int count) override {
        get_is()->read(reinterpret_cast<char*>(dest), count*sizeof(int32_t));
    }

    virtual void read_uint32_t(uint32_t* dest, int count) override {
        get_is()->read(reinterpret_cast<char*>(dest), count*sizeof(uint32_t));
    }

    virtual int64_t read_int64_t() override {
        int64_t result;
        get_is()->read(reinterpret_cast<char*>(&result), sizeof(int64_t));
        return result;
    }

    virtual uint64_t read_uint64_t() override {
        uint64_t result;
        get_is()->read(reinterpret_cast<char*>(&result), sizeof(uint64_t));
        return result;
    }

    virtual void read_int64_t(int64_t *dest, int count) override {
        get_is()->read(reinterpret_cast<char*>(dest), count*sizeof(int64_t));
    }

    virtual void read_uint64_t(uint64_t* dest, int count) override {
        get_is()->read(reinterpret_cast<char*>(dest), count*sizeof(uint64_t));
    }

    virtual double read_double_t() override {
        double result;
        get_is()->read(reinterpret_cast<char*>(&result), sizeof(double));
        return result;
    }

    virtual void read_double_t(double *dest, int count) override {
        get_is()->read(reinterpret_cast<char*>(dest), count*sizeof(double));
    }

    virtual float read_float_t() override {
        float result;
        get_is()->read(reinterpret_cast<char*>(&result), sizeof(float));
        return result;
    }

    virtual void read_float_t(float* dest, int count) override {
        get_is()->read(reinterpret_cast<char*>(dest), count*sizeof(float));
    }

    virtual void read(void *value, int nbytes) override {
        get_is()->read(static_cast<char *>(value), nbytes);
    }

};

}
}

#endif //MEMUTILS_PRIMITIVE_READER_H
