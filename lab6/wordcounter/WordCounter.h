//
// Created by adamc on 08.04.2017.
//

#ifndef JIMP_EXERCISES_WORDCOUNTER_H
#define JIMP_EXERCISES_WORDCOUNTER_H

#include <utility>
#include "Word.h"
#include "Counts.h"

class WordCounter {

private:
    std::pair<Word, Counts> wordUccurences;
public:
    //Constructors:
    WordCounter();

    WordCounter(const std::pair<Word, Counts> &wordUccurences);

    //Methods:
    const std::pair<Word, Counts> &getWordUccurences() const;

    void setWordUccurences(const std::pair<Word, Counts> &wordUccurences);


};

#endif //JIMP_EXERCISES_WORDCOUNTER_H
