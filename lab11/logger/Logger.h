//
// Created by Tay on 5/23/2017.
//

#ifndef JIMP_EXERCISES_LOGGER_H
#define JIMP_EXERCISES_LOGGER_H

#include <iostream>
#include <string>

using namespace std;

class Logger {
public:
    template<class T>
    static void Debug(T object);

    template<class T>
    static void Error(T object);

    template<class T>
    static void Warning(T object);

    template<class T>
    static void Info(T object);
};


#endif //JIMP_EXERCISES_LOGGER_H