#ifndef JIMP_EXERCISES_WORDCOUNTER_H
#define JIMP_EXERCISES_WORDCOUNTER_H

#include <string>
#include <fstream>
#include <iostream>
#include <list>
#include <set>
#include "Word.h"
#include "Counts.h"

namespace datastructures {
    class WordCounter {

    public:
        // constructors:
        WordCounter();
        WordCounter(std::string path);
        WordCounter(const std::initializer_list<Word> &init_list);

        int SumWords();
        size_t DistinctWords();
        std::set<Word> Words();

        friend std::ostream& operator<<(std::ostream &s, WordCounter& wc);
        int operator[](std::string key);

    private:
        std::list<std::pair<Word, Counts>> wordList;
        void AddWord(std::string word);
    };

    std::ostream& operator<<(std::ostream &s, WordCounter& wc);
}

#endif //JIMP_EXERCISES_WORDCOUNTER_H