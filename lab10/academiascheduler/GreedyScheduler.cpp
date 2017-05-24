//
// Created by Tay on 5/24/2017.
//
#include <algorithm>
#include "Exceptions.h"
#include "GreedyScheduler.h"

namespace academia {
    Schedule GreedyScheduler::PrepareNewSchedule(const std::vector<int> &rooms,
                                                 const std::map<int, std::vector<int>> &teacher_courses_assignment,
                                                 const std::map<int, std::set<int>> &courses_of_year,
                                                 int n_time_slots) {
        Schedule s{};
        for (auto &teacher : teacher_courses_assignment) {
            for (auto &course : teacher.second) {
                bool assigned = false;
                for (auto &year : courses_of_year) {
                    if (std::find(year.second.begin(), year.second.end(), course) != year.second.end()) {
                        for (auto &room : rooms) {
                            for (int time = 1; time<=n_time_slots; ++time) {
                                if (Contains(s.OfTeacher(teacher.first).AvailableTimeSlots(n_time_slots), time) &&
                                    Contains(s.OfYear(year.first).AvailableTimeSlots(n_time_slots), time) &&
                                    Contains(s.OfRoom(room).AvailableTimeSlots(n_time_slots), time)) {
                                    assigned = true;
                                    s.InsertScheduleItem(SchedulingItem{course,teacher.first, room, time, year.first});
                                }
                                if (assigned) break;
                            }
                            if (assigned) break;
                        }
                    }
                    if (assigned) break;
                }
                if (!assigned) throw NoViableSolutionFound();
            }
        }
        return s;
    }


    bool GreedyScheduler::Contains(const std::vector<int> &v, int value) {
        auto result = std::find(std::begin(v), std::end(v), value);
        return result != std::end(v);
    }


}

