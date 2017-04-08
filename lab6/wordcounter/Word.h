//
// Created by adamc on 08.04.2017.
//

#ifndef JIMP_EXERCISES_WORD_H
#define JIMP_EXERCISES_WORD_H

#include <string>

using std::string;

class Word {
private:
    string word;
public:
    //Constructors:
    Word(const string &word);

    Word();
    //Accesors:
    const string &getWord() const;

    void setWord(const string &word);
};


#endif //JIMP_EXERCISES_WORD_H
