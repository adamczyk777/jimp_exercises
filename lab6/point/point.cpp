//
// Created by Tay on 4/4/17.
//

//Definicja w Point.cpp
#include "point.h"
#include <iomanip>
#include <iostream>

using ::std::istream;

//Helper functions:
void CheckNextChar(char c, istream& is) {
    int next_char = is.peek();
    if (next_char != c) {
        throw std::runtime_error("invalid character");
    }
    is.ignore();
}

void IgnoreWhitespace(istream& is) {
    is >> ws;
}

double ReadNumber(istream& is) {
    double d;
    is >> d;
    return d;
}


// Właściwa definicja, obydwa argumenty funkcji nie
//są zadeklarowane jako const, bo obydwa są modyfikowane
//wewnątrz funkcji (STL nie używa naszej konwencji z przekazywaniem
//przez wskaźnik)
istream& operator>>(istream & input, Punkt& p){
    CheckNextChar('(', &input);
    p.SetX(ReadNumber(&input));
    CheckNextChar(',', &input);
    IgnoreWhitespace(&input);
    p.SetY(ReadNumber(&input));
    CheckNextChar(')', &input);
    return input;      // Umożliwia cin >> a >> b >> c;
}