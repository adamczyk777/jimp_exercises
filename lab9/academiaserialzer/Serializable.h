//
// Created by adamc on 09.05.2017.
//

#ifndef JIMP_EXERCISES_SERIALIZABLE_H
#define JIMP_EXERCISES_SERIALIZABLE_H


class Serializable {
public:
    virtual void Serialize(Serializer * serializer) = 0;
};


#endif //JIMP_EXERCISES_SERIALIZABLE_H
