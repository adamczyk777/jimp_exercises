//
// Created by adamc on 15.04.2017.
//

#include <iostream>
#include "Trojkat.h"


Trojkat::Trojkat() {}

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c) {}

void Trojkat::rysuj() const {
    Ksztalt::rysuj();
    int i,space,rows=5,k=0;
    for(i=1;i<=rows;++i)
    {
        for(space=1;space<=rows-i;++space)
        {
            std::cout<<"  ";
        }
        while(k!=2*i-1)
        {
            std::cout<<"* ";
            ++k;
        }
        k=0;
        std::cout<<"\n";
    }
}

double Trojkat::getA() const {
    return a;
}

void Trojkat::setA(double a) {
    Trojkat::a = a;
}

double Trojkat::getB() const {
    return b;
}

void Trojkat::setB(double b) {
    Trojkat::b = b;
}

double Trojkat::getC() const {
    return c;
}

void Trojkat::setC(double c) {
    Trojkat::c = c;
}
