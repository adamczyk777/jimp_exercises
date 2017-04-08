//
// Created by adamc on 08.04.2017.
//

#include "WordCounter.h"

//Constructors:
WordCounter::WordCounter() {}

WordCounter::WordCounter(const std::pair<Word, Counts> &wordUccurences) : wordUccurences(wordUccurences) {}

//methods:
const std::pair<Word, Counts> &WordCounter::getWordUccurences() const {
    return wordUccurences;
}

void WordCounter::setWordUccurences(const std::pair<Word, Counts> &wordUccurences) {
    WordCounter::wordUccurences = wordUccurences;
}
