//
// Created by Tay on 5/23/2017.
//

#ifndef JIMP_EXERCISES_REPOSITORY_H
#define JIMP_EXERCISES_REPOSITORY_H

#include <string>
#include <iostream>

template<class T>
class Repository {
public:
    virtual int Size() = 0;

    virtual T operator[] = 0;

    virtual int NextId() = 0;

    virtual T FindBy() = 0;
};

#endif //JIMP_EXERCISES_REPOSITORY_H
