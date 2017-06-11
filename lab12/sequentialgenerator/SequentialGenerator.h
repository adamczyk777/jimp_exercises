//
// Created by Tay on 6/11/2017.
//

#ifndef JIMP_EXERCISES_ACADEMIASEQUENTIALGENERATOR_H
#define JIMP_EXERCISES_ACADEMIASEQUENTIALGENERATOR_H

template<class IDType, class PrimitiveType>
class SequentialIdGenerator {

public:
    SequentialIdGenerator(const PrimitiveType &counter = PrimitiveType()) : counter{counter} {}

    IDType NextValue() {
        IDType NewID = IDType(counter);
        ++counter;
        return NewID;
    }

private:
    PrimitiveType counter;
};


#endif //JIMP_EXERCISES_ACADEMIASEQUENTIALGENERATOR_H
