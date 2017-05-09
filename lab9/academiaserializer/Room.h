//
// Created by adamc on 09.05.2017.
//

#ifndef JIMP_EXERCISES_ROOM_H
#define JIMP_EXERCISES_ROOM_H


#include "Serializable.h"

namespace academia {

    class Room : public Serializable {
    public:
        enum class Type {
            COMPUTER_LAB
        };

        void Serialize(Serializer * serializer);

        Room(int id, const std::string &name, Type type);

    private:
        int id;
        std::string name;
        Type type;
    };
}


#endif //JIMP_EXERCISES_ROOM_H
