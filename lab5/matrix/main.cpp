//
// Created by adamc on 02.04.2017.
//

#include "Matrix.h"
#include <iostream>

using std::cout;
using std::endl;


int main() {
    Matrix m1{{1.0i, 0., 0.}, {0., 1.0i, 0.}, {0., 0., 1.0i}};
    Matrix m2{{7. + 1.0i, 0., 0.}, {0., 1.0i, 8.}, {15. + 2.0i, 0. + 3.0i, 4. + 1.0i}};
    Matrix m3{{1. + 3.0i, 2. + 2.0i}, {3. + 1.0i, 4. + 6.0i}, {5. + 5.i, 6. + 4.0i}};
    Matrix m4{{7. + 1.0i, 12. + 1.3i, 1.5 + 3.7i, 1.0i}, {15. + 2.0i, 2. + 4.6i, 2.1 + 3.8i, 1.4 + 0.2i}};

    cout << "Macierz pierwsza: " << m1.Print() << endl;
    cout << "Macierz druga: " << m2.Print() << endl;
    cout << "Macierz druga: " << m3.Print() << endl;
    cout << "Macierz druga: " << m4.Print() << endl;

    cout << "Dodawanie" << (m1.add(m2)).Print() << endl;
    cout << "Odejmowanie" << (m1.sub(m2)).Print() << endl;
    cout << "Mnożenie" << (m1.mul(m2)).Print() << endl;
    cout << "Dzielenie" << (m1.div(m2)).Print() << endl;
    cout << "Potęgowanie" << (m1.pow(2)).Print() << endl;
    cout << "Potęgowanie" << (m2.pow(2)).Print() << endl;
}