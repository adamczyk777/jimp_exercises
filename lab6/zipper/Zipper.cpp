//
// Created by Tay on 4/4/17.
//

#include "Zipper.h"

std::pair<std::string, int>  Zipper::zip(std::vector<std::string> a, std::vector<int> b) { // bierze dwie listy rownej dlugosci i zwraca pare
    std::vector<std::pair<std::string, int>> zipped;
    if(a.size() == b.size()) {
        for (int i = 0; i < a.size();i++) { //
            zipped[i] = (a[i],b[i]); // to do poprawy :D TODO
        }
        return zipped;
    }
    return NULL;
}
