//
// Created by jadamczyk on 18/03/17.
//

#include "TinyUrl.h"

std::unique_ptr<tinyurl::TinyUrlCodec> Init() {
    std::unique_ptr<tinyurl::TinyUrlCodec> object = std::make_unique<tinyurl::TinyUrlCodec>();
    return object;
}

void tinyurl::NextHash(array<char, 6> *state) {
    std::map<char, char> nextValue = {{'0', '1'}, {'1', '2'},{'2', '3'}, {'3', '4'}, {'4', '5'}, {'5', '6'}, {'6', '7'},
                                 {'7', '8'}, {'8', '9'}, {'9', 'A'}, {'A', 'B'}, {'B', 'C'}, {'C', 'D'}, {'D', 'E'},
                                 {'E', 'F'}, {'F', 'G'}, {'G', 'H'}, {'H', 'I'}, {'I', 'J'}, {'J', 'K'}, {'K', 'L'},
                                 {'L', 'M'}, {'M', 'N'}, {'N', 'O'}, {'O', 'P'}, {'P', 'Q'}, {'Q', 'R'}, {'R', 'S'},
                                 {'S', 'T'}, {'T', 'U'}, {'U', 'V'}, {'V', 'W'}, {'W', 'X'}, {'X', 'Y'}, {'Y', 'Z'},
                                 {'a', 'b'}, {'c', 'd'}, {'c', 'd'}, {'d', 'e'}, {'e', 'f'}, {'f', 'g'}, {'g', 'h'},
                                 {'h', 'i'}, {'i', 'j'}, {'j', 'k'}, {'k', 'l'}, {'l', 'm'}, {'m', 'n'}, {'n', 'o'},
                                 {'o', 'p'}, {'p', 'q'}, {'q', 'r'}, {'r', 's'}, {'s', 't'}, {'t', 'u'}, {'u', 'v'},
                                 {'v', 'w'}, {'w', 'x'}, {'x', 'y'}, {'y', 'z'}, {'Z', 'a'}};

    for (int i=5; i>=0; i-- ) {
        if ((*state).at(i) == 'z') {
            (*state).at(i) = '0';
            continue;
        } else {
            for (auto m : nextValue) {
                if ((*state).at(i) == m.first) {
                    (*state).at(i) = m.second;
                    break;
                }
            }
            break;
        }
    }

}

std::string tinyurl::Encode(const std::string &url, std::unique_ptr<tinyurl::TinyUrlCodec> *codec) {

}

std::string tinyurl::Decode(const std::unique_ptr<tinyurl::TinyUrlCodec> &codec, const std::string &hash) {

}
