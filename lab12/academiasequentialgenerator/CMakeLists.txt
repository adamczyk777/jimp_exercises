
project(academiasequentialgenerator)

set(HEDEAR_FILES AcademiaSequentialGenerator.h)
set(SOURCE_FILES AcademiaSequentialGenerator.cpp)

add_library(libacademiasequentialgenerator STATIC ${SOURCE_FILES})
target_include_directories(libacademiasequentialgenerator PUBLIC .)

add_executable(academiasequentialgenerator ${SOURCE_FILES} main.cpp)

target_link_libraries(academiasequentialgenerator libacademiasequentialgenerator)

