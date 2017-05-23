
project(mean)

set(HEDEAR_FILES Mean.h)
set(SOURCE_FILES Mean.cpp)

add_library(libmean STATIC ${SOURCE_FILES} ../sum/Sum.cpp ../sum/Sum.h ../value/Value.cpp ../value/Value.h ../sum/main.cpp ../value/main.cpp ../repository/Repository.cpp ../repository/Repository.h ../repository/main.cpp ../factorymethod/FactoryMethod.cpp ../factorymethod/FactoryMethod.h ../factorymethod/main.cpp)
target_include_directories(libmean PUBLIC .)

add_executable(mean ${SOURCE_FILES} main.cpp)

target_link_libraries(mean libmean)

