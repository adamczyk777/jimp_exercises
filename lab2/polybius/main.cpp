//
// Created by jadamczyk on 3/7/17.
//

#include "Polybius.h"

int main() {
    string test = "message";
    string test_2 = "32154343112215";
    cout << PolybiusCrypt(test) << endl;
    cout << PolybiusDecrypt(test_2) << endl;

    return 0;
}