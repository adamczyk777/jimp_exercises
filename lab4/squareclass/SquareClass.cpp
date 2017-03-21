//
// Created by Tay on 3/21/17.
//
#include "Point.h"
#include "SquareClass.h"

double Square::Circumference() {
    return 4* sqrt((a.GetX() - b.GetX())*(a.GetX() - b.GetX() +  (a.GetY() - b.GetY())*(a.GetY() - b.GetY())));

}
double Square::Area() {
    return (sqrt((a.GetX() - b.GetX())*(a.GetX() - b.GetX() +  (a.GetY() - b.GetY())*(a.GetY() - b.GetY())) * sqrt((a.GetX() - b.GetX())*(a.GetX() - b.GetX() +  (a.GetY() - b.GetY())*(a.GetY() - b.GetY())))));
}
