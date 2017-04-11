//
// Created by adamc on 08.04.2017.
//

#ifndef JIMP_EXERCISES_WORDCOUNTER_H
#define JIMP_EXERCISES_WORDCOUNTER_H

#include <string>
#include <vector>
#include "Word.h"
#include "Counts.h"

class WordCounter {

    static void FromInputStream(std::string *istream);

public:
    WordCounter();

    WordCounter(const std::initializer_list<std::vector<std::string>> &words);
private:
    // int wordsCount;
    // std::vector<std::string> words;
    std::vector<std::pair<Word,Counts>> words; // obiekty z jednym polem

};

#endif //JIMP_EXERCISES_WORDCOUNTER_H
