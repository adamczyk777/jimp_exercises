project(pesel)

set(HEDEAR_FILES pesel.h)
set(SOURCE_FILES pesel.cpp)

add_library(libpesel STATIC ${SOURCE_FILES})
target_include_directories(libpesel PUBLIC .)

add_executable(pesel ${SOURCE_FILES} main.cpp)

target_link_libraries(pesel libpesel)

