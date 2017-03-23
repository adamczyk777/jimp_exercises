//
// Created by jadamczyk on 22.03.17.
//

#ifndef JIMP_EXERCISES_SIMPLEJSON_H
#define JIMP_EXERCISES_SIMPLEJSON_H

#include <experimental/optional>
#include <string>
#include <vector>
#include <map>

using std::string;
using std::vector;
using std::map;

namespace nets {

    class JsonValue {
    public:
        int getJsonInt() const;

        void setJsonInt(int jsonInt);

        double getJsonDouble() const;

        void setJsonDouble(double jsonDouble);

        const string &getJsonString() const;

        void setJsonString(const string &jsonString);

        bool isJsonBool() const;

        void setJsonBool(bool jsonBool);

        const JsonValue &getJsonValue() const;

        void setJsonValue(JsonValue *jsonValue);

        const vector<JsonValue> &getJsonVector() const;

        void setJsonVector(const vector<JsonValue> &jsonVector);

        JsonValue(const vector<JsonValue> &jsonVector);

        JsonValue(JsonValue *jsonValue);

        JsonValue(bool jsonBool);

        JsonValue(const string &jsonString);

        JsonValue(double jsonDouble);

        JsonValue(int jsonInt);

        JsonValue(const map<string, JsonValue> &jsonMap);

        JsonValue();

        virtual ~JsonValue();

        string ToString() const;

        std::experimental::optional<JsonValue> ValueByName(const std::string &name) const;

    private:
        int jsonInt;
        double jsonDouble;
        string jsonString;
        bool jsonBool;
        JsonValue *jsonValue;
        vector<JsonValue> jsonVector;
        map<string, JsonValue> jsonMap;
    };

}

#endif //JIMP_EXERCISES_SIMPLEJSON_H
