project(exceptions_example)

set(SOURCE_FILES main.cpp)

add_library(libexceptions_example STATIC ${SOURCE_FILES})
target_include_directories(libexceptions_example PUBLIC .)

add_executable(exceptions_example ${SOURCE_FILES} main.cpp ../movie_subtitles/main.cpp)

target_link_libraries(exceptions_example libexceptions_example)

