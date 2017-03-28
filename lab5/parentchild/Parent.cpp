//
// Created by Tay on 3/28/2017.
//

#include "Parent.h"

void Parent::changeSchool(std::string school_name) {
    Parent::child->school = school_name;
}

void Parent::setChild(Child *child) {
    Parent::child = child;
}
