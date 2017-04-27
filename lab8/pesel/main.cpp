//
// Created by adamc on 25.04.2017.
//

#include "Pesel.h"
#include <iostream>

int main() {
    try {
        academia::pesel test("96041511876");
        //pesel test2("9604151187E");
        academia::pesel test3("9604151187");
    } catch(academia::WrongPeselSize) {
        std::cout << "Inserted PESEL has wrong size: " << "expected 11."; // TODO: wstawic tutaj zmienne (pola?) tego, co jest zle np tu rozmiar podanego pesela
    } catch(academia::WrongPeselCharacter) {
        std::cout << "Pesel can contain only numbers.";
    } catch(academia::WrongPeselControlSum) {
        std::cout << "Wrong control sum.";
    }
    return 0;
}