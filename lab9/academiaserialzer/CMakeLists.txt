
project(serialization)

set(HEDEAR_FILES Serialization.h Room.h Building.h Serialization.h)
set(SOURCE_FILES Serialization.cpp Room.cpp Building.cpp)

add_library(libserialization STATIC ${SOURCE_FILES})
target_include_directories(libserialization PUBLIC .)

add_executable(serialization ${SOURCE_FILES} main.cpp)

target_link_libraries(serialization libserialization)

