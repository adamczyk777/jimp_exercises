//
// Created by adamc on 15.04.2017.
//

#ifndef JIMP_EXERCISES_TROJKAT_H
#define JIMP_EXERCISES_TROJKAT_H

#include "Ksztalt.h"


class Trojkat : public Ksztalt {
public:
    Trojkat();

    Trojkat(double a, double b, double c);

    double getA() const;

    void setA(double a);

    double getB() const;

    void setB(double b);

    double getC() const;

    void setC(double c);

private:
    void rysuj() const override;

private:
    double a;
    double b;
    double c;
};


#endif //JIMP_EXERCISES_TROJKAT_H
