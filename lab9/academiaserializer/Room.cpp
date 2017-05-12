//
// Created by adamc on 09.05.2017.
//

#include "Room.h"

namespace academia {
    Room::Room(int id, const std::string &name, Room::Type type) : id(id), name(name), type(type) {}

    void Room::Serialize(Serializer *serializer) {
        serializer->Header("test");
        serializer->IntegerField("id", this->id);
        serializer->StringField("name", this->name);
        serializer->StringField("type", this->enum_array[(int(this->type))]);
        serializer->Footer("test");
    }

}