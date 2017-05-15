//
// Created by Tay on 5/12/17.
//

#include "JsonSerializer.h"

namespace academia {

    /*
     * Definitions for Json Serializer
     * Makes use of Serializer method in serializable
     */

    void JsonSerializer::IntegerField(const std::string &field_name, int value) {
        *this->out << "\"" << field_name << "\": "  << value;
    }

    void JsonSerializer::DoubleField(const std::string &field_name, double value) {
        *this->out << "\"" << field_name << "\": " << value;
    }

    void JsonSerializer::StringField(const std::string &field_name, const std::string &value) {
        *this->out << "\"" << field_name << "\": " << "\"" << value << "\"";
    }

    void JsonSerializer::BooleanField(const std::string &field_name, bool value) {
        *this->out << "\"" << field_name << "\": " << value;
    }

    void JsonSerializer::SerializableField(const std::string &field_name, const Serializable &value) {
        //*this->out << "\"" << field_name << "\"";
        value.Serialize(this);
        //*this->out << ", ";

    }

    void JsonSerializer::ArrayField(const std::string &field_name,
                                    const std::vector<std::reference_wrapper<const Serializable>> &value) {
        *this->out << "\"" << field_name << "\": [";
        int i = 0;
        for (const Serializable &n : value) {

            SerializableField(" ", n);
            if(i != value.size()-1) {
                *this->out << ", ";
            }
            i++;
        }
        *this->out << "]";
    }

    void JsonSerializer::Header(const std::string &object_name) {
        *this->out << "{";
    }

    void JsonSerializer::Footer(const std::string &object_name) {
        *this->out << "}";
    }

    JsonSerializer::JsonSerializer(std::ostream *out) : Serializer(out) {
        this->out = out;
    }

    void JsonSerializer::endingLine(const std::string &field_name) {
        *this->out << ", ";
    }
}
