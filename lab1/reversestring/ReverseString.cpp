//
// Created by adamjaku on 28.02.17.
//

#include "ReverseString.h"
#include <iostream>
#include <string>

using namespace std;

string ReverseString(string str) {
    if (str.length() <= 1) {

        return str;
    }
    else {

        return ReverseString(str);
    }
}
