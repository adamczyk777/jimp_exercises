//
// Created by Tay on 5/23/2017.
//

#include "Scheduler.h"

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

namespace academia {
    SchedulingItem::SchedulingItem(int course_id, int teacher_id, int room_id, int time_slot, int year) :
            course_id{course_id}, teacher_id{teacher_id}, room_id{room_id}, time_slot{time_slot}, year{year} {}


    int SchedulingItem::CourseId() const {
        return course_id;
    }

    int SchedulingItem::TeacherId() const {
        return teacher_id;
    }

    int SchedulingItem::RoomId() const {
        return room_id;
    }

    int SchedulingItem::TimeSlot() const {
        return time_slot;
    }

    int SchedulingItem::Year() const {
        return year;
    }
}

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