
project(algotest)

set(HEDEAR_FILES Algo.h)
set(SOURCE_FILES Algo.cpp)

add_library(libalgotest STATIC ${SOURCE_FILES})
target_include_directories(libalgorithms PUBLIC .)

add_executable(algotest ${SOURCE_FILES} main.cpp)

target_link_libraries(algotest libalgotest)

