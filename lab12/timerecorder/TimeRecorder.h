//
// Created by Tay on 6/10/2017.
//

#ifndef JIMP_EXERCISES_TIMERECORDER_H
#define JIMP_EXERCISES_TIMERECORDER_H

#include <chrono>
#include <tuple>

namespace profiling {
    template<class T>
    auto TimeRecorder(const T &object) {
        auto TimeStart = std::chrono::system_clock::now();

        auto ToReturn = object();

        auto TimeEnd = std::chrono::system_clock::now();

        std::chrono::duration<double, std::milli> difference = TimeEnd - TimeStart;

        double time = difference.count();

        return std::make_pair(ToReturn, time);
    };
}


#endif //JIMP_EXERCISES_TIMERECORDER_H
