//
// Created by Tay on 6/11/2017.
//

#ifndef JIMP_EXERCISES_ACADEMIASEQUENTIALGENERATOR_H
#define JIMP_EXERCISES_ACADEMIASEQUENTIALGENERATOR_H

template <class IDType, class PrimitiveType>
class SequentialIdGenerator {
public:
    SequentialIdGenerator(const PrimitiveType &counter = PrimitiveType()) : counter{counter} {}
    IDType NextValue();
private:
    PrimitiveType counter;
};

template <class IDType, class PrimitiveType>
IDType SequentialIdGenerator<IDType, PrimitiveType>::NextValue() {
    IDType NewID = IDType(counter);
    ++counter;
    return NewID;
}


#endif //JIMP_EXERCISES_ACADEMIASEQUENTIALGENERATOR_H
