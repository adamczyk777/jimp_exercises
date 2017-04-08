//
// Created by adamc on 08.04.2017.
//

#include "Word.h"
//Constructors:
Word::Word(const string &word) : word(word) {}

Word::Word() {}

//Accessors:
const string &Word::getWord() const {
    return word;
}

void Word::setWord(const string &word) {
    Word::word = word;
}
