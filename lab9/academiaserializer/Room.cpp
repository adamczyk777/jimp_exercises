//
// Created by adamc on 09.05.2017.
//

#include "Room.h"

namespace academia {
    Room::Room(int id, const std::string &name, Room::Type type) : id(id), name(name), type(type) {}

    void Room::Serialize(Serializer *serializer) {

    }

}