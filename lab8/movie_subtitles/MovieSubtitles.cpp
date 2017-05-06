////
//// Created by Tay on 4/27/17.
////

#include "MovieSubtitles.h"

using namespace moviesubs;
using std::string;
using std::regex;

//Constructors:
MovieSubtitles::MovieSubtitles() {}

SubRipSubtitles::SubRipSubtitles() {}

MicroDvdSubtitles::MicroDvdSubtitles() {}


//ShiftSubtitles Method definitions:
virtual void MovieSubtitles::ShiftAllSubtitlesBy(int delay, int framerate, stringstream *input, stringstream *output) {

}

void SubRipSubtitles::ShiftAllSubtitlesBy(int delay, int framerate, stringstream *input, stringstream *output) {
    MovieSubtitles::ShiftAllSubtitlesBy(delay, framerate, input, output);

}

void MicroDvdSubtitles::ShiftAllSubtitlesBy(int delay, int framerate, stringstream *input, stringstream *output) {
    MovieSubtitles::ShiftAllSubtitlesBy(delay, framerate, input, output);

    string currentLine;
    string startFrame;
    int startingFrameNumber = 0;
    string endFrame;
    int endingFrameNumber = 0;
    regex phrse{R"((\{)(\w+)(\}))"};
    smatch matches;
    string subtitle;





}
