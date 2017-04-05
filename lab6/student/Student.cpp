//
// Created by adamc on 04.04.2017.
//

#include "Student.h"

istream &Student::operator>>(istream &is, Student student) {
    return student;
}

ostream &Student::operator<<(ostream &os, Student student) {
    return student;
}

const string &Student::getId() const {
    return id;
}

void Student::setId(const string &id) {
    Student::id = id;
}

const string &Student::getFirst_name() const {
    return first_name;
}

void Student::setFirst_name(const string &first_name) {
    Student::first_name = first_name;
}

const string &Student::getLast_name() const {
    return last_name;
}

void Student::setLast_name(const string &last_name) {
    Student::last_name = last_name;
}

const string &Student::getProgram() const {
    return program;
}

void Student::setProgram(const string &program) {
    Student::program = program;
}

const StudyYear &Student::getYear() const {
    return year;
}

void Student::setYear(const StudyYear &year) {
    Student::year = year;
}
