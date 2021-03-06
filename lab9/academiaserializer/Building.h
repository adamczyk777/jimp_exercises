//
// Created by adamc on 09.05.2017.
//

#ifndef JIMP_EXERCISES_BUILDING_H
#define JIMP_EXERCISES_BUILDING_H


#include "Serializable.h"
#include "Room.h"
#include <vector>
#include <functional>
//#include <reference>

namespace academia {

    class Building : public Serializable {
    // array of rooms
    public:
        Building(int id, std::string name, const std::vector<std::reference_wrapper<const Serializable>> &r) : id{id}, name{name}, rooms{r} {}

        void Serialize(Serializer * serializer) const;

    private:
        int id;
        std::string name;
        std::vector<std::reference_wrapper<const Serializable>> rooms;
    };
}


#endif //JIMP_EXERCISES_BUILDING_H
