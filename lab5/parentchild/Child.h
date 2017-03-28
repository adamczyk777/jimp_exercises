//
// Created by Tay on 3/28/2017.
//

#ifndef JIMP_EXERCISES_CHILD_H
#define JIMP_EXERCISES_CHILD_H

#include <string>

class Child {
    friend class Parent;

private:
    std::string name;
    std::string surname;
    int age;
    std::string school = "gimnazjum";
public:
    const std::string &getSchool() const;
};

#endif //JIMP_EXERCISES_CHILD_H
