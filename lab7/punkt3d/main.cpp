//
// Created by adamc on 15.04.2017.
//
#include "Point.h"
#include "Point3D.h"


int main() {

    Point point{2, 2};
    Point3D point3d{2, 2, 2};

    cout << point.Distance(point3d) << endl;

    //Kompilator wyrzuca blad

    Point3D p3d(1,2,3);
//    cout << p3d << endl;

    //Takze otrzymujemy blad, w klasie Punkt nie ma przeciazanego operatora, wiec nie jest to zaskoczeniem ze
    // ostream nie przyjmuje argumentu typu Point3D

    return 0;
}

