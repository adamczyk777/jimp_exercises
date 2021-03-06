//Definicja znajduje się w pliku Point.cpp
#include <cmath>
#include <ostream>
#include "Point.h"

using ::std::ostream;
using ::std::endl;
using ::std::pow;
using ::std::sqrt;
using ::std::cout;

/* Aby wskazać, ze definicja funkcji dotyczy metody danej klasy
  stosujemy tzw. operator zasięgu - "::"
*/

//Specjalna inicjalizacja zmiennych. Zmienne są inicjowane
//nim zostanie wywołane ciało konstruktora
Point::Point():x_(0),y_(0){
    cout << "Konstruktor bezparametrowy" << endl;
}

Point::Point(double x, double y){
    cout << "Konstruktor parametrowy" << endl;
    x_ = x;
    y_ = y;
}

Point::~Point(){
    cout << "Destruktor! Nic nie robie, bo nie musze zwalniać pamięci!";
    cout << endl;
}

double Point::Distance(Point inny){
    return sqrt(pow(GetX()-inny.GetX(),2)+pow(GetY()-inny.GetY(),2));
}

void Point::ToString(ostream *out){
    (*out) << "(" << GetX() << ";" << GetY() << ")";
}

void Point::ToString(std::ostream *out) const {

}
double Point::Distance(const Point &other) const {

}

double Point::GetX() const {
    return this->x_;
}

double Point::GetY() const {
    return this->y_;
}

void Point::SetX(double x) {
    this->x_ = x;
}

void Point::SetY(double y) {
    this->y_ = y;
}