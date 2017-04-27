//
// Created by adamc on 25.04.2017.
//

#include "Pesel.h"
#include <iostream>

int main() {
    try {
        academia::Pesel test("96041511876");
        //Pesel test2("9604151187E");
        academia::Pesel test3("9604151187");
    } catch(academia::InvalidPeselLength) {
        std::cout << "Inserted PESEL has wrong size: " << "expected 11."; // TODO: wstawic tutaj zmienne (pola?) tego, co jest zle np tu rozmiar podanego pesela
    } catch(academia::InvalidPeselCharacter) {
        std::cout << "Pesel can contain only numbers.";
    } catch(academia::InvalidPeselChecksum) {
        std::cout << "Wrong control sum.";
    }
    return 0;
}