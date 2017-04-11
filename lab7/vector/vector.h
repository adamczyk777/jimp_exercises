//
// Created by Tay on 4/11/17.
//

#ifndef JIMP_EXERCISES_VECTOR_H
#define JIMP_EXERCISES_VECTOR_H

#include <vector>

class extended_vector : public std::vector {
public:
    void jednorone(int value);
    void zinkrementacja(int value, int step=1);
    void losowo();
    void zkwadratem(int a=1, int b=1);




};

#endif //JIMP_EXERCISES_VECTOR_H
