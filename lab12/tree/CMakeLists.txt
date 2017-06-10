
project(tree)

set(HEDEAR_FILES tree.h)
set(SOURCE_FILES tree.cpp)

add_library(libtree STATIC ${SOURCE_FILES} ../academiasequentialgenerator/main.cpp ../academiateacherhash/main.cpp ../timerecorder/main.cpp)
target_include_directories(libtree PUBLIC .)

add_executable(tree ${SOURCE_FILES} main.cpp)

target_link_libraries(tree libtree)