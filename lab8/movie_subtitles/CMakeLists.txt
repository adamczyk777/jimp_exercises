
project(moviesubtitles)

set(HEDEAR_FILES MovieSubtitles.h)
set(SOURCE_FILES MovieSubtitles.cpp)

add_library(libmoviesubtitles STATIC ${SOURCE_FILES})
target_include_directories(libmoviesubtitles PUBLIC .)

add_executable(moviesubtitles ${SOURCE_FILES} main.cpp SubRipSubtitles.cpp SubRipSubtitles.h MicroDvdSubtitles.cpp MicroDvdSubtitles.h)

target_link_libraries(moviesubtitles libmoviesubtitles)

