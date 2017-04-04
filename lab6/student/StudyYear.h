//
// Created by adamc on 04.04.2017.
//

#ifndef JIMP_EXERCISES_STUDYYEAR_H
#define JIMP_EXERCISES_STUDYYEAR_H

#include "Student.h"
#include "StudentRepository.h"
#include <iostream>
#include <iomanip>

using std::istream;
using std::ostream;

class StudyYear {
private:
    int yearOfStudy;
public:
    StudyYear(int yearOfStudy);

    void incrementYear();

    StudyYear &operator++();

    StudyYear &operator--();

    istream &operator>>(istream &is, StudyYear &year);

    ostream &operator<<(ostream &os, StudyYear &year);

};


#endif //JIMP_EXERCISES_STUDYYEAR_H
