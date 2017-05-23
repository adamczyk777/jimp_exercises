//
// Created by Tay on 5/23/2017.
//

#include <iostream>
#include <vector>
#include <complex>

template<class T>
T Mean(std::vector<T> &vec) {
    T mean = 0;
    T n = 0;
    for(int i=0;i<vec.size();i++) {
        mean += vec[i];
        n+=1; // ++ nie zadziala
    }
    return mean / n;
}

int main() {
    std::vector<int> a;
    std::vector<double> b;
    std::vector<std::complex<double>> c;

    for(int i=0;i<10;i++) {
        a.emplace_back(i);
    }

    for(int i=0;i<10;i++) {
        b.emplace_back(i + 0.2);
    }

    for(int i=0;i<10;i++) {
        c.emplace_back(std::complex<double>(i*2,1));
    }

    std::cout << Mean(a) << std::endl;
    std::cout << Mean(b) << std::endl;
    std::cout << Mean(c) << std::endl;

    return 0;
}
