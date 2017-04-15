//
// Created by adamc on 15.04.2017.
//
#include "Point.h"
#include "Point3D.h"


int main() {

    Point point{2, 2};
    Point3D point3d{2, 2, 2};

    cout << point.Distance(point3d) << endl;

    //Kompilator wyrzuca blad  error: 'Point' is an inaccessible base of 'Point3D'

    return 0;
}

