//
// Created by rbyst on 8/14/2016.
//

#ifndef MEMUTILS_PRIMITIVE_READER_BASE_H
#define MEMUTILS_PRIMITIVE_READER_BASE_H

#include <istream>
#include <memory>
#include <string>
#include <stdexcept>
#include <sstream>

using namespace std;
namespace rbystrit{
namespace primitive_io{


class read_not_supported_exception : public exception{
public:
    read_not_supported_exception(string type_name){
        stringstream ss;
        ss << "Read operation not supported for type: " << type_name;

        error = ss.str();
    }

    virtual const char* what() const throw(){
        return error.c_str();
    }
private:
    string error;
};

class PrimitiveReaderBase {
public:
    PrimitiveReaderBase(shared_ptr<istream> is) : is(is) {}

    PrimitiveReaderBase(const PrimitiveReaderBase &other) : is(other.is) {}

    PrimitiveReaderBase(PrimitiveReaderBase &&other) : is(other.is) {}

    PrimitiveReaderBase &operator=(const PrimitiveReaderBase &other) {
        is = other.is;
        return *this;
    }

    PrimitiveReaderBase &operator=(PrimitiveReaderBase &&other) {
        is = other.is;
        return *this;
    }


    virtual int8_t read_int8_t() {
        throw new read_not_supported_exception("int8_t");
    }

    virtual uint8_t read_uint8_t() {
        throw new read_not_supported_exception("uint8_t");
    }

    virtual void read_int8_t(int8_t *dest, int count) {
        throw new read_not_supported_exception("int8_t");
    }

    virtual void read_uint8_t(uint8_t* dest, int count) {
        throw new read_not_supported_exception("uint8_t");
    }

    virtual int16_t read_int16_t() {
        throw new read_not_supported_exception("int16_t");
    }

    virtual uint16_t read_uint16_t() {
        throw new read_not_supported_exception("uint16_t");
    }

    virtual void read_int16_t(int16_t *dest, int count) {
        throw new read_not_supported_exception("read_int16_t");
    }

    virtual void read_uint16_t(uint16_t* dest, int count) {
        throw new read_not_supported_exception("read_uint16_t");
    }

    virtual int32_t read_int32_t() {
        throw new read_not_supported_exception("int32_t");
    }

    virtual uint32_t read_uint32_t() {
        throw new read_not_supported_exception("uint32_t");
    }

    virtual void read_int32_t(int32_t *dest, int count) {
        throw new read_not_supported_exception("int32_t");
    }

    virtual void read_uint32_t(uint32_t* dest, int count) {
        throw new read_not_supported_exception("uint32_t");
    }

    virtual int64_t read_int64_t() {
        throw new read_not_supported_exception("int64_t");
    }

    virtual uint64_t read_uint64_t() {
        throw new read_not_supported_exception("uint64_t");
    }

    virtual void read_int64_t(int64_t *dest, int count) {
        throw new read_not_supported_exception("int64_t");
    }

    virtual void read_uint64_t(uint64_t* dest, int count) {
        throw new read_not_supported_exception("uint64_t");
    }

    virtual double read_double_t() {
        throw new read_not_supported_exception("double");
    }

    virtual void read_double_t(double *dest, int count) {
        throw new read_not_supported_exception("double");
    }

    virtual float read_float_t() {
        throw new read_not_supported_exception("float");
    }

    virtual void read_float_t(float* dest, int count) {
        throw new read_not_supported_exception("float");
    }

    void read(int8_t *value, int count) {
        read_int8_t(value,count);
    }

    void read(uint8_t *value, int count) {
        read_uint8_t(value,count);
    }

    void read(int16_t *value, int count) {
        read_int16_t(value,count);
    }

    void read(uint16_t *value, int count) {
        read_uint16_t(value,count);
    }

    void read(int32_t *value, int count) {
        read_int32_t(value,count);
    }

    void read(uint32_t *value, int count) {
        read_uint32_t(value,count);
    }

    void read(int64_t *value, int count) {
        read_int64_t(value,count);
    }

    void read(uint64_t *value, int count) {
        read_uint64_t(value,count);
    }

    void read(float *value, int count) {
        read_float_t(value,count);
    }

    void read(double *value, int count) {
        read_double_t(value,count);
    }

    virtual void read(void *value, int nbytes) {
        throw new read_not_supported_exception("void*");
    }

    istream* get_is() const {return is.get(); }
private:
    shared_ptr<istream> is;
};
}
}
#endif //MEMUTILS_PRIMITIVE_READER_BASE_H
