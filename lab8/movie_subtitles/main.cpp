////
//// Created by Tay on 4/27/17.
////

#include "MovieSubtitles.h"

int main() {
    stringstream in {"{0}{250}TEXT\n{260}{300}NEWLINE\n"};
    stringstream out;
    moviesubs::MicroDvdSubtitles test;
    try {
        test.ShiftAllSubtitlesBy(10000, 30, &in, &out);
    }
    catch(moviesubs::InvalidSubtitleLineFormat) {
        std::cout << "Invalid subtitle line format.";
    }
    catch(moviesubs::SubtitleEndBeforeStart) {
        std::cout << "Subtitle ends before it starts.";
    }
    std::cout << out.str();
    return 0;
}