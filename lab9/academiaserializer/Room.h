//
// Created by adamc on 09.05.2017.
//

#ifndef JIMP_EXERCISES_ROOM_H
#define JIMP_EXERCISES_ROOM_H


#include "Serializable.h"

namespace academia {

    class Room : public Serializable {
        void Serialize(Serializer * serializer );

    private:
        int id;
        std::string name;
        std::string type;
    };
}


#endif //JIMP_EXERCISES_ROOM_H
