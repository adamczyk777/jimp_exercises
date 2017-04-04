
project(point)

set(HEDEAR_FILES point.h)
set(SOURCE_FILES point.cpp)

add_library(libpoint STATIC ${SOURCE_FILES} ../zipper/main.cpp ../zipper/Zipper.cpp ../zipper/Zipper.h)
target_include_directories(libpoint PUBLIC .)

add_executable(point ${SOURCE_FILES} main.cpp)

target_link_libraries(point libpoint)

