//
// Created by adamc on 25.04.2017.
//

#ifndef JIMP_EXERCISES_PESEL_H
#define JIMP_EXERCISES_PESEL_H

#include <string>

namespace academia {
    class pesel {
    public:
        pesel(const std::string pesel);

        void validatePesel(std::string);

    private:
        std::string number;
    };

    class WrongPeselSize {
        //do rzucania przy zlym rozmiarze
    public:
        WrongPeselSize(unsigned long peselSize);

        unsigned long getPeselSize() const;

    private:
        unsigned long peselSize;

    };

    class WrongPeselCharacter {
        //do rzucania przy zlym znaku
    public:
        WrongPeselCharacter(char wrongCharecter);

        char getWrongCharecter() const;

    private:
        char wrongCharecter;


    };

    class WrongPeselControlSum {
        //do rzucania przy zlej sumie kontrolnej na koncu
    private:
        int controlSum;
    public:
        WrongPeselControlSum(int controlSum);

        int getControlSum() const;

    };
}

#endif //JIMP_EXERCISES_PESEL_H
