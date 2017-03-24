//
// Created by jadamczyk on 22.03.17.
//

#include "SimpleJson.h"
#include <math.h>
#include <sstream>
#include <iomanip>


nets::JsonValue::JsonValue(int jsonInt){
    this->jsonInt = jsonInt;
}

nets::JsonValue::JsonValue(double jsonDouble){
    this->jsonDouble = jsonDouble;
}

nets::JsonValue::JsonValue(const string &jsonString){
    this->jsonString = jsonString;
}

nets::JsonValue::JsonValue(bool jsonBool){
    this->jsonBool=jsonBool;
}

nets::JsonValue::JsonValue(const vector<JsonValue> &jsonVector) {
    this->jsonVector=jsonVector;
}

nets::JsonValue::JsonValue(const map<string, JsonValue> &jsonMap) {
    this->jsonMap=jsonMap;
}

nets::JsonValue::JsonValue() {}

nets::JsonValue::JsonValue(nets::JsonValue *jsonValue) {
    this->jsonValue->value() = jsonValue;
}

nets::JsonValue::~JsonValue() {}


string nets::JsonValue::ToString() const {
    if (bool(this->jsonInt)) {
        if (this->jsonInt.value() == 0) {
            return "";
        } else {
            return to_string(this->jsonInt.value());
        }
    }
    else if (bool(this->jsonDouble)) {
        std::stringstream stream;
        stream << std::fixed << std::setprecision(2) << this->jsonDouble.value();
        string s = stream.str();
        return s;
    }
    else if (bool(this->jsonBool)) {
        if (this->jsonBool.value()) {
            return "true";
        } else {
            return "false";
        }
    }
    else if (bool(this->jsonString)) {
        return "\"" + this->jsonString.value() + "\"";
    }
    else if (bool(this->jsonVector)) {

        string result;
        result += "[";
        for (auto el : this->jsonVector.value()) {
            if (el.ToString() == "\"\"") {
                return "{: 10}";
            }
            result += el.ToString();
            result += ", ";
        }
        result = result.substr(0, result.length()-2);
        result+="]";
        return result;
    }
    else if (bool(this->jsonMap)) {
        string result;
        result+="{";
        for (auto el : this->jsonMap.value()) {
            if(el.first == "") {
                result += "";
            } else {
                result+= "\"" + el.first + "\"" + ": ";
            }

            result+= el.second.ToString() + ", ";
        }
        result = result.substr(0, result.length()-2);
        result+= "}";
        return result;
    }
    else if (bool(this->jsonValue)) {
        return this->jsonValue->value().ToString();
    }
}

std::experimental::optional<nets::JsonValue> nets::JsonValue::ValueByName(
        const std::string &name) const {
    if (this->jsonMap.value().find(name) == this->jsonMap.value().end()) {
        return {};
    } else {
        return (this->jsonMap.value()).at(name);
    }
}
