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
    this->matrixTab = new complex<double>[rows][cols];
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

