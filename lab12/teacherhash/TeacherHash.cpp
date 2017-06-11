//
// Created by Tay on 6/11/2017.
//

#include "TeacherHash.h"

namespace academia {
    bool Teacher::operator!=(const Teacher &second) const {
        return !(id == second.Id() && name == second.Name() && department == second.Department());
    }

    bool Teacher::operator==(const Teacher &second) const {
        return (id == second.Id() && name == second.Name() && department == second.Department());
    }

    const TeacherId &Teacher::Id() const {
        return id;
    }

    const std::string &Teacher::Name() const {
        return name;
    }

    const std::string &Teacher::Department() const {
        return department;
    }

    Teacher::Teacher(const TeacherId &id, const std::string &name, const std::string &department) : id(id), name(name),
                                                                                                    department(
                                                                                                            department) {}

    size_t TeacherHash::operator()(const Teacher &teacher) const {
        return std::hash<int>()(teacher.Id()) + std::hash<std::string>()(teacher.Name()) + std::hash<std::string>()(teacher.Department());
    }
}
