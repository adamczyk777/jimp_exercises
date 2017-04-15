//
// Created by adamc on 15.04.2017.
//
#ifndef PROJECTNAME_PATH_POINT_H_
#define PROJECTNAME_PATH_POINT_H_

#include <cmath>
#include <iostream>
#include "Point.h"

using ::std::endl;
using ::std::pow;
using ::std::sqrt;
using ::std::cout;

class Point {
public:
    //Konstruktor bezparametrowy
    Point();
    //Konstruktor parametrowy
    Point(double x, double y);
    //Destruktor wykonywany przed zwolnieniem pamięci
    ~Point();

    //Metody nie modyfikujące stanu obiektu (const na końcu metody)
    //nie mogą zmodyfikować tego obiektu.
    void ToString(std::ostream *out) const;
    double Distance(const Point &other) const;


    //metody akcesorów są publiczne i tylko w przy ich pomocy
    //można się dostać z zewnątrz do pól klasy
    double GetX() const;
    double GetY() const;

    //metody seterów pozwalające zmienić stan obiektu
    //po jego zainicjalizowaniu
    void SetX(double x);
    void SetY(double y);
private:
    //w przeciwienstwie do pythona C++ wymaga jawnej deklaracji składowych pól klasy:
    double x_, y_;
};

#endif  // PROJECTNAME_PATH_POINT_H_