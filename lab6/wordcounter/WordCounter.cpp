//
// Created by adamc on 08.04.2017.
//

#include "WordCounter.h"

void WordCounter::FromInputStream(std::string *istream) {

}

WordCounter::WordCounter() {

}

WordCounter::WordCounter(const std::initializer_list<std::vector<std::string>> &words) {

    // biere słowa z wektora. Jesli takie juz wystepuje zwieksz counter, jesli nie - dodaj do wektora
    for(auto n : words) {
    // tu trzeba zrobic nowy obiekt Word i wrzucic do niego stringa
        if(this->words.find(tu obiekt Word) != this->words.end()) { // jesli istnieje w secie para, ktorej pierwszy element to n to:
          //Counts++; (przeciazyc operatorek, juz zrobione) zwieksz jej drugi element o 1
            //this->words.second++; cos w tym stylu
        }
        else { // w przeciwnym razie dodaj slowo z licznikiem 1
            this->words.emplace(obiekt Word,1);
        }
    }
}
