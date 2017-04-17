#include "WordCounter.h"

namespace datastructures {

    WordCounter::WordCounter() {
        wordList = std::list<std::pair<Word, Counts>>{};
    }


    WordCounter::WordCounter(const std::initializer_list<Word> &init_list) {
        wordList = std::list<std::pair<Word, Counts>>{};
        for (auto it = init_list.begin(); it != init_list.end(); ++it) {
            AddWord((std::string)*it);
        }
    }

    WordCounter::WordCounter(std::string path) {
        wordList = std::list<std::pair<Word, Counts>>{};
        std::ifstream file(path);
        if (!file) {
            std::cout << "Error opening file" << std::endl;
            return;
        }
        std::string buf;
        while (!file.eof()) {
            file >> buf;
            AddWord(buf);
        }
        file.close();
    }

    std::set<Word> WordCounter::Words() {
        std::set<Word> words{};
        for (auto it = wordList.begin(); it != wordList.end(); ++it) {
            words.insert(it->first);
        }
        return words;
    }

    int WordCounter::SumWords() {
        int sum = 0;
        for (auto it = wordList.begin(); it != wordList.end(); ++it) {
            sum += it->second;
        }
        return sum;
    }

    size_t WordCounter::DistinctWords() {
        return wordList.size();
    }

    bool CompareWords(const std::pair<Word, Counts> &a, const std::pair<Word, Counts> &b) {
        return a.second > b.second;
    }

    std::ostream &operator<<(std::ostream &s, WordCounter &wc) {
        s << "Total words: " << wc.SumWords() << "\nDistinct words: " << wc.DistinctWords() << "\n";
        wc.wordList.sort(CompareWords);
        for (auto it = wc.wordList.begin(); it != wc.wordList.end(); ++it) {
            s << (int)it->second << "\t" << (std::string)it->first << "\n";
        }
        return s;
    }

    int WordCounter::operator[](std::string key) {
        Word word{key};
        for (auto it = wordList.begin(); it != wordList.end(); ++it) {
            if (it->first == word) {
                return it->second;
            }
        }
        return 0;
    }

    void WordCounter::AddWord(std::string word) {
        std::string tmpword = "";
        for (char c : word) {
            if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
                tmpword += c;
            }
        }
        if (tmpword.size() > 0) {
            Word toadd{tmpword};
            if (wordList.empty()) {
                wordList.emplace_back(toadd, Counts());
                return;
            }
            auto it = wordList.begin();
            for (it; it != wordList.end(); ++it) {
                if (it->first == toadd) {
                    ++(it->second);
                    break;
                }
            }
            if (it == wordList.end()) {
                wordList.emplace_back(toadd, Counts());
            }
        }
    }
}