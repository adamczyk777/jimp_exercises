//
// Created by jadamczyk on 06.06.17.
//

#include "ArabicRoman.h"
#include <map>
#include<iostream>

int ArabicRoman::ToArabic(std::string roman) {
    int arabic = 0;
    std::map roman_numerals<std::string, int>;
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

    std::string current = roman.substr(0,2);

    while(current[1] != '\0') {
            if(roman_numerals.count(current)) {
                std::cout << "test";
        }
    }
    return arabic;
}

double ArabicRoman::toRoman(int arabic) {
    int roman;

    return roman;
}
