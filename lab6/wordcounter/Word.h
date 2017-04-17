#include<string>

namespace datastructures {
    class Word {
    public:
        // constructors:
        Word();
        Word(std::string str);

        operator std::string() const {
            return word;
        }

        bool operator==(const Word &sec) const {
            return (word == sec.word);
        }

        bool operator<(const Word &sec) const {
            return (word < sec.word);
        }

        bool operator>(const Word &sec) const {
            return (word > sec.word);
        }

    private:
        std::string word;
    };
}