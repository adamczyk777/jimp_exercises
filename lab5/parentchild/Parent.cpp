//
// Created by Tay on 3/28/2017.
//

#include "Parent.h"

void Parent::changeSchool(std::string school_name) {
    this->child.school = school_name;
}

void Parent::setChild(const Child &child) {
    Parent::child = child;
}

void Parent::setAge(int age) {
    Parent::age = age;
}
