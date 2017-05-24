//
// Created by Tay on 5/23/2017.
//

#include "SchedulingItem.h"

int academia::SchedulingItem::CourseId() const {
    return course_id;
}

int academia::SchedulingItem::TeacherId() const {
    return teacher_id;
}

int academia::SchedulingItem::RoomId() const {
    return room_id;
}

int academia::SchedulingItem::TimeSlot() const {
    return time_slot;
}

int academia::SchedulingItem::Year() const {
    return year;
}
