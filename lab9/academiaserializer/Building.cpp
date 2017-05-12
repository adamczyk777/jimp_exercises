//
// Created by adamc on 09.05.2017.
//

#include "Building.h"

academia::Building::Building(int id, const std::string &name, const std::vector<academia::Room> &rooms) : id(id),
                                                                                                          name(name),
                                                                                                          rooms(rooms) {}

void academia::Building::Serialize(academia::Serializer *serializer) {

}
