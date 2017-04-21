//
// Created by adamc on 15.04.2017.
//

#ifndef JIMP_EXERCISES_KOLO_H
#define JIMP_EXERCISES_KOLO_H

#include "Ksztalt.h"
#include <iostream>


class Kolo : Ksztalt{
public:
    void rysuj() const override;

    Kolo(double radius);

    Kolo();

    virtual ~Kolo();

    double getRadius() const;

    void setRadius(double radius);

private:
    double radius;

};


#endif //JIMP_EXERCISES_KOLO_H
