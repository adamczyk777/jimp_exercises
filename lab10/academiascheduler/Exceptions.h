//
// Created by Tay on 5/24/2017.
//

#ifndef JIMP_EXERCISES_EXCEPTIONS_H
#define JIMP_EXERCISES_EXCEPTIONS_H

#include <stdexcept>

namespace academia {
    class NoViableSolutionFound : public std::runtime_error {
    public:
        NoViableSolutionFound() : std::runtime_error("can't make schedule") {}
    };

}

#endif //JIMP_EXERCISES_EXCEPTIONS_H
