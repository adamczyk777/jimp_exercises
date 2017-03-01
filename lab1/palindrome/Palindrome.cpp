//
// Created by adamjaku on 28.02.17.
//
#include "Palindrome.h"

bool is_palindrome(std::string str) {
    int length = str.length();
    int i = 0;
    int j = length - 1;
    while(i <= length / 2 && j >= length / 2) {
        if(str[i] != str[j]) return false;
        ++i;
        j--;
    }
    return true;
}
