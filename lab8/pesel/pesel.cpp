//
// Created by adamc on 25.04.2017.
//

#include "pesel.h"

pesel::pesel(std::string pesel) {
    if(validatePesel) {
        this->number = pesel;
    }
}

bool pesel::validatePesel(std::string pesel) {
        // dlugosc 11 znakow:
        try {
            pesel.size();
        } catch()
        // tylko cyfry
        //
        // suma kontrolna
    return true;
