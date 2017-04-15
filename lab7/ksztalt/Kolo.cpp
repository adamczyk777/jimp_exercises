//
// Created by adamc on 15.04.2017.
//

#include "Kolo.h"

void Kolo::rysuj() const {
    Ksztalt::rysuj();
    //implementation here!!!
}

Kolo::Kolo(double radius) : radius(radius) {
}

Kolo::Kolo() {}

Kolo::~Kolo() {

}

double Kolo::getRadius() const {
    return radius;
}

void Kolo::setRadius(double radius) {
    Kolo::radius = radius;
}


