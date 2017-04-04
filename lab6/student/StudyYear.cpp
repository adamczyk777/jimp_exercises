//
// Created by adamc on 04.04.2017.
//

#include "StudyYear.h"

istream &StudyYear::operator>>(istream &is, StudyYear &year) {
    return <#initializer#>;
}

ostream &StudyYear::operator<<(ostream &os, StudyYear &year) {
    return <#initializer#>;
}

StudyYear::StudyYear(int yearOfStudy) : yearOfStudy(yearOfStudy) {}


void StudyYear::incrementYear() {
    this->yearOfStudy++;
}

void &StudyYear::operator++() {
    this->yearOfStudy += 1;
}

void &StudyYear::operator--() {
    this->yearOfStudy -= 1;
}
