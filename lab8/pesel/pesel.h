//
// Created by adamc on 25.04.2017.
//

#ifndef JIMP_EXERCISES_PESEL_H
#define JIMP_EXERCISES_PESEL_H

#include <string>

class pesel {
public:
    pesel(const std::string pesel);

    bool validatePesel(std::string);

private:
    std::string number;
};


#endif //JIMP_EXERCISES_PESEL_H
