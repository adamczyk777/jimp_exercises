//
// Created by Tay on 5/23/2017.
//

#include <iostream>
#include <memory>

template<class T>
T value(T *obj) {
    return *obj;
}

int main() {
    std::weak_ptr<int> weak;
    std::shared_ptr<int> shared;
    int *pointer;
    int a = 5;
    weak = std::make_shared<int>(a);
    shared = std::make_shared<int>(a);
    pointer = &a;

    std::cout << *pointer << std::endl;
    std::cout << value(pointer) << std::endl;
    //std::cout << value(weak) << std::endl;
    return 0;
}