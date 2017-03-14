//
// Created by jadamczyk on 14/03/17.
//

#include "CCounter.h"

ccounter::unique_ptr<ccounter::Counter> ccounter::Init(){
    ccounter::unique_ptr<ccounter::Counter> object = std::make_unique<ccounter::Counter>();
    return object;
}

void ccounter::Inc(std::string key, std::unique_ptr<Counter>* counter){
    bool exists = false;
    for (auto obj : counter->get()->objects){
        if (obj.first == key) {
            obj.second++;
            exists = true;
        }
    }
    if (!exists){
        counter->get()->objects.emplace(key, 1);
    }
}
int ccounter::Counts(const std::unique_ptr<Counter> &counter, std::string key){
    for (auto obj : counter->objects) {
        if (obj.first == key){
            return obj.second;
        }
    }
}
void ccounter::SetCountsTo(std::string key, int value, std::unique_ptr<Counter> *counter){

}
