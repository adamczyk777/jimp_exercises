//
// Created by adamc on 09.05.2017.
//

#include "Building.h"

namespace academia {
    void academia::Building::Serialize(Serializer *serializer) {
        serializer->Header("building");
        serializer->IntegerField("id", this->id);
        serializer->endingLine("id");
        serializer->StringField("name", this->name);
        serializer->endingLine("name");
        serializer->ArrayField("rooms", this->rooms); //TODO
        serializer->Footer("building");
    }
}
