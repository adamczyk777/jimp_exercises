//
// Created by adamc on 25.04.2017.
//

#ifndef JIMP_EXERCISES_PESEL_H
#define JIMP_EXERCISES_PESEL_H

#include <string>

class pesel {
public:
    pesel(const std::string pesel);

    bool validatePesel(std::string);

private:
    std::string number;
};

class WrongSize {
    //do rzucania przy zlym rozmiarze
public:
    WrongSize(unsigned long peselSize);

    unsigned long getPeselSize() const;

private:
    unsigned long peselSize;

};
class WrongCharacter {
    //do rzucania przy zlym znaku
public:
    WrongCharacter(char wrongCharecter);

    char getWrongCharecter() const;

private:
    char wrongCharecter;


};
class WrongControlSum {
    //do rzucania przy zlej sumie kontrolnej na koncu
private:
    int controlSum;
public:
    WrongControlSum(int controlSum);

    int getControlSum() const;

};


#endif //JIMP_EXERCISES_PESEL_H
