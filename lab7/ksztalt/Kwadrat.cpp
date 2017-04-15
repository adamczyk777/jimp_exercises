//
// Created by adamc on 15.04.2017.
//

#include "Kwadrat.h"

void Kwadrat::rysuj() const {
    Ksztalt::rysuj();
    //implementation here!!
}

Kwadrat::Kwadrat(double a, double b) : a(a), b(b) {}

Kwadrat::Kwadrat() {}

Kwadrat::~Kwadrat() {

}

double Kwadrat::getA() const {
    return a;
}

void Kwadrat::setA(double a) {
    Kwadrat::a = a;
}

double Kwadrat::getB() const {
    return b;
}

void Kwadrat::setB(double b) {
    Kwadrat::b = b;
}
