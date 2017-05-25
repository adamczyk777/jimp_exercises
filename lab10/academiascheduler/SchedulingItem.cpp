//
// Created by Tay on 5/23/2017.
//

#include "SchedulingItem.h"

namespace academia {
    SchedulingItem::SchedulingItem(int course_id, int teacher_id, int room_id, int time_slot, int year) :
            course_id{course_id}, teacher_id{teacher_id}, room_id{room_id}, time_slot{time_slot}, year{year} {}


    // Getters for Shedulingitem properties

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