//
// Created by jadamczyk on 06.06.17.
//

#ifndef JIMP_EXERCISES_ARABICROMAN_H
#define JIMP_EXERCISES_ARABICROMAN_H
#include <iostream>
#include <string>

using std::string;

class ArabicRoman {

public:
    static string toRoman(int arabic);

    static int toArabic(std::string roman);
};


#endif //JIMP_EXERCISES_ARABICROMAN_H
