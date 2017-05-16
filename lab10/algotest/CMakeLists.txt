
project(algotest)

set(HEDEAR_FILES Algorithms.h)
set(SOURCE_FILES Algorithms.cpp)

add_library(libalgorithms STATIC ${SOURCE_FILES})
target_include_directories(libalgorithms PUBLIC .)

add_executable(algorithms ${SOURCE_FILES} main.cpp)

target_link_libraries(algorithms libalgorithms)

