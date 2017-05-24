//
// Created by Tay on 5/24/2017.
//

#ifndef JIMP_EXERCISES_GREEDYSCHEDULER_H
#define JIMP_EXERCISES_GREEDYSCHEDULER_H

#include "SchedulerInterface.h"

namespace academia {
    class GreedyScheduler : Scheduler {
    public:
        Schedule PrepareNewSchedule(const std::vector<int> &rooms,
                                    const std::map<int, std::vector<int>> &teacher_courses_assignment,
                                    const std::map<int, std::set<int>> &courses_of_year, int n_time_slots);
    private:
        bool Contains(const std::vector<int> &v, int value);

    };
}

#endif //JIMP_EXERCISES_GREEDYSCHEDULER_H
