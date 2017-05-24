//
// Created by Tay on 5/24/2017.
//

#ifndef JIMP_EXERCISES_SCHEDULERINTERFACE_H
#define JIMP_EXERCISES_SCHEDULERINTERFACE_H

#include <map>
#include <set>
#include "Schedule.h"

namespace academia {
    class Scheduler { // interfejs ukladacza planu
    public:
        virtual Schedule PrepareNewSchedule(const std::vector<int> &rooms,
                                            const std::map<int, std::vector<int>> &teacher_courses_assignment,
                                            const std::map<int, std::set<int>> &courses_of_year, int n_time_slots) = 0;
    };
}


#endif //JIMP_EXERCISES_SCHEDULERINTERFACE_H
