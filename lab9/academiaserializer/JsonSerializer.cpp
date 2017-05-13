//
// Created by Tay on 5/12/17.
//

#include "JsonSerializer.h"

namespace academia {

    void JsonSerializer::IntegerField(const std::string &field_name, int value) {
        *this->test << "\"" << field_name << "\": "  << value;
    }

    void JsonSerializer::DoubleField(const std::string &field_name, double value) {
        *this->test << "\"" << field_name << "\": " << value;
    }

    void JsonSerializer::StringField(const std::string &field_name, const std::string &value) {
        *this->test << "\"" << field_name << "\": " << "\"" << value << "\"";
    }

    void JsonSerializer::BooleanField(const std::string &field_name, bool value) {
        *this->test << "\"" << field_name << "\": " << value;
    }

    void JsonSerializer::SerializableField(const std::string &field_name, const academia::Serializable &value) {

    }

    void JsonSerializer::ArrayField(const std::string &field_name,
                                    const std::vector<std::reference_wrapper<const academia::Serializable>> &value) {

    }

    void JsonSerializer::Header(const std::string &object_name) {
        *this->test << "{";
    }

    void JsonSerializer::Footer(const std::string &object_name) {
        *this->test << "}";
    }

    JsonSerializer::JsonSerializer(std::ostream *out) : Serializer(out) {
        this->test = out;
    }

    void JsonSerializer::endingLine(const std::string &field_name) {
        *this->test << ", ";
    }
}
