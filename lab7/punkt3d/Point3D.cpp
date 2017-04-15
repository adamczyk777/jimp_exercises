//
// Created by adamc on 15.04.2017.
//

#include "Point3D.h"
#include <cmath>
#include <ostream>
#include <iostream>

Point3D::Point3D() {}

Point3D::Point3D(double x, double y, double z) : Point(x, y) {
    this->z_ = z;
}

Point3D::~Point3D() : ~Point() {

}

double Point3D::Distance(const Point3D &other) const {
    return sqrt(pow(GetZ() - other.GetZ(), 2) + pow(GetX()-other.GetX(),2)+pow(GetY()-other.GetY(),2));
}

double Point3D::GetZ() const {
    return z_;
}

void Point3D::SetZ(double z) {
    Point3D::z_ = z;
}
