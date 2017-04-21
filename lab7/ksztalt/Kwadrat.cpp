//
// Created by adamc on 15.04.2017.
//

#include "Kwadrat.h"
#include <iostream>

void Kwadrat::rysuj() const {
    Ksztalt::rysuj();
    // First let's draw the top "wall", which is a solid
    // row of 80 stars, one at a time
    for (int column = 0; column < 80; ++column)
    {
        std::cout << "*";
    }
    // now print a carraige return, so we can start printing on the next line
    std::cout << "\n";

    // Now we're going to print the sides.
    // There are 8 rows here.  Each row is a star, followed by
    // 78 spaces, followed by another star and a carraige return.
    for (int row = 0; row < 8; ++row)
    {
        // print the left "wall"
        std::cout << "*";
        // now print 78 spaces
        for (int column = 0; column < 78; ++column)
        {
            std::cout << " ";
        }
        // finally print the right "wall" and a carraige return
        std::cout << "*\n";
        // continue the for loop to print the next row
    }

    // Once the loop is done, we can print the bottom wall the same way we printed the top one.
    for (int column = 0; column < 80; ++column)
    {
        std::cout << "*";
    }
    // now print a carraige return, so we can start printing on the next line
    std::cout << "\n";

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
