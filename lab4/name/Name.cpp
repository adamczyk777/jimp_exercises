//
// Created by jadamczyk on 21.03.17.
//

#include "Name.h"

Name::Name(){

}

Name::Name(string surname) {
    this->surname = surname;
}

Name::Name(string firsName, string surname) {
    this->firstName = firsName;
    this->surname = surname;
}

Name::Name(string firstName, string secondName, string surname) {
    this->firstName = firstName;
    this->secondName = secondName;
    this->surname = surname;
}

Name::Name(string firstName, string secondName, string thirdName, string surname) {
    this->firstName = firstName;
    this->secondName = secondName;
    this->thirdName = thirdName;
    this->surname = surname;
}

Name::~Name(){

}

string Name::getFirstName() const {
    return this->firstName;
}
string Name::getSecondName() const {
    return this->secondName;
}
string Name::getThirdName() const {
    return this->thirdName;
}
string Name::getSurname() const {
    return this->surname;
}

void Name::setFirstName(string firstName) {
    this->firstName = firstName;
}
void Name::setSecondName(string secondName) {
    this->secondName = secondName;
}
void Name::setThirdName(string thirdName) {
    this->thirdName = thirdName;
}
void Name::setSurname(string surname){
    this->surname = surname;
}

string Name::toFullInitials() const {
    return this->firstName.substr(0, 1) + ". " + this->secondName.substr(0,1) + ". " + this->thirdName.substr(0,1)
    + ". " + this->surname.substr(0,1) + ".";
}
string Name::toFirstNameInitials() const {
    this->firstName.substr(0, 1) + ". " + this->secondName.substr(0,1) + ". " + this->thirdName.substr(0,1) + ". "
    + this->surname;
}
string Name::toSurnameNames() const {
    return this->surname + " " + this->firstName + " " + this->secondName + " " + this->thirdName;
}

string Name::toNamesSurname() const {
    return this->firstName + " " + this->secondName + " " + this->thirdName + " " + this->surname;
}

bool Name::isBeforeBySurname(string compareWithThis) const {
    int i = 0;
    while(true){
        if (this->surname.substr(i,1) < compareWithThis.substr(i,1)) {
            return true;
        }

        else if (this->surname.substr(i,1) == compareWithThis.substr(i,1)) {
            i++;
        }
        else {
            return false;
        }
    }
}

bool Name::isBeforeByFirstName(string compareWithThis) const {
    int i = 0;
    while(true){
        if (this->firstName.substr(i,1) < compareWithThis.substr(i,1)) {
            return true;
        }

        else if (this->firstName.substr(i,1) == compareWithThis.substr(i,1)) {
            i++;
        }
        else {
            return false;
        }
    }
}
