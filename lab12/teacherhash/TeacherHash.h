//
// Created by Tay on 6/11/2017.
//

#ifndef JIMP_EXERCISES_ACADEMIATEACHERHASH_H
#define JIMP_EXERCISES_ACADEMIATEACHERHASH_H

#include <string>

namespace academia {
    class TeacherId {
    public:
        TeacherId(const int &value) : id{value} {}

        operator int() const { return id; }

    private:
        int id;
    };

    class Teacher {
    public:
      /*  Teacher(const TeacherId &id, const std::string &name, const std::string &department) {
            this->id = id;
            this->name = name;
            this->department = department;
        }*/

      Teacher(const TeacherId &id, const std::string &name, const std::string &department);

        // getters, have to change default getters name, because TDD:
        const TeacherId &Id() const;
        const std::string &Name() const;
        const std::string &Department() const;

        // operators:
        bool operator==(const Teacher &second) const;
        bool operator!=(const Teacher &second) const;

    private:
        TeacherId id;
        std::string name;
        std::string department;
    };

    class TeacherHash {
    public:
        TeacherHash() {}

        size_t operator()(const Teacher &teacher) const;
    };
}


#endif //JIMP_EXERCISES_ACADEMIATEACHERHASH_H
