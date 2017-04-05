//
// Created by adamc on 04.04.2017.
//

#ifndef JIMP_EXERCISES_STUDENTREPOSITORY_H
#define JIMP_EXERCISES_STUDENTREPOSITORY_H

#include <iomanip>
#include <iostream>
#include "Student.h"
#include "StudentRepository.h"

using std::istream;
using std::ostream;


class StudentRepository {

public:
    istream &operator>>(istream &is, StudentRepository &repository);

    ostream &operator<<(ostream &os, StudentRepository &repository);
};


#endif //JIMP_EXERCISES_STUDENTREPOSITORY_H
