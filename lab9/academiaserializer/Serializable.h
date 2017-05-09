//
// Created by adamc on 09.05.2017.
//

#ifndef JIMP_EXERCISES_SERIALIZABLE_H
#define JIMP_EXERCISES_SERIALIZABLE_H

#include <string>
#include <vector>
#include <iostream>

namespace academia {
    class Serializer;

    class Serializable {
    public:
        virtual void Serialize(Serializer * serializer) = 0;
    };

    class Serializer {
    public:
        Serializer(std::ostream *out);

        virtual void IntegerField(const std::string &field_name, int value) = 0;
        virtual void DoubleField(const std::string &field_name, double value) = 0;
        virtual void StringField(const std::string &field_name, const std::string &value) = 0;
        virtual void BooleanField(const std::string &field_name, bool value) = 0;
        virtual void SerializableField(const std::string &field_name, const academia::Serializable &value) = 0;
        virtual void ArrayField(const std::string &field_name,
                        const std::vector<std::reference_wrapper<const academia::Serializable>> &value) = 0;
        virtual void Header(const std::string &object_name) = 0;
        virtual void Footer(const std::string &object_name) = 0;
    };
}

#endif //JIMP_EXERCISES_SERIALIZABLE_H
