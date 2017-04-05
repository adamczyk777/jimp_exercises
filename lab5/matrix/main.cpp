//
// Created by adamc on 02.04.2017.
//

#include "Matrix.h"
#include <iostream>

using std::cout;
using std::endl;


int main() {
    Matrix m1{{1.0i, 0., 0.}, {0., 1.0i, 0.}, {0., 0., 1.0i}};
    Matrix m2{{1.0i, 0., 0.}, {0., 1.0i, 0.}, {0., 0., 1.0i}};

    cout << "Macierz pierwsza: " << m1.Print() << endl;
    cout << "Macierz druga: " << m2.Print() << endl;

//    cout << "Dodawanie" << (m1.add(m2)).Print() << endl;
//    cout << "Odejmowanie" << (m1.sub(m2)).Print() << endl;
//    cout << "Mnożenie" << (m1.mul(m2)).Print() << endl;
//    cout << "Dzielenie" << (m1.div(m2)).Print() << endl;
//    cout << "Potęgowanie" << (m1.pow(2)).Print() << endl;
//    cout << "Potęgowanie" << (m2.pow(2)).Print() << endl;
}