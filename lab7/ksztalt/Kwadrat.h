//
// Created by adamc on 15.04.2017.
//

#ifndef JIMP_EXERCISES_KWADRAT_H
#define JIMP_EXERCISES_KWADRAT_H

#include "Ksztalt.h"


class Kwadrat : public Ksztalt {
public:
    void rysuj() const override;

    Kwadrat(double a, double b);

    Kwadrat();

    virtual ~Kwadrat();

    double getA() const;

    void setA(double a);

    double getB() const;

    void setB(double b);

private:
    double a;
    double b;
};


#endif //JIMP_EXERCISES_KWADRAT_H
