//
// Created by adamc on 11.04.2017.
//

#ifndef JIMP_EXERCISES_KULA_H
#define JIMP_EXERCISES_KULA_H

#include "Kolo.h"


class Kula : public Kolo {
private:
    double z;
public:
    double pole();

    Kula(double z);
};


#endif //JIMP_EXERCISES_KULA_H
