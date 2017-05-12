//
// Created by adamc on 09.05.2017.
//

#ifndef JIMP_EXERCISES_BUILDING_H
#define JIMP_EXERCISES_BUILDING_H


#include "Serializable.h"
#include "Room.h"
#include <vector>
//#include <reference>

namespace academia {

    class Building : public Serializable {
    // array of rooms
    public:
        Building(int id, const std::string &name, const std::vector<Room> &rooms);

        void Serialize(Serializer * serializer);

    private:
        int id;
        std::string name;
        std::vector<Room> rooms;
    };
}


#endif //JIMP_EXERCISES_BUILDING_H
