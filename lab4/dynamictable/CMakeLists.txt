
project(dynamictable)

set(HEDEAR_FILES DynamicTable.h)
set(SOURCE_FILES DynamicTable.cpp)

add_library(libdynamictable STATIC ${SOURCE_FILES})
target_include_directories(libdynamictable PUBLIC .)

add_executable(dynamictable ${SOURCE_FILES} main.cpp ../netstemplateengine/SimpleTemplateEngine.cpp ../netstemplateengine/SimpleTemplateEngine.h ../netstemplateengine/main.cpp)

target_link_libraries(dynamictable libdynamictable)

