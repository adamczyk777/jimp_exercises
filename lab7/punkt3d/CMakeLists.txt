
project(punkt3d)

set(HEDEAR_FILES Point3D.h Point.h)
set(SOURCE_FILES Point3D.cpp Point.cpp)

add_library(libpunkt3d STATIC ${SOURCE_FILES})
target_include_directories(libpunkt3d PUBLIC .)

add_executable(punkt3d ${SOURCE_FILES} main.cpp)

target_link_libraries(punkt3d libpunkt3d)

