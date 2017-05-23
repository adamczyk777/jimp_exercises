//
// Created by Tay on 5/23/2017.
//

#include <iostream>
#include <vector>

template<class T>
T Mean(std::vector<T> &vec) {
    T mean = 0;
    for(int i=0;i<vec.size();i++) {
        mean += vec[i];
    }
    return mean / vec.size();
}

int main() {
    std::vector<int> a;
    std::vector<double> b;

    for(int i=0;i<10;i++) {
        a.emplace_back(i);
    }

    for(int i=0;i<10;i++) {
        b.emplace_back(i + 0.2);
    }

    std::cout << Mean(a) << std::endl;
    std::cout << Mean(b);
    return 0;
}
