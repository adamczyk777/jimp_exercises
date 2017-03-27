//
// Created by jadamczyk on 22.03.17.
//

#ifndef JIMP_EXERCISES_SIMPLEJSON_H
#define JIMP_EXERCISES_SIMPLEJSON_H

#include <experimental/optional>
#include <string>
#include <vector>
#include <map>

#include <experimental/optional>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <sstream>
using namespace std;
using experimental::optional;
using experimental::make_optional;

namespace nets {

    class JsonValue {
    private:

        int jsonInt;
        double jsonDouble;
        string jsonString;
        bool jsonBool;
        vector<JsonValue> jsonVector;
        map<string, JsonValue> jsonMap;
        int type;

    public:

        JsonValue(const vector<JsonValue> &jsonVector);
        JsonValue(bool jsonBool);
        JsonValue(const string &jsonString);
        JsonValue(double jsonDouble);
        JsonValue(int jsonInt);
        JsonValue(const map<string, JsonValue> &jsonMap);
        JsonValue();
        ~JsonValue();
        string ToString() const;
        optional<JsonValue> ValueByName(const string &name) const;

    };

}

#endif //JIMP_EXERCISES_SIMPLEJSON_H
