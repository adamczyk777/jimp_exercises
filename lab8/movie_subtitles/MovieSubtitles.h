#ifndef JIMP_EXERCISES_SUBTITLES_H
#define JIMP_EXERCISES_SUBTITLES_H

//Everything is stored in one file because of tests
//that essentially require this, and we did not want to edit them

#include <string>
#include <sstream>
#include <regex>
#include <iostream>
#include <istream>

using namespace std;
using namespace std::literals;

namespace moviesubs {

    class MovieSubtitles {
        /*
         * Base Class that holds subtitle shifting methods
         */
    public:
        MovieSubtitles();

        virtual void ShiftAllSubtitlesBy(int delay, int framerate, stringstream *input, stringstream *output);

    private:

    };

    class SubRipSubtitles : public MovieSubtitles {
        /*
         * Sub class of MovieSubtitles class
         * should be used to handle subtitles of SubRip format only
         */
    public:
        SubRipSubtitles();

        void ShiftAllSubtitlesBy(int delay, int framerate, stringstream *input, stringstream *output) override;

    private:

    };

    class MicroDvdSubtitles : public MovieSubtitles {
        /*
         * Sub Class of MovieSubtitles
         * should be used to handle subtitles only of MicroDVD format
         */
    public:
        MicroDvdSubtitles();

    private:
        void ShiftAllSubtitlesBy(int delay, int framerate, stringstream *input, stringstream *output) override;

    private:

    };

//    Throwables :
    class NegativeFrameAfterShift {

    };

    class SubtitleEndBeforeStart {

    };

    class InvalidSubtitleLineFormat {

    };

    class OutOfOrderFrames {

    };

    class MissingTimeSpecification {

    };
}

#endif //JIMP_EXERCISES_SUBTITLES_H
