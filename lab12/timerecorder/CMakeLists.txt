
project(timerecorder)

set(HEDEAR_FILES TimeRecorder.h)
set(SOURCE_FILES TimeRecorder.cpp)

add_library(libtimerecorder STATIC ${SOURCE_FILES} ../academiateacherhash/AcademiaTeacherHash.cpp ../academiateacherhash/AcademiaTeacherHash.h ../academiasequentialgenerator/AcademiaSequentialGenerator.cpp ../academiasequentialgenerator/AcademiaSequentialGenerator.h)
target_include_directories(libtimerecorder PUBLIC .)

add_executable(timerecorder ${SOURCE_FILES} main.cpp TimeRecorder.cpp TimeRecorder.h)

target_link_libraries(timerecorder libtimerecorder)

