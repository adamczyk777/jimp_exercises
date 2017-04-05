//
// Created by adamc on 02.04.2017.
//

#include "Matrix.h"


Matrix::Matrix() {
    this->rows = 0;
    this->cols = 0;
}

Matrix::~Matrix() {

}

Matrix::Matrix(const std::initializer_list<std::vector<std::complex<double> > > &list) : rows((int) list.size()),
                                                                                         cols((int) (*list.begin()).size()) {
    matrixTab.reserve(rows);

    for (const auto &row : list) {
        matrixTab.emplace_back(row);
    }
}

Matrix::Matrix(int rows, int cols) : rows(rows), cols(cols) {
    matrixTab.reserve(rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrixTab[i].push_back(complex<double>(0, 0));
        }
    }

}

complex<double> Matrix::getValue(int col, int row) const {
    return this->matrixTab[row][col];
}

void Matrix::setValue(int col, int row, complex<double> value) {
    this->matrixTab[row][col] = value;
}

string Matrix::Print() const {
    std::ostringstream resultStream;
    resultStream << "[";
    for (int r = 0; r < this->rows; r++) {
        for (int c = 0; c < this->cols; c++) {
            resultStream << real(matrixTab[r][c]);
            resultStream << "i";
            resultStream << imag(matrixTab[r][c]);
            if (r != rows - 1 && c == cols - 1) {
                resultStream << "; ";
            }
            if (c != cols - 1) {
                resultStream << ", ";
            }
        }
    }
    resultStream << "]";
    return resultStream.str();
}

Matrix Matrix::Add(Matrix m2) const {
    Matrix result = *this;
    if (this->rows == m2.rows && this->cols == m2.cols) {
        for (int r = 0; r < this->rows; r++) {
            for (int c = 0; c < this->cols; c++) {
                result.matrixTab[r][c] = this->matrixTab[r][c] + m2.matrixTab[r][c];
            }
        }
        return result;
    } else {
        cout << "nie da si dodac tych macierzy" << endl;
        return result;
    }
}

Matrix Matrix::Sub(Matrix m2) const {
    Matrix result = *this;
    if (this->rows == m2.rows && this->cols == m2.cols) {
        for (int r = 0; r < this->rows; r++) {
            for (int c = 0; c < this->cols; c++) {
                result.matrixTab[r][c] = this->matrixTab[r][c] - m2.matrixTab[r][c];
            }
        }
        return result;
    } else {
        cout << "nie da si odjac tych macierzy" << endl;
        return result;
    }
}

Matrix Matrix::Pow(int power) const {
    Matrix result;

    if(this->rows == this->cols) {
        result = *this;
        if (power == 1) {
            return result;
        } else if (power == 0) {
            for (int r = 0; r < this->rows; r++) {
                for (int c = 0; c < this->cols; c++ ) {
                    if (r == c) {
                        result.matrixTab[r][c] = complex<double>(1, 0);
                    } else {
                        result.matrixTab[r][c] = complex<double>(0, 0);

                    }
                }
            }
        } else if (power > 1) {
            for (int i = 0; i < power-1; i++) {
                result = result.Mul(*this);
            }
        }
    }
    return result;
}

Matrix Matrix::Mul(Matrix m2) const {
    Matrix result;

    if (this->cols != m2.rows) {
        result.rows = 0;
        result.cols = 0;
    } else {
        result.rows = this->rows;
        result.cols = m2.cols;

        vector<std::complex<double>> rowHolder;

        for (int i = 0; i < this->rows; i++) {
            rowHolder.clear();
            for (int j = 0; j < m2.cols; j++) {
                rowHolder.push_back(complex<double>(0, 0));
            }

            result.matrixTab.push_back(rowHolder);
        }

        for (int r = 0; r < result.rows; r++) {
            for (int c = 0; c < result.cols; c++) {
                for (int x = 0; x < this->cols; x++) {
                    result.matrixTab[r][c] += this->matrixTab[r][x] * m2.matrixTab[x][c];
                }
            }
        }
    }
    return result;


}

Matrix Matrix::Div(Matrix m2) const {
    return Matrix();
}

pair<size_t, size_t> Matrix::Size() {
    pair<size_t, size_t> result = {this->rows, this->cols};
    return result;
}

