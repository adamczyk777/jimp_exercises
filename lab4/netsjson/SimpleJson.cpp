//
// Created by jadamczyk on 22.03.17.
//

#include "SimpleJson.h"


nets::JsonValue::~JsonValue() {

}

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

string nets::JsonValue::ToString() const {

}

std::experimental::optional<nets::JsonValue> nets::JsonValue::ValueByName(
        const std::string &name) const {
    if(&this->jsonMap != nullptr) {
        map<string, nets::JsonValue> ret = *this->jsonMap;
        return std::experimental::make_optional(ret[name]);
    }
    else {
        return {};
    }
}