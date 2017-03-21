
project(squareclass)

set(HEDEAR_FILES SquareClass.h)
set(SOURCE_FILES SquareClass.cpp)

add_library(libsquareclass STATIC ${SOURCE_FILES})
target_include_directories(libsquareclass PUBLIC .)

add_executable(squareclass ${SOURCE_FILES} main.cpp)

target_link_libraries(squareclass libsquareclass)

