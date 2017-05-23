//
// Created by Tay on 5/23/2017.
//

#include <string>
#include <iostream>
using namespace std;

template<class T>
T factoryMethod() {
    return T{};
}

class Dupa{
public:
    Dupa() {};
    void test() {
        cout << "dziala" << endl;
    }
};

int main() {

    auto object = factoryMethod<Dupa>();
    object.test();
    return 0;
}

