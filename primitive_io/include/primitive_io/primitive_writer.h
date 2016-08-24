//
// Created by rbyst on 8/14/2016.
//

#ifndef PRIMITIVE_IO_PRIMITIVE_IO_PRIMITIVE_WRITER_H
#define PRIMITIVE_IO_PRIMITIVE_IO_PRIMITIVE_WRITER_H

#include <memory>
#include <ostream>
#include <primitive_io/primitive_writer_base.h>

using namespace std;

namespace rbystrit {
namespace primitive_io {

class PrimitiveWriter : public PrimitiveWriterBase {
public:
    PrimitiveWriter(shared_ptr<ostream> os) : PrimitiveWriterBase(os) {}

    PrimitiveWriter(const PrimitiveWriter &other) : PrimitiveWriterBase(other) {}

    PrimitiveWriter(PrimitiveWriter &&other) : PrimitiveWriterBase(other) {}

    PrimitiveWriter &operator=(const PrimitiveWriter &other) {
        PrimitiveWriterBase::operator=(other);
        return *this;
    }

    PrimitiveWriter operator=(PrimitiveWriter &&other) {
        PrimitiveWriterBase::operator=(other);
        return *this;
    }


    virtual void write_int8_t(int8_t value) override {
        get_os()->put(static_cast<char>(value));
    }

    virtual void write_uint8_t(uint8_t value) override {
        get_os()->put(static_cast<char>(value));
    }

    virtual void write_int8_t(int8_t *value, int count) override {
        get_os()->write(reinterpret_cast<char*>(value), count * sizeof(int8_t));
    }

    virtual void write_uint8_t(uint8_t *value, int count) override {
        get_os()->write(reinterpret_cast<char*>(value), count * sizeof(uint8_t));
    }

    virtual void write_int16_t(int16_t value) override {
        get_os()->write(reinterpret_cast<char*>(&value), sizeof(value));
    }

    virtual void write_uint16_t(uint16_t value) override {
        get_os()->write(reinterpret_cast<char*>(&value), sizeof(value));
    }

    virtual void write_int16_t(int16_t *value, int count) override {
        get_os()->write(reinterpret_cast<char*>(value), count * sizeof(int16_t));
    }

    virtual void write_uint16_t(uint16_t *value, int count) override {
        get_os()->write(reinterpret_cast<char*>(value), count * sizeof(uint16_t));
    }

    virtual void write_int32_t(int32_t value) override {
        get_os()->write(reinterpret_cast<char*>(&value), sizeof(value));
    }

    virtual void write_uint32_t(uint32_t value) override {
        get_os()->write(reinterpret_cast<char*>(&value), sizeof(value));
    }

    virtual void write_int32_t(int32_t *value, int count) override {
        get_os()->write(reinterpret_cast<char*>(value), count * sizeof(int32_t));
    }

    virtual void write_uint32_t(uint32_t *value, int count) override {
        get_os()->write(reinterpret_cast<char*>(value), count * sizeof(uint32_t));
    }

    virtual void write_int64_t(int64_t value) override {
        get_os()->write(reinterpret_cast<char*>(&value), sizeof(value));
    }

    virtual void write_uint64_t(uint64_t value) override {
        get_os()->write(reinterpret_cast<char*>(&value), sizeof(value));
    }

    virtual void write_int64_t(int64_t *value, int count) override {
        get_os()->write(reinterpret_cast<char*>(value), count * sizeof(int64_t));
    }

    virtual void write_uint64_t(uint64_t *value, int count) override {
        get_os()->write(reinterpret_cast<char*>(value), count * sizeof(uint64_t));
    }

    virtual void write_double_t(double value) override {
        get_os()->write(reinterpret_cast<char*>(&value), sizeof(value));
    }

    virtual void write_double_t(double *value, int count) override {
        get_os()->write(reinterpret_cast<char*>(value), count * sizeof(double));
    }

    virtual void write_float_t(float value) override {
        get_os()->write(reinterpret_cast<char*>(&value), sizeof(value));
    }

    virtual void write_float_t(float *value, int count) override {
        get_os()->write(reinterpret_cast<char*>(value), count * sizeof(float));
    }

    virtual void write(void *value, int nbytes) override {
        get_os()->write(reinterpret_cast<char*>(value), nbytes);
    }

};

}
}

#endif //MEMUTILS_PRIMITIVE_WRITER_H
