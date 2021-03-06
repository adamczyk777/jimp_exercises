//
// Created by Tay on 5/23/2017.
//

#ifndef JIMP_EXERCISES_SCHEDULINGITEM_H
#define JIMP_EXERCISES_SCHEDULINGITEM_H

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
        // (np. dla 20: 1 ⇒ pon 8:00-10:00, 2 ⇒ pon 10:00-12:00, … 20 ⇒ pią 14:00-16:00)
        int year;
    };
}

#endif //JIMP_EXERCISES_SCHEDULINGITEM_H
