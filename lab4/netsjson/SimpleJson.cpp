//
// Created by jadamczyk on 22.03.17.
//

#include <iomanip>
#include "SimpleJson.h"

nets::JsonValue::JsonValue(int jsonInt){
    this->jsonInt = jsonInt;
    type = 1;
}

nets::JsonValue::JsonValue(double jsonDouble){
    this->jsonDouble = jsonDouble;
    type = 2;
}

nets::JsonValue::JsonValue(const string &jsonString){
    this->jsonString = jsonString;
    type = 3;
}

nets::JsonValue::JsonValue(bool jsonBool){
    this->jsonBool=jsonBool;
    type = 4;
}

nets::JsonValue::JsonValue(const vector<nets::JsonValue> &jsonVector) {
    this->jsonVector=jsonVector;
    type = 5;
}

nets::JsonValue::JsonValue(const map<string, nets::JsonValue> &jsonMap) {
    this->jsonMap=jsonMap;
    type = 6;
}

nets::JsonValue::JsonValue() {}

nets::JsonValue::~JsonValue() {}


string nets::JsonValue::ToString() const {
    switch(type) {
        case 1: {
            if (jsonInt == 0) {
                return "";
            } else {
                return to_string(jsonInt);
            }
        }
        case 2: {
            std::stringstream stream;
            stream << std::fixed << std::setprecision(2) << jsonDouble;
            return stream.str();
        }
        case 3: {
            if(jsonString == ""){
                return "";
            }
            string resultx;
            for (int i = 0; i < jsonString.size(); i++){
                if (jsonString[i] == '\\' || jsonString[i] == '\"') {
                    resultx += "\\" ;
                }
                resultx = resultx + jsonString[i];
            }
            return "\"" + resultx +"\"";
        }
        case 4: {
            if (jsonBool) {
                return "true";
            } else {
                return "false";
            }
        }
        case 5: {
            string result;
            result += "[" + jsonVector[0].ToString();
            for (auto el : jsonVector) {
                if(el.ToString() == jsonVector[0].ToString()) continue;
                result += ", ";
                result += el.ToString();
            }
            result+="]";
            return result;
        }
        case 6: {
            string resultMap;
            resultMap+="{";
            for (auto el : jsonMap) {
                if (el.first == "") {
                    resultMap = resultMap + "" +el.first + ": " + el.second.ToString() + ", ";
                } else {
                    JsonValue elem{el.first};
                    resultMap = resultMap + "" + elem.ToString() + ": " + el.second.ToString() + ", ";
                }
            }
            resultMap = resultMap.substr(0, resultMap.length()-2);
            resultMap += "}";
            return resultMap;
        }
    }
}

std::experimental::optional<nets::JsonValue> nets::JsonValue::ValueByName(
        const std::string &name) const {
    if(type!=6) {
        return {};
    }
    if (jsonMap.find(name) == jsonMap.end()) {
        return {};
    } else {
        return make_optional(jsonMap.at(name));
    }
}


