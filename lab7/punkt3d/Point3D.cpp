//
// Created by adamc on 15.04.2017.
//

#include "Point3D.h"

Point3D::Point3D() {
    cout << "Konstruktor Bezparametrowy punktu3d" << endl;

}

Point3D::Point3D(double x, double y, double z) : Point(x, y) {
    this->z_ = z;
    cout << "Konstruktor Punktu3D, uzywa konstruktora zwyklego punktu" << endl;
}

Point3D::~Point3D() {
    cout << "Destruktor P3D! Nic nie robie, bo nie musze zwalniać pamięci!" << endl;

}

double Point3D::Distance(const Point3D &other) const {
    return sqrt(pow(GetZ() - other.GetZ(), 2) + pow(GetX() - other.GetX(), 2) + pow(GetY() - other.GetY(), 2));
}

double Point3D::GetZ() const {
    return z_;
}

void Point3D::SetZ(double z) {
    Point3D::z_ = z;
}
