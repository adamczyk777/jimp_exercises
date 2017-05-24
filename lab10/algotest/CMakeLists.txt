
project(algo)

set(HEDEAR_FILES Algo.h)
set(SOURCE_FILES Algo.cpp)

add_library(libalgo STATIC ${SOURCE_FILES})
target_include_directories(libalgo PUBLIC .)

add_executable(algo ${SOURCE_FILES} main.cpp ../academiascheduler/main.cpp ../academiascheduler/Scheduler.cpp ../academiascheduler/Scheduler.h ../academiascheduler/SchedulingItem.cpp ../academiascheduler/SchedulingItem.h ../academiascheduler/Schedule.cpp ../academiascheduler/Schedule.h ../academiascheduler/Exceptions.h ../academiascheduler/GreedyScheduler.cpp ../academiascheduler/GreedyScheduler.h ../academiascheduler/SchedulerInterface.h)

target_link_libraries(algo libalgo)

