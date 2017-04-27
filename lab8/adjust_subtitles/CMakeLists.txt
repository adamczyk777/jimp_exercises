
project(adjustsubtitles)

set(HEDEAR_FILES Subtitles.h)
set(SOURCE_FILES Subtitles.cpp)

add_library(libadjustsubtitles STATIC ${SOURCE_FILES})
target_include_directories(libadjustsubtitles PUBLIC .)

add_executable(adjustsubtitles ${SOURCE_FILES} main.cpp)

target_link_libraries(adjustsubtitles libadjustsubtitles)

