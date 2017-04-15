//
// Created by adamc on 08.04.2017.
//

#include "Counts.h"

//CONSTRUCTORS:
Counts::Counts(int wordCount) : wordCount(wordCount) {
    this->wordCount = wordCount;
}

Counts::Counts() {
    this->wordCount = 0;
}

//ACCESSORS:
int Counts::getWordCount() const {
    return wordCount;
}

void Counts::setWordCount(int wordCount) {
    Counts::wordCount = wordCount;
}

