//
// Created by adamjaku on 28.02.17.
//

#include "ReverseString.h"

string reverse(string str) {
    if (str.length() <= 1) {

        return str;
    }
    else {

        return reverse(str.substr(1)) + str[0];
    }
}
