//
// Created by Tay on 5/23/2017.
//

#ifndef JIMP_EXERCISES_SCHEDULINGITEM_H
#define JIMP_EXERCISES_SCHEDULINGITEM_H


class SchedulingItem { // pojedynczy przedmiot szkolny
public:
private:
    int course_id;
    int teacher_id;
    int room_id;
    int time_slot; // kazde 2h, nie zachodza, od pon 8:00 przez caly tydzien
    int year;
};


#endif //JIMP_EXERCISES_SCHEDULINGITEM_H
