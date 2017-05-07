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
            int combined_time1 = delay + stoi(line.substr(0, 2)) * 3600000 + stoi(line.substr(3, 2)) * 60000
                                 + stoi(line.substr(6, 2)) * 1000 + stoi(line.substr(9, 3));
            int combined_time2 = delay + stoi(line.substr(17, 2)) * 3600000 + stoi(line.substr(20, 2)) * 60000
                                 + stoi(line.substr(23, 2)) * 1000 + stoi(line.substr(26, 3));

            // Obliczam czasy do wstawienia dla specyfikatora czasu rozpoczcia
            int milliseconds = combined_time1 % 1000;
            combined_time1 -= combined_time1 % 1000;
            combined_time1 /= 1000;
            int seconds = combined_time1 % 60;
            combined_time1 -= combined_time1 % 60;
            combined_time1 /= 60;
            int minutes = combined_time1 % 60;
            combined_time1 -= combined_time1 % 60;
            combined_time1 /= 60;
            int hours = combined_time1;

            // Podmiana odpowiednich czesci pierwszego specyfikatora czasu:
            if (milliseconds == 0) {
                line.replace(9, 3, "000");
            } else if (milliseconds < 10) {
                line.replace(9, 3, "00" + to_string(milliseconds));
            } else if (milliseconds < 100) {
                line.replace(9, 3, "0" + to_string(milliseconds));
            } else {
                line.replace(9, 3, to_string(milliseconds));
            }

            if (seconds == 0) {
                line.replace(6, 2, "00");
            } else if (seconds < 10) {
                line.replace(6, 2, "0" + to_string(seconds));
            } else {
                line.replace(6, 2, to_string(seconds));
            }

            if (minutes == 0) {
                line.replace(3, 2, "00");
            } else if (minutes < 10) {
                line.replace(3, 2, "0" + to_string(minutes));
            } else {
                line.replace(3, 2, to_string(minutes));
            }

            if (hours == 0) {
                line.replace(0, 2, "00");
            } else if (hours < 10) {
                line.replace(0, 2, "0" + to_string(hours));
            } else {
                line.replace(0, 2, to_string(hours));
            }

            //Obliczam czasy dla specyfikatora czasu zakonczenia wyswietlania:
            milliseconds = combined_time2 % 1000;
            combined_time2 -= combined_time2 % 1000;
            combined_time2 /= 1000;
            seconds = combined_time2 % 60;
            combined_time2 -= combined_time2 % 60;
            combined_time2 /= 60;
            minutes = combined_time2 % 60;
            combined_time2 -= combined_time2 % 60;
            combined_time2 /= 60;
            hours = combined_time2;

            // Podmiana odpowiednich czesci drugiego specyfikatora czasu:
            if (milliseconds == 0) {
                line.replace(26, 3, "000");
            } else if (milliseconds < 10) {
                line.replace(26, 3, "00" + to_string(milliseconds));
            } else if (milliseconds < 100) {
                line.replace(26, 3, "0" + to_string(milliseconds));
            } else {
                line.replace(26, 3, to_string(milliseconds));
            }

            if (seconds == 0) {
                line.replace(23, 2, "00");
            } else if (seconds < 10) {
                line.replace(23, 2, "0" + to_string(seconds));
            } else {
                line.replace(23, 2, to_string(seconds));
            }

            if (minutes == 0) {
                line.replace(20, 2, "00");
            } else if (minutes < 10) {
                line.replace(20, 2, "0" + to_string(minutes));
            } else {
                line.replace(20, 2, to_string(minutes));
            }

            if (hours == 0) {
                line.replace(17, 2, "00");
            } else if (hours < 10) {
                line.replace(17, 2, "0" + to_string(hours));
            } else {
                line.replace(17, 2, to_string(hours));
            }


            *output << line << endl;
        } else if (regex_match(line,
                               wrong_pattern)) {          // looking if there is correct looking pattern, but it is illegal

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
