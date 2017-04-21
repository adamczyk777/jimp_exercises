//
// Created by adamc on 15.04.2017.
//

#include <iostream>
#include <cmath>
#include "Kolo.h"

void Kolo::rysuj() const {
    Ksztalt::rysuj();
    int circle_radius = 10; // or whatever you want

    for (int i = 0; i <= 2*circle_radius; i++)
    {
        for (int j = 0; j <= 2*circle_radius; j++)
        {
            float distance_to_centre = sqrt((i - circle_radius)*(i - circle_radius) + (j - circle_radius)*(j - circle_radius));
            if (distance_to_centre > circle_radius-0.5 && distance_to_centre < circle_radius+0.5)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
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


