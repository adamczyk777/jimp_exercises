//
// Created by Tay on 5/23/2017.
//
#include <iostream>
#include <complex>
#include "Sum.h"

// przeniosłem template tutaj z powodu błędu "relocation truncated to fit"

template<typename T>
T Sum( const T &left, const T &right) {
    return left + right;
}

int main() {
    std::cout << Sum(2.1,3.2) << std::endl;
    std::cout << Sum(2,3) << std::endl;
    std::cout << Sum(std::complex<double>(1.3,2.1), std::complex<double>(2.4,3.0)) << std::endl;
    return 0;
}