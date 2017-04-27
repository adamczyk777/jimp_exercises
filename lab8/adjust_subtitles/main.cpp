//
// Created by Tay on 4/27/17.
//

// IMO robienie tego obiektowo to jest przerost formy nad trescia.

#include <iostream>
#include <fstream>
#include <string>
#include <regex>

bool is_digits(const std::string &str) { // funkcja sprawdza, czy string zawiera same cyfry
    return str.find_first_not_of("0123456789") == std::string::npos;
}

void delay(char* in, char* out, int delay, int fps) {
    std::ifstream originFile;
    std::ofstream outputFile;
    originFile.open(in); // to chyba samo z siebie rzuci wyjatek jak cos nie pyknie
    outputFile.open(out);
    std::string currentLine;
    std::string startFrame;
    int startingFrameNumber = 0; // tmp
    std::string endFrame;
    int endingFrameNumber = 0; // tmp
    std::regex pharse {R"((\{)(\w+)(\}))"};
    std::smatch matches;
    //int charCounter = 0;
    std::string subtitle;

    while(std::getline(originFile, currentLine)) {
        /*if(currentLine[0] != '{') {
            throw(CorruptedFile);
        }*/
        // czytam od poczatku linii. Jesli pierwszy znak linii to nie { - wywalam exception. Jesli napotkam } lub koniec linii \n przestaje czytac.
        // szukam regexem:
        if(std::regex_search(currentLine, matches, pharse)) { // TODO: uzyc grupowania matches zeby nie musiec obcinac stringa
            startFrame = matches[0];
            std::cout << startFrame << std::endl;
            //charCounter += startFrame.size();
            startFrame = startFrame.substr(1, startFrame.size()-2);
            std::cout << startFrame << std::endl;
            if(is_digits(startFrame)) {
                 startingFrameNumber = stoi(startFrame); // pierwszy pasujacy {foo}
            }
            /*else {
                throw(CorruptedFile);
            }*/
        }
        /*else {
            throw(CorruptedFile);
        }*/
        currentLine = matches.suffix();
        if(std::regex_search(currentLine, matches, pharse)) {
            endFrame = matches[0]; // drugi pasujacy {bar}
            std::cout << endFrame << std::endl;
            //charCounter += endFrame.size();
            endFrame = endFrame.substr(1, endFrame.size()-2);
            std::cout << endFrame << std::endl;

            if(is_digits(endFrame)) {
                std::cout << "anyfin";
                endingFrameNumber = stoi(endFrame); // pierwszy pasujacy {foo}
            }
            /*else {
                throw(CorruptedFile);
            }*/
        }
        /*else {
            throw(CorruptedFile);
        }*/
        subtitle = matches.suffix();
        startingFrameNumber += delay*fps/1000;
        endingFrameNumber += delay*fps/1000;
        // wyciagaj regexem wartosci z pierwszego i drugiego nawiasu oraz tekst (co z pl znakami?)
        // inkrementuj wartosci o delay*fpms (30fps = 30f/1000ms)
        // zapisuj po linijce do pliku out:
        outputFile << "{" << startingFrameNumber << "}" << "{" << endingFrameNumber << "}" << subtitle << "\n";
    }
    originFile.close();
    outputFile.close();
}

int main() {
    char in[200] = "/home/Tay/Projects/jimp2/jimp_exercises/lab8/adjust_subtitles/in.txt";
    char out[200] = "/home/Tay/Projects/jimp2/jimp_exercises/lab8/adjust_subtitles/out.txt";
    delay(in, out, 10000, 30);
    return 0;
}