//
// Created by adamc on 11.04.2017.
//

#include <math.h>
#include "Kula.h"

double Kula::pole() {
    return 4/3 * M_PI * pow(r, 3);
}

Kula::Kula(double r, double x, double y, double z) : z(z) {}
