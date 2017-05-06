////
//// Created by Tay on 4/27/17.
////

#include "MovieSubtitles.h"

using namespace moviesubs;
using std::string;
using std::stringstream;
using std::istream;
using std::regex;
using std::getline;
using std::stoi;

//Constructors:
MovieSubtitles::MovieSubtitles() {}

SubRipSubtitles::SubRipSubtitles() {}

MicroDvdSubtitles::MicroDvdSubtitles() {}


//ShiftSubtitles Method definitions:
void MovieSubtitles::ShiftAllSubtitlesBy(int delay, int framerate, stringstream *input, stringstream *output) {

}

void SubRipSubtitles::ShiftAllSubtitlesBy(int delay, int framerate, stringstream *input, stringstream *output) {
    MovieSubtitles::ShiftAllSubtitlesBy(delay, framerate, input, output);
    string line; //string for storing single line from stream
    regex pattern{R"([0-9]{2}\:[0-9]{2}\:[0-9]{2}\,[0-9]{3} --> [0-9]{2}\:[0-9]{2}\:[0-9]{2}\,[0-9]{3})"};
    regex wrong_pattern{R"(..\:..\:..\,... --> ..\:..\:..\,...)"};
    while (std::getline(*input, line)) {
        if (regex_match(line, pattern)) {                       // matching correct patter first
            int combined_time = delay + stoi(line.substr(0,2)) * 3600000 + stoi(line.substr(3,2))*60000
            + stoi(line.substr(6,2)) * 1000 + stoi(line.substr(9,3));
            line.replace(0, 2, )
            *output << line << endl;
        } else if (regex_match(line, wrong_pattern)) {          // looking if there is correct looking pattern, but it is illegal

        } else {                                                // adding line to output
            *output << line << endl;
        }
    }
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
