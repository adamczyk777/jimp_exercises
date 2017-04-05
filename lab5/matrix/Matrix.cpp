//
// Created by adamc on 02.04.2017.
//

#include "Matrix.h"


Matrix::Matrix() {}

Matrix::~Matrix() {

}

Matrix::Matrix(int rows, int cols) : rows(rows), cols(cols) {
    this->rows = rows;
    this->cols = cols;
    this->matrixTab = new complex<double> *[rows];
    for (int i = 0; i < rows; i++) {
        matrixTab[i] = new complex<double>[cols];
    }
}

Matrix::Matrix(string matrix) {
    matrix = matrix.substr(1, matrix.length() - 1);
    stringstream ss(matrix);
    string element = "";
    while (std::getline(ss, element, ';')) {
        element = element.substr(1, element.length());
        stringstream ss2(element);
        string element2 = "";
        while (ss2, element2, ' ') {

        }
    }
}

Matrix::Matrix(complex<double> **matrixTab) : matrixTab(matrixTab) {
    this->matrixTab = matrixTab;
}

complex<double> Matrix::getValue(int col, int row) {
    return this->matrixTab[row][col];
}

void Matrix::setValue(int col, int row, complex<double> value) {
    this->matrixTab[row][col] = value;
}

string Matrix::Print() {
    string result = "[";
    for (int r = 0; r < this->rows; r++) {
        for (int c = 0; c < this->cols; c++) {
            result += std::to_string((int) this->matrixTab[r][c].real());
            if (this->matrixTab[r][c].imag() != 0.) {
                result += "i";
                result += std::to_string((int) this->matrixTab[r][c].imag());
            }
            result += ", ";
        }
        result = result.substr(0, result.length() - 2);
        result += "; ";
    }
    result = result.substr(0, result.length() - 2);
    result += "]";
    return result;
}

Matrix::Matrix(const std::initializer_list<std::vector<std::complex<double> > > &list) {
    this->rows = (int) list.size();
    this->cols = (int) list.begin()[0].size();
    this->matrixTab = new complex<double> *[this->rows];
    for (int s = 0; s < this->cols; s++) {
        this->matrixTab[s] = new complex<double>[this->cols];
    }
    for (int r = 0; r < this->rows; r++) {
        for (int c = 0; c < this->cols; c++) {
            this->matrixTab[r][c] = list.begin()[r][c];
        }
    }
}

Matrix Matrix::add(Matrix m2) {
    return Matrix();
}

Matrix Matrix::sub(Matrix m2) {
    return Matrix();
}

Matrix Matrix::pow(int power) {
    return Matrix();
}

Matrix Matrix::mul(Matrix m2) {
    return Matrix();
}

Matrix Matrix::div(Matrix m2) {
    return Matrix();
}

