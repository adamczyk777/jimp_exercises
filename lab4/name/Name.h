//
// Created by jadamczyk on 21.03.17.
//

#ifndef JIMP_EXERCISES_NAME_H
#define JIMP_EXERCISES_NAME_H

#include <string>
#include <iostream>

using namespace std;


class Name {
private:
    string firstName;
    string secondName;
    string thirdName;
    string surname;

public:
    Name();

    Name(string surname);

    Name(string firsName, string surname);

    Name(string firstName, string secondName, string surname);

    Name(string firstName, string secondName, string thirdName, string surname);

    ~Name();

    string getFirstName() const;
    string getSecondName() const;
    string getThirdName() const;
    string getSurname() const;

    void setFirstName(string firstName);
    void setSecondName(string secondName);
    void setThirdName(string thirdName);
    void setSurname(string surname);

    string toFullInitials() const;
    string toFirstNameInitials() const;
    string toSurnameNames() const;
    string toNamesSurname() const;

    bool isBeforeBySurname(string compareWithThis) const;
    bool isBeforeByFirstName(string compareWithThis) const;

};


#endif //JIMP_EXERCISES_NAME_H
