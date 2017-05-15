//
// Created by Tay on 5/12/17.
//

#ifndef JIMP_EXERCISES_JSONSERIALIZER_H
#define JIMP_EXERCISES_JSONSERIALIZER_H

#include "Serializable.h"

namespace academia {
    class JsonSerializer : public Serializer {
    public:
        JsonSerializer(std::ostream *out);
        void IntegerField(const std::string &field_name, int value);
        void DoubleField(const std::string &field_name, double value);
        void StringField(const std::string &field_name, const std::string &value);
        void BooleanField(const std::string &field_name, bool value);
        void SerializableField(const std::string &field_name, const Serializable &value);
        void ArrayField(const std::string &field_name,
                                const std::vector<std::reference_wrapper<const Serializable>> &value);
        void Header(const std::string &object_name);
        void Footer(const std::string &object_name);
        void endingLine(const std::string &field_name);
    protected:
        std::ostream *out;
    };
}


#endif //JIMP_EXERCISES_JSONSERIALIZER_H
