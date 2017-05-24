//
// Created by Tay on 5/23/2017.
//

#include "Schedule.h"

namespace academia {

    std::size_t Schedule::Size() const {
        return 0;
    }

    std::vector<int> Schedule::AvailableTimeSlots(int n_time_slots) const {
        return std::vector<int>();
    }

    Schedule Schedule::OfTeacher(int teacher_id) const {
        return Schedule();
    }

    Schedule Schedule::OfRoom(int room_id) const {
        return Schedule();
    }

    Schedule Schedule::OfYear(int year) const {
        return Schedule();
    }

    SchedulingItem &Schedule::operator[](std::size_t i) {
        return this->schedule[i];
    }

}