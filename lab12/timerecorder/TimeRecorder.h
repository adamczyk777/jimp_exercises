//
// Created by Tay on 6/10/2017.
//

#ifndef JIMP_EXERCISES_TIMERECORDER_H
#define JIMP_EXERCISES_TIMERECORDER_H

#include <chrono>
#include <utility>


namespace profiling {

        template<typename T>
        std::pair<T, double> TimeRecoder(T object) {
            auto time_start = std::chrono::high_resolution_clock::now();
            auto object_return = (object)();
            auto time_end = std::chrono::high_resolution_clock::now();
            double measured_time = std::chrono::duration<double, std::milli>(time_end - time_start).count();
            return std::make_pair(object_return, measured_time);
        }
}

#endif //JIMP_EXERCISES_TIMERECORDER_H
