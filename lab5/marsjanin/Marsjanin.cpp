//
// Created by adamc on 28.03.2017.
//

#include "Marsjanin.h"

int Marsjanin::liczbaMarsjan = 0;

void Marsjanin::incrementMartians() const {
    Marsjanin::liczbaMarsjan++;
}
void Marsjanin::decrementMartians() const {
    Marsjanin::liczbaMarsjan--;
}
void Marsjanin::attack() const {
    std::cout << "atakujemy" << std::endl;
}
void Marsjanin::hide() const {
    std::cout << "chowamy sie" << std::endl;
}

Marsjanin::Marsjanin() {
    Marsjanin::liczbaMarsjan++;
}
