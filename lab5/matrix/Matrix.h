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
using std::vector;


namespace algebra {
    class Matrix {

    private:
        vector<vector<std::complex<double>>> matrixTab;
        int rows;
        int cols;

    public:
        Matrix();
        Matrix(int rows, int cols);
        ~Matrix();
        complex<double> getValue(int col, int row) const;
        void setValue(int col, int row, complex<double> value);
        string Print() const;

        pair<size_t, size_t> Size();

        Matrix(const std::initializer_list<std::vector<std::complex<double> > > &list);

        Matrix Add(Matrix m2) const;

        Matrix Sub(Matrix m2) const;

        Matrix Pow(int power) const;

        Matrix Mul(Matrix m2) const;

        Matrix Div(Matrix m2) const;
    };
}

using namespace algebra;

#endif //JIMP_EXERCISES_MATRIX_H
