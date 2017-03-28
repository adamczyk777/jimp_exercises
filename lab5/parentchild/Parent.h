//
// Created by Tay on 3/28/2017.
//

#ifndef JIMP_EXERCISES_PARENT_H
#define JIMP_EXERCISES_PARENT_H

#include <string>
#include "Child.h"

class Parent {
private:
    std::string name;
    std::string surname;
    int age;
    Child child;
public:
    void changeSchool(std::string school_name);

    void setAge(int age);

    void setChild(const Child &child);
};

#endif //JIMP_EXERCISES_PARENT_H
