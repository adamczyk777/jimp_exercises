//
// Created by Tay on 5/23/2017.
//

#include "Logger.h"

template<class T>
void Logger::Debug(T object) {
    cout << "Debug:" + object << endl;
}

template<class T>
void Logger::Error(T object) {
    cout << "Error: " + object << endl;
}

template<class T>
void Logger::Warning(T object) {
    cout << "Warning: " + object << endl;
}

template<class T>
void Logger::Info(T object) {
    cout << "Info: " + object << endl;
}

