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

Name::Name::Name(string firstName, string secondName, string surname) {
    this->firstName = firsName;
    this->secondName = secondName;
    this->surname = surname;
}

Name::Name(string firstName, string secondName, string thirdName, string surname) {
    this->firstName = firsName;
    this->secondName = secondName;
    this->thirdName = thirdName;
    this->surname = surname;
}

Name::~Name(){

}

Name::getFirstName() {
    return this->firstName;
}
Name::getSecondName() {
    return this->secondName;
}
Name::getThirdName() {
    return this->thirdName;
}
Name::getSurname() {
    return this->surname;
}

Name::setFirstName(string firstName) {
    this->firstName = firstName;
}
Name::setSecondName(string secondName) {
    this->secondName = secondName;
}
Name::setThirdName(string thirdName) {
    this->thirdName = thirdName;
}
Name::setSurname(string surname){
    this->surname = surname;
}

string toFullInitials() const;
string toFirstNameInitials() const;
string toSurnameNames() const;
string toNamesSurname() const;
