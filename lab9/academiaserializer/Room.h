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
            COMPUTER_LAB = 0,
            LECTURE_HALL,
            CLASSROOM
        };

        void Serialize(Serializer * serializer);

        Room(int id, const std::string &name, Type type);

    private:
        std::string enum_array[3] = {"COMPUTER_LAB", "LECTURE_HALL", "CLASSROOM"};
        int id;
        std::string name;
        Type type;
    };
}


#endif //JIMP_EXERCISES_ROOM_H
