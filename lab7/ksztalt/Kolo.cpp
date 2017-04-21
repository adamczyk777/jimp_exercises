//
// Created by adamc on 15.04.2017.
//

#include <iostream>
#include "Kolo.h"

void Kolo::rysuj() const {
    Ksztalt::rysuj();
    int i,j,k;

    for(i=0;i<9;i++)
    {
        std::cout<<" ";
    }
    for(j=0;j<3;j++)
    {
        std::cout<<"*";
    }
    for(k=0;k<9;k++)
    {
        std::cout<<" ";
    }

    std::cout<<std::endl;
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


