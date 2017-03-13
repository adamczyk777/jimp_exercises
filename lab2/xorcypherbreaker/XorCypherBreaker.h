//
// Created by jadamczyk on 3/7/17.
//

#ifndef JIMP_EXERCISES_XORCYPHERBREAKER_H
#define JIMP_EXERCISES_XORCYPHERBREAKER_H

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstring>

std::string XorCypherBreaker(const std::vector<char> &cryptogram, // std::string
                             int key_length,
                             const std::vector<std::string> &dictionary);

#endif //JIMP_EXERCISES_XORCYPHERBREAKER_H
