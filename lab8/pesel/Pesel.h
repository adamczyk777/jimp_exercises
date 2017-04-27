//
// Created by adamc on 25.04.2017.
//

#ifndef JIMP_EXERCISES_PESEL_H
#define JIMP_EXERCISES_PESEL_H

#include <string>

namespace academia {
    class Pesel {
    public:
        Pesel(const std::string pesel);

        void validatePesel(std::string);

    private:
        std::string number;
    };

    class InvalidPeselLength {
        //do rzucania przy zlym rozmiarze
    public:
        InvalidPeselLength(unsigned long peselSize);

        unsigned long getPeselSize() const;

    private:
        unsigned long peselSize;

    };

    class InvalidPeselCharacter {
        //do rzucania przy zlym znaku
    public:
        InvalidPeselCharacter(char wrongCharecter);

        char getWrongCharecter() const;

    private:
        char wrongCharecter;


    };

    class InvalidPeselChecksum {
        //do rzucania przy zlej sumie kontrolnej na koncu
    private:
        int controlSum;
    public:
        InvalidPeselChecksum(int controlSum);

        int getControlSum() const;

    };
}

#endif //JIMP_EXERCISES_PESEL_H
