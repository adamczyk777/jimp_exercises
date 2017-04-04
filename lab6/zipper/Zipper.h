//
// Created by Tay on 4/4/17.
//

#ifndef JIMP_EXERCISES_ZIPPER_H
#define JIMP_EXERCISES_ZIPPER_H

#include <string>
#include <vector>
#include <utility>

class Zipper {
public:
    static std::pair<std::string, int> zip(std::vector<std::string> a, std::vector<int> b);
};

#endif //JIMP_EXERCISES_ZIPPER_H
