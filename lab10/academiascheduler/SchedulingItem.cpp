//
// Created by Tay on 5/23/2017.
//

#include "SchedulingItem.h"

namespace academia {
    SchedulingItem::SchedulingItem(int course, int teacher, int room, int time, int y) :
            course_id{course}, teacher_id{teacher}, room_id{room}, time_slot{time}, year{y} {}


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