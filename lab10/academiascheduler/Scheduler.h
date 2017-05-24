//
// Created by Tay on 5/23/2017.
//

#ifndef JIMP_EXERCISES_SCHEDULER_H
#define JIMP_EXERCISES_SCHEDULER_H

// this file contains includes only for testing purposes

/*#include "Schedule.h"
#include "Exceptions.h"
#include "SchedulingItem.h"
#include "SchedulerInterface.h"
#include "GreedyScheduler.h"*/
#include <vector>
#include <set>
#include <map>
#include <stdexcept>
#include <algorithm>


namespace academia {
    class NoViableSolutionFound : public std::runtime_error {
    public:
        NoViableSolutionFound() : std::runtime_error("can't make schedule") {}
    };

}

namespace academia {
    class SchedulingItem { // pojedynczy przedmiot szkolny
    public:
        SchedulingItem(int course_id, int teacher_id, int room_id, int time_slot, int year);

        int CourseId() const;
        int TeacherId() const;
        int RoomId() const;
        int TimeSlot() const;
        int Year() const;

    private:
        int course_id;
        int teacher_id;
        int room_id;
        int time_slot; // kazde 2h, nie zachodza, od pon 8:00 przez caly tydzien
        int year;
    };
}

namespace academia {
    class Schedule { // caly harmonogram
    public:
        Schedule() {};
        Schedule OfTeacher(int teacher_id) const; // wylicza fragment harmonogramu dla danego nauczyciela
        Schedule OfRoom(int room_id) const; // wylicza harmonogram dla danej sali
        Schedule OfYear(int year) const; // wylicza harmonogram dla danego roku studiów (1. 2. itd)
        std::vector<int> AvailableTimeSlots(int n_time_slots) const; // zwraca wolne terminy dla zajec
        std::size_t Size() const;
        void InsertScheduleItem(const SchedulingItem &item);

        const SchedulingItem& operator[](std::size_t i) const;

    private:
        std::vector<SchedulingItem> schedule;
    };
}

namespace academia {
    class Scheduler { // interfejs ukladacza planu
    public:
        virtual Schedule PrepareNewSchedule(const std::vector<int> &rooms,
                                            const std::map<int, std::vector<int>> &teacher_courses_assignment,
                                            const std::map<int, std::set<int>> &courses_of_year, int n_time_slots) = 0;
    };
}

namespace academia {
    class GreedyScheduler : public Scheduler {
    public:
        Schedule PrepareNewSchedule(const std::vector<int> &rooms,
                                    const std::map<int, std::vector<int>> &teacher_courses_assignment,
                                    const std::map<int, std::set<int>> &courses_of_year, int n_time_slots);
    private:
        bool Contains(const std::vector<int> &v, int value);

    };
}

#endif //JIMP_EXERCISES_SCHEDULER_H
