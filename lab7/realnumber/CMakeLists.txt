
project(realnumber)

set(HEDEAR_FILES RealNumber.h)
set(SOURCE_FILES RealNumber.cpp)

add_library(librealnumber STATIC ${SOURCE_FILES})
target_include_directories(librealnumber PUBLIC .)

add_executable(realnumber ${SOURCE_FILES} main.cpp)

target_link_libraries(realnumber librealnumber)

