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

class TestClass{
public:
    TestClass() {};
    void test() {
        cout << "dziala" << endl;
    }
};

int main() {

    int i = factoryMethod<int>();
    cout << i << endl;
    auto object = factoryMethod<TestClass>();
    object.test();
    return 0;
}

