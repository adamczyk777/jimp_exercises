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

// musialem dac wszystko do jednego pliku, gdyz jesli podziele po plikach wyrzuca blad.

namespace academia {
    class NoViableSolutionFound : public std::runtime_error {
    public:
        NoViableSolutionFound() : std::runtime_error("Can't create schedule") {}
    };

}

namespace academia {
    class SchedulingItem { // Single item to be scheduled, one lesson
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
        int time_slot;  // slot where certain lesson fall in
        // (np. dla 20: 1 ⇒ pon 8:00-10:00, 2 ⇒ pon 10:00-12:00, … 20 ⇒ pią 14:00-16:00)
        int year;
    };
}

namespace academia {
    class Schedule { // Complete Timetable for whole week and all lessons
    public:
        Schedule() {};

        /* Returns complete schedule for a single teacher with certain id */
        Schedule OfTeacher(int teacher_id) const;
        /* Returns complete schedule for a single room with certain id */
        Schedule OfRoom(int room_id) const;
        /* Returns complete schedule for certain year students with certain id */
        Schedule OfYear(int year) const;
        /* Returns list of free time slots*/
        std::vector<int> AvailableTimeSlots(int n_time_slots) const;
        /* Returns plan/schedule size */
        std::size_t Size() const;

        void InsertScheduleItem(const SchedulingItem &item);

        const SchedulingItem &operator[](std::size_t i) const;

    private:
        // List that holds Scheduleitem objects
        std::vector<SchedulingItem> schedule;
    };
}

namespace academia {
    // Scheduler Interface, contract for how to write a timetable/plan/schedule scheduler
    class Scheduler {
    public:
        // Function that should calculate and return more/less optimal schedule blueprint
        virtual Schedule PrepareNewSchedule(const std::vector<int> &rooms,
                                            const std::map<int, std::vector<int>> &teacher_courses_assignment,
                                            const std::map<int, std::set<int>> &courses_of_year, int n_time_slots) = 0;
    };
}

namespace academia {
    // GreedyScheduler Interface, contract for how to write a timetable/plan/schedule scheduler that
    // uses greedy algorithm as it's logic
    class GreedyScheduler : public Scheduler {
    public:
        // Function that should calculate and return more/less optimal schedule blueprint
        Schedule PrepareNewSchedule(const std::vector<int> &rooms,
                                    const std::map<int, std::vector<int>> &teacher_courses_assignment,
                                    const std::map<int, std::set<int>> &courses_of_year, int n_time_slots);

    private:
        bool Contains(const std::vector<int> &v, int value);

    };
}

#endif //JIMP_EXERCISES_SCHEDULER_H
