//
// Created by adamc on 28.03.2017.
//

#include "Marsjanin.h"

Marsjanin::liczbaMarsjan = 0;

void incrementMartians() const {
    Marsjanin::liczbaMarsjan++;
}
void decrementMartians() const {
    Marsjanin::liczbaMarsjan--;
}
void attack() const {
    std::cout << "atakujemy" << endl;
}
void hide() const {
    std::cout << "chowamy sie" << endl;
}