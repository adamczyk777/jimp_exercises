//
// Created by jadamczyk on 06.06.17.
//

#include "ArabicRoman.h"
#include <map>
#include<iostream>
#include <sstream>

int ArabicRoman::ToArabic(std::string roman) {
    int arabic = 0;
    std::map<std::string, int> roman_numerals;
    roman_numerals["M"] = 1000;
    roman_numerals["CM"] = 900;
    roman_numerals["D"] = 500;
    roman_numerals["CD"] = 400;
    roman_numerals["C"] = 100;
    roman_numerals["XC"] = 90;
    roman_numerals["L"] = 50;
    roman_numerals["XL"] = 40;
    roman_numerals["X"] = 10;
    roman_numerals["IX"] = 9;
    roman_numerals["V"] = 5;
    roman_numerals["IV"] = 4;
    roman_numerals["I"] = 1;

    std::string current = roman.substr(0, 2);

    while (current[1] != '\0') {
        if (roman_numerals.count(current)) {
            std::cout << "test";
        }
    }
    return arabic;
}

string ArabicRoman::toRoman(int arabic) {
    std::stringstream roman;

    if (arabic < 1 || arabic > 3999)
        return "Invalid Roman Number Value";

    while (arabic >= 1000) {
        roman << "M";
        arabic -= 1000;        }
    while (arabic >= 900) {
        roman << "CM";
        arabic -= 900;
    }
    while (arabic >= 500) {
        roman << "D";
        arabic -= 500;
    }
    while (arabic >= 400) {
        roman << "CD";
        arabic -= 400;
    }
    while (arabic >= 100) {
        roman<< "C";
        arabic -= 100;
    }
    while (arabic >= 90) {
        roman << "XC";
        arabic -= 90;
    }
    while (arabic >= 50) {
        roman << "L";
        arabic -= 50;
    }
    while (arabic >= 40) {
        roman << "XL";
        arabic -= 40;
    }
    while (arabic >= 10) {
        roman << "X";
        arabic -= 10;
    }
    while (arabic >= 9) {
        roman << "IX";
        arabic -= 9;
    }
    while (arabic >= 5) {
        roman << "V";
        arabic -= 5;
    }
    while (arabic >= 4) {
        roman << "IV";
        arabic -= 4;
    }
    while (arabic >= 1) {
        roman << "I";
        arabic -= 1;
    }

    return roman.str();
}
