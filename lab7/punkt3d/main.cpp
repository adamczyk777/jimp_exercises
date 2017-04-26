//
// Created by adamc on 15.04.2017.
//
#include "Point.h"
#include "Point3D.h"


int main() {

    Point point{2, 2};
    Point3D point3d{2, 4, 3};

    cout << point.Distance(point3d) << endl;

    // Liczy odleglosc na plaszyznie czyli traktuje punkt 3d jako 2d polimorfizm yeah xD

    Point3D p3d(1, 2, 3);
    cout << p3d << endl;

    // wypisuje tak jak poprzednio tylko 2 wspolrzedne znowu widzimy ze szczegolniejszy obiekt jest takze tym ogolniejszym

    return 0;
}

