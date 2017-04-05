//
// Created by adamc on 02.04.2017.
//

#ifndef JIMP_EXERCISES_MATRIX_H
#define JIMP_EXERCISES_MATRIX_H

#include <complex>
#include <string>
#include <vector>
#include <iostream>


using std::string;
using std::complex;
using std::stringstream;
using std::cout;
using std::endl;
using std::pair;


namespace algebra {
    class Matrix {

    private:
        complex<double> **matrixTab;
        int rows;
        int cols;

    public:
        Matrix();

        Matrix(int rows, int cols);

        Matrix(complex<double> **matrixTab);

        Matrix(string matrix);

        ~Matrix();

        complex<double> getValue(int col, int row);

        void setValue(int col, int row, complex<double> value);

        string Print();

        pair<size_t, size_t> Size();

        Matrix(const std::initializer_list<std::vector<std::complex<double> > > &list);

        Matrix add(Matrix m2);

        Matrix sub(Matrix m2);

        Matrix pow(int power);

        Matrix mul(Matrix m2);

        Matrix div(Matrix m2);
    };
}

using namespace algebra;

#endif //JIMP_EXERCISES_MATRIX_H
