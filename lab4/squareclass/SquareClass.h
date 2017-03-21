//
// Created by Tay on 3/21/17.
//

#ifndef JIMP_EXERCISES_SQUARECLASS_H
#define JIMP_EXERCISES_SQUARECLASS_H

#include <math.h>
#include "Point.h"

class Square {
public:
    Point a;
    Point b;
    Point c;
    Point d;

    double Circumference();
    double Area();
};

#endif //JIMP_EXERCISES_SQUARECLASS_H
