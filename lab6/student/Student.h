//
// Created by adamc on 04.04.2017.
//

#ifndef JIMP_EXERCISES_STUDENT_H
#define JIMP_EXERCISES_STUDENT_H

#include <string>
#include <iostream>
#include "StudyYear.h"
#include "StudentRepository.h"

using std::istream;
using std::ostream;

using std::string;

class Student {

private:
    string id;
    string first_name;
    string last_name;
    string program;
    StudyYear year;
public:

    istream &operator>>(istream &is, Student student);

    ostream &operator<<(ostream &os, Student student);

    const string &getId() const;

    void setId(const string &id);

    const string &getFirst_name() const;

    void setFirst_name(const string &first_name);

    const string &getLast_name() const;

    void setLast_name(const string &last_name);

    const string &getProgram() const;

    void setProgram(const string &program);

    const StudyYear &getYear() const;

    void setYear(const StudyYear &year);
};

#endif //JIMP_EXERCISES_STUDENT_H
