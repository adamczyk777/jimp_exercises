//
// Created by jadamczyk on 22.03.17.
//

#include "SimpleJson.h"


nets::JsonValue::~JsonValue() {

}

nets::JsonValue::JsonValue(int jsonInt) : jsonInt(jsonInt) {
    this->jsonInt = jsonInt;
}

nets::JsonValue::JsonValue(double jsonDouble) : jsonDouble(jsonDouble) {
    this->jsonDouble = jsonDouble;
}

nets::JsonValue::JsonValue(const string &jsonString) : jsonString(jsonString) {
    this->jsonString = jsonString;
}

nets::JsonValue::JsonValue(bool jsonBool) : jsonBool(jsonBool) {
    this->jsonBool=jsonBool;
}

nets::JsonValue::JsonValue(const vector<JsonValue> &jsonVector) : jsonVector(jsonVector) {
    this->jsonVector=jsonVector;
}

nets::JsonValue::JsonValue(const map<string, JsonValue> &jsonMap) : jsonMap(jsonMap) {
    this->jsonMap=jsonMap;
}

nets::JsonValue::JsonValue() {}

int nets::JsonValue::getJsonInt() const {
    return jsonInt;
}

void nets::JsonValue::setJsonInt(int jsonInt) {
    JsonValue::jsonInt = jsonInt;
}

double nets::JsonValue::getJsonDouble() const {
    return jsonDouble;
}

void nets::JsonValue::setJsonDouble(double jsonDouble) {
    JsonValue::jsonDouble = jsonDouble;
}

const string &nets::JsonValue::getJsonString() const {
    return jsonString;
}

void nets::JsonValue::setJsonString(const string &jsonString) {
    JsonValue::jsonString = jsonString;
}

bool nets::JsonValue::isJsonBool() const {
    return jsonBool;
}

void nets::JsonValue::setJsonBool(bool jsonBool) {
    JsonValue::jsonBool = jsonBool;
}

const nets::JsonValue &nets::JsonValue::getJsonValue() const {
    return *jsonValue;
}

const vector<nets::JsonValue> &nets::JsonValue::getJsonVector() const {
    return jsonVector;
}

void nets::JsonValue::setJsonVector(const vector<JsonValue> &jsonVector) {
    JsonValue::jsonVector = jsonVector;
}

void nets::JsonValue::setJsonValue(nets::JsonValue *jsonValue) {
    JsonValue::jsonValue = jsonValue;
}

nets::JsonValue::JsonValue(nets::JsonValue *jsonValue) : jsonValue(jsonValue) {
    this->jsonValue = jsonValue;
}

string nets::JsonValue::ToString() const {
    if (this->jsonInt || this->jsonDouble){
        return to_string(this->jsonInt);
    } else if(this->jsonBool) {
        if (this->jsonBool) {
            return "true";
        } else {
            return "false";
        }
    } else {
        return this->jsonString;
    }
}

std::experimental::optional<nets::JsonValue> nets::JsonValue::ValueByName(
        const std::string &name) const {
    if(&this->getJsonMap() != nullptr) {
        map<string, nets::JsonValue> ret = this->getJsonMap();
        return std::experimental::make_optional(ret[name]);
    }
    else {
        return {};
    }
}

const map<string, nets::JsonValue> &nets::JsonValue::getJsonMap() const {
    return jsonMap;
}

void nets::JsonValue::setJsonMap(const map<string, nets::JsonValue> &jsonMap) {
    JsonValue::jsonMap = jsonMap;
}

