//
// Created by Tay on 5/23/2017.
//

#include <algorithm>
#include "Schedule.h"

namespace academia {

    std::size_t Schedule::Size() const {
        return schedule.size();
    }

    Schedule Schedule::OfTeacher(int teacher_id) const {
        Schedule filtered{}; // tworzymy nowy obiekt
        std::copy_if(schedule.begin(), schedule.end(), std::back_inserter(filtered.schedule), // kopiujemy schedule do filtered ale tylko te, ktrorych teacher_id zgadza sie z podanym (filtrujemy)
                     [teacher_id](const SchedulingItem &s) {return s.TeacherId() == teacher_id; });
        return filtered;

    }

    Schedule Schedule::OfRoom(int room_id) const { // analogicznie do poprzedniej metody
        Schedule filtered{};
        std::copy_if(schedule.begin(), schedule.end(), std::back_inserter(filtered.schedule),
                     [room_id](const SchedulingItem &s) {return s.RoomId() == room_id; });
        return filtered;

    }

    Schedule Schedule::OfYear(int year) const { // analogicznie do poprzedniej metody
        Schedule filtered{};
        std::copy_if(schedule.begin(), schedule.end(), std::back_inserter(filtered.schedule),
                     [year](const SchedulingItem &s) {return s.RoomId() == year; });
        return filtered;

    }

    std::vector<int> Schedule::AvailableTimeSlots(int n_time_slots) const {
        std::vector<int> time;
        for(int i=1; i <= n_time_slots; ++i) {
            if (std::none_of(schedule.begin(), schedule.end(),
                             [i](const SchedulingItem &s) { return s.TimeSlot() == i; })) {
                time.push_back(i);
            }
        }
        return time;
    }


    const SchedulingItem &Schedule::operator[](std::size_t i) const {
        return schedule[i];
    }

    void Schedule::InsertScheduleItem(const SchedulingItem &item) {
        schedule.push_back(item);
    }


}