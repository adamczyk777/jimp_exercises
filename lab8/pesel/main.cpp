//
// Created by adamc on 25.04.2017.
//

#include "pesel.h"
#include <iostream>

int main() {
    try {
        pesel test("96041511876");
        pesel test2("9604151187E");
        pesel test3("9604151187");
    } catch(WrongPeselSize) {
        std::cout << "Inserted PESEL has wrong size:" << "expected 11.";
    } catch(WrongPeselCharacter) {
        std::cout << "Pesel can contain only numbers.";
    } catch(WrongPeselControlSum) {
        std::cout << "Wrong control sum.";
    }
    return 0;
}