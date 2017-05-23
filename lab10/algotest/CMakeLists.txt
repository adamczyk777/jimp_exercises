
project(algo)

set(HEDEAR_FILES Algo.h)
set(SOURCE_FILES Algo.cpp)

add_library(libalgo STATIC ${SOURCE_FILES})
target_include_directories(libalgo PUBLIC .)

add_executable(algo ${SOURCE_FILES} main.cpp ../scheduler/main.cpp ../scheduler/Scheduler.cpp ../scheduler/Scheduler.h ../scheduler/SchedulingItem.cpp ../scheduler/SchedulingItem.h ../scheduler/Schedule.cpp ../scheduler/Schedule.h ../scheduler/Exceptions.h ../scheduler/GreedyScheduler.cpp ../scheduler/GreedyScheduler.h)

target_link_libraries(algo libalgo)

