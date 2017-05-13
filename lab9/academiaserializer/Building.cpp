//
// Created by adamc on 09.05.2017.
//

#include "Building.h"

void academia::Building::Serialize(academia::Serializer *serializer) {
    serializer->Header("building");
    serializer->IntegerField("id", this->id);
    serializer->endingLine("id");
    serializer->StringField("name", this->name);
    serializer->endingLine("name");
    //serializer->ArrayField("rooms", this->rooms); TODO
    serializer->Footer("building");
}

academia::Building::Building(int id, const std::string &name,
                             const std::vector<academia::Room> &rooms) : id(id), name(name), rooms(rooms) {}
