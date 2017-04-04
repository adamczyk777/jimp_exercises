//
// Created by Tay on 4/4/17.
//
#include "Zipper.h"

using std::string;
using std::vector;

int foo(const vector <string> &v1, const vector <int> &v2) {
    for (const std::pair<string, int> &p : Zipper::zip(v1, v2)) { // cos jak auto zmienna : lista
        if (p.first == "elo") {
            return p.second + 4;
        }
    }
    return 0;
}

int main() {
    return 0;
}