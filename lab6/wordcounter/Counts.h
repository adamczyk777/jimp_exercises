//
// Created by adamc on 08.04.2017.
//

#ifndef JIMP_EXERCISES_COUNTS_H
#define JIMP_EXERCISES_COUNTS_H


class Counts {
private:
    int wordCount;
public:
    //CONSTRUCTORS:
    Counts(int wordCount);

    Counts();

    // ACCESSORS:
    int getWordCount() const;

    void setWordCount(int wordCount);

    void addOccurrence();
};


#endif //JIMP_EXERCISES_COUNTS_H
