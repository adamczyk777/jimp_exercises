//
// Created by Tay on 5/23/2017.
//

#ifndef JIMP_EXERCISES_SCHEDULINGITEM_H
#define JIMP_EXERCISES_SCHEDULINGITEM_H

namespace academia {
    class SchedulingItem { // pojedynczy przedmiot szkolny
    public:
    private:
        int course_id;
        int teacher_id;
    public:
        int CourseId() const;

        int TeacherId() const;

        int RoomId() const;

        int TimeSlot() const;

        int Year() const;

    private:
        int room_id;
        int time_slot; // kazde 2h, nie zachodza, od pon 8:00 przez caly tydzien
        int year;
    };
}

#endif //JIMP_EXERCISES_SCHEDULINGITEM_H
