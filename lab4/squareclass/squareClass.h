//
// Created by Tay on 3/21/17.
//
#include <iostream>
#include "Point.h"
#include <math.h>

class Square {
public:
    Point a;
    Point b;
    Point c;
    Point d;

    double Square::Circumference() {
        if((b.GetX() != a.GetX())) {
            return 4*abs(b.GetX() - a.GetX());
        }
        return 4*abs(a.GetX() - d.GetX());
    }
    double Square::Area() {
        if((b.GetX() != a.GetX())) {
            return abs(b.GetX() - a.GetX())*abs(b.GetX() - a.GetX());
        }
        return abs(a.GetX() - d.GetX())*abs(a.GetX() - d.GetX());
    }
};
