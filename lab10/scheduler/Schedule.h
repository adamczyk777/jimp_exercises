//
// Created by Tay on 5/23/2017.
//

#ifndef JIMP_EXERCISES_SCHEDULE_H
#define JIMP_EXERCISES_SCHEDULE_H

#include<vector>

class Schedule { // caly harmonogram
public:
    Schedule OfTeacher(int teacher_id) const; // wylicza fragment harmonogramu dla danego nauczyciela
    Schedule OfRoom(int room_id) const; // wylicza harmonogram dla danej sali
    Schedule OfYear(int year) const; // wylicza harmonogram dla danego roku studiów (1. 2. itd)
    std::vector<int> AvailableTimeSlots(int n_time_slots) const; // zwraca wolne terminy dla zajec
};

#endif //JIMP_EXERCISES_SCHEDULE_H
