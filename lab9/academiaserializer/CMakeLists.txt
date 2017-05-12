
project(serialization)

set(HEDEAR_FILES Serialization.h Room.h Building.h Serializable.h JsonSerializer.h XmlSerializer.h)
set(SOURCE_FILES Serializable.cpp Room.cpp Building.cpp Serializable.cpp JsonSerializer.cpp XmlSerializer.cpp)

add_library(libserialization STATIC ${SOURCE_FILES})
target_include_directories(libserialization PUBLIC .)

add_executable(serialization ${SOURCE_FILES} main.cpp)

target_link_libraries(serialization libserialization)

