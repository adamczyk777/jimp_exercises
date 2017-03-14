//
// Created by jadamczyk on 14/03/17.
//

#ifndef JIMP_EXERCISES_CCOUNTER_H
#define JIMP_EXERCISES_CCOUNTER_H
#include <string>
#include <memory>
#include <map>
namespace ccounter{
    using std::unique_ptr;
    struct Counter {
        std::map<std::string, int> objects;
    };

    std::unique_ptr<Counter> Init();
    void Inc(std::string key, std::unique_ptr<Counter>* counter);
    int Counts(const std::unique_ptr<Counter> &counter, std::string key);
    void SetCountsTo(std::string key, int value, std::unique_ptr<Counter> *counter);

}
#endif //JIMP_EXERCISES_CCOUNTER_H
