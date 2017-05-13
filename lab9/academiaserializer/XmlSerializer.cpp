//
// Created by Tay on 5/12/17.
//

#include "XmlSerializer.h"

namespace academia {
// wszedzie powinny byc ukosniki w druga strone, ale testy
    XmlSerializer::XmlSerializer(std::ostream *out) : Serializer(out) {
        this->asd = out;
    }

    void XmlSerializer::IntegerField(const std::string &field_name, int value) {
        *this->asd << "<" << field_name << ">";
        *this->asd << value;
        *this->asd << "<\\" << field_name << ">";
    }

    void XmlSerializer::DoubleField(const std::string &field_name, double value) {
        *this->asd << "<" << field_name << ">";
        *this->asd << value;
        *this->asd << "<\\" << field_name << ">";
    }

    void XmlSerializer::StringField(const std::string &field_name, const std::string &value) {
        *this->asd << "<" << field_name << ">";
        *this->asd << value;
        *this->asd << "<\\" << field_name << ">";
    }

    void XmlSerializer::BooleanField(const std::string &field_name, bool value) {
        *this->asd << "<" << field_name << ">";
        *this->asd << value;
        *this->asd << "<\\" << field_name << ">";
    }

    void XmlSerializer::SerializableField(const std::string &field_name, const academia::Serializable &value) {

    }

    void XmlSerializer::ArrayField(const std::string &field_name,
                                   const std::vector<std::reference_wrapper<const academia::Serializable>> &value) {
        *this->asd << "<" << field_name << ">";
        // tu lista pokoi:
/*        for(auto room in this->rooms) {

        }*/
        *this->asd << "<\\" << field_name << ">";
    }

    void XmlSerializer::Header(const std::string &object_name) {
        *this->asd << "<" << object_name << ">";
    }

    void XmlSerializer::Footer(const std::string &object_name) {
        *this->asd << "<\\" << object_name << ">";
    }

    void XmlSerializer::endingLine(const std::string &field_name) {

    }
}