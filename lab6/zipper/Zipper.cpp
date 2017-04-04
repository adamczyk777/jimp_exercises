//
// Created by Tay on 4/4/17.
//

#include "Zipper.h"

std::pair<std::string, int>  Zipper::zip(std::vector<std::string> a, std::vector<int> b) { // bierze dwie listy rownej dlugosci i zwraca pare
    std::pair<std::string, int> zipped; // para to jest pojedyncza para, potrzebuje wektora par
    if(a.size() == b.size()) {
        for (int i = 0; i < a.size();i++) { //
            zipped.first = a[i];
            zipped.second = b[i];
        }
        return zipped;
    }
    return NULL;
}
