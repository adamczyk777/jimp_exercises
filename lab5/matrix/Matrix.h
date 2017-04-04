//
// Created by adamc on 02.04.2017.
//

#ifndef JIMP_EXERCISES_MATRIX_H
#define JIMP_EXERCISES_MATRIX_H

#include <complex>
#include <string>

using std::string;
using std::complex;
using std::stringstream;

class Matrix {

private:
    complex<double> *matrixTab;
    int rows;
    int cols;

public:
    Matrix();

    Matrix(int rows, int cols);

    Matrix(string matrix);

    ~Matrix();

};

#endif //JIMP_EXERCISES_MATRIX_H
