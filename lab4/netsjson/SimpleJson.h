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
using std::to_string;
using std::experimental::optional;
using std::experimental::make_optional;


namespace nets {

    class JsonValue {
    public:
        virtual ~JsonValue();

        JsonValue(const vector<JsonValue> &jsonVector);

        JsonValue(JsonValue *jsonValue);

        JsonValue(bool jsonBool);

        JsonValue(const string &jsonString);

        JsonValue(double jsonDouble);

        JsonValue(int jsonInt);

        JsonValue(const map<string, JsonValue> &jsonMap);

        JsonValue();

        string ToString() const;

        std::experimental::optional<JsonValue> ValueByName(const std::string &name) const;


    private:
        optional<int> jsonInt;
        optional<double> jsonDouble;
        optional<string> jsonString;
        optional<bool> jsonBool;
        optional<JsonValue> *jsonValue;
        optional<vector<JsonValue>> jsonVector;
        optional<map<string, JsonValue>> jsonMap;
    };

}

#endif //JIMP_EXERCISES_SIMPLEJSON_H
