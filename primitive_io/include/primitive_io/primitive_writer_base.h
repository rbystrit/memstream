//
// Created by rbyst on 8/14/2016.
//

#ifndef PRIMITIVE_IO_PRIMITIVE_IO_PRIMITIVE_WRITER_BASE_H
#define PRIMITIVE_IO_PRIMITIVE_IO_PRIMITIVE_WRITER_BASE_H
#include <ostream>
#include <sstream>
#include <memory>
#include <string>

using namespace std;
namespace rbystrit {
namespace primitive_io{

class write_not_supported_exception : public exception{
public:
    write_not_supported_exception(string type_name){
        stringstream ss;
        ss << "Write operation not supported for type: " << type_name;

        error = ss.str();
    }

    virtual const char* what() const throw(){
        return error.c_str();
    }
private:
    string error;
};

class PrimitiveWriterBase {
public:
    PrimitiveWriterBase(shared_ptr<ostream> os) : os(os) {}

    PrimitiveWriterBase(const PrimitiveWriterBase &other) : os(other.os) {}

    PrimitiveWriterBase(PrimitiveWriterBase &&other) : os(other.os) {}

    PrimitiveWriterBase &operator=(const PrimitiveWriterBase &other) {
        os = other.os;
        return *this;
    }

    PrimitiveWriterBase operator=(PrimitiveWriterBase &&other) {
        os = other.os;
        return *this;
    }


    virtual void write_int8_t(int8_t value) {
        throw new write_not_supported_exception("int8_t");
    }

    virtual void write_uint8_t(uint8_t value) {
        throw new write_not_supported_exception("uint8_t");
    }

    virtual void write_int8_t(int8_t *value, int count) {
        throw new write_not_supported_exception("int8_t");
    }

    virtual void write_uint8_t(uint8_t *value, int count) {
        throw new write_not_supported_exception("uint8_t");
    }

    virtual void write_int16_t(int16_t value) {
        throw new write_not_supported_exception("int16_t");
    }

    virtual void write_uint16_t(uint16_t value) {
        throw new write_not_supported_exception("uint16_t");
    }

    virtual void write_int16_t(int16_t *value, int count) {
        throw new write_not_supported_exception("int16_t");
    }

    virtual void write_uint16_t(uint16_t *value, int count) {
        throw new write_not_supported_exception("uint16_t");
    }

    virtual void write_int32_t(int32_t value) {
        throw new write_not_supported_exception("int32_t");
    }

    virtual void write_uint32_t(uint32_t value) {
        throw new write_not_supported_exception("uint32_t");
    }

    virtual void write_int32_t(int32_t *value, int count) {
        throw new write_not_supported_exception("int32_t");
    }

    virtual void write_uint32_t(uint32_t *value, int count) {
        throw new write_not_supported_exception("uint32_t");
    }

    virtual void write_int64_t(int64_t value) {
        throw new write_not_supported_exception("int64_t");
    }

    virtual void write_uint64_t(uint64_t value) {
        throw new write_not_supported_exception("uint64_t");
    }

    virtual void write_int64_t(int64_t *value, int count) {
        throw new write_not_supported_exception("int64_t");
    }

    virtual void write_uint64_t(uint64_t *value, int count) {
        throw new write_not_supported_exception("uint64_t");
    }

    virtual void write_double_t(double value) {
        throw new write_not_supported_exception("double");
    }

    virtual void write_double_t(double *value, int count) {
        throw new write_not_supported_exception("double");
    }

    virtual void write_float_t(float value) {
        throw new write_not_supported_exception("float");
    }

    virtual void write_float_t(float *value, int count) {
        throw new write_not_supported_exception("float");
    }


    void write(int8_t value) {
        write_int8_t(value);
    }

    void write(uint8_t value) {
        write_uint8_t(value);
    }

    void write(int8_t *value, int count) {
        write_int8_t(value,count);
    }

    void write(uint8_t *value, int count) {
        write_uint8_t(value,count);
    }

    void write(int16_t value) {
        write_int16_t(value);
    }

    void write(uint16_t value) {
        write_uint16_t(value);
    }

    void write(int16_t *value, int count) {
        write_int16_t(value,count);
    }

    void write(uint16_t *value, int count) {
        write_uint16_t(value,count);
    }

    void write(int32_t value) {
        write_int32_t(value);
    }

    void write(uint32_t value) {
        write_uint32_t(value);
    }

    void write(int32_t *value, int count) {
        write_int32_t(value,count);
    }

    void write(uint32_t *value, int count) {
        write_uint32_t(value,count);
    }

    void write(int64_t value) {
        write_int64_t(value);
    }

    void write(uint64_t value) {
        write_uint64_t(value);
    }

    void write(int64_t *value, int count) {
        write_int64_t(value,count);
    }

    void write(uint64_t *value, int count) {
        write_uint64_t(value,count);
    }

    void write(float value) {
        write_float_t(value);
    }

    void write(double value) {
        write_double_t(value);
    }

    void write(float *value, int count) {
        write_float_t(value,count);
    }

    void write(double *value, int count) {
        write_double_t(value,count);
    }

    virtual void write(void *value, int nbytes) {
        throw new write_not_supported_exception("void");
    }

    ostream* get_os() const { return os.get();}
private:
    shared_ptr<ostream> os;
};

}}

#endif //MEMUTILS_PRIMITIVE_WRITER_BASE_H
