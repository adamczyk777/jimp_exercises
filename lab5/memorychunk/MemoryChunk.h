//
// Created by Tay on 3/28/17.
//

#ifndef JIMP_EXERCISES_MEMORYCHUNK_H
#define JIMP_EXERCISES_MEMORYCHUNK_H

#include <cstdint>
#include <algorithm>

namespace memorychunk {
    class MemoryChunk {
    public:
        MemoryChunk(size_t sz); // konstruktor dostaje rozmiar i alokuje tyle pamieci ile podano (typu int8_t)

        int8_t *MemoryAt(size_t offset) const; // podaje ile jest pamieci w? skad mam wiedziec
        size_t ChunkSize() const; // zwraca rozmiar zaalokowanej pamieci
    private:
        int8_t *Memory; // wskaznik na poczatek zaalokowanej pamieci
        size_t MemSize; // wielkosc zaalokowanej pamieci
    };
}
#endif //JIMP_EXERCISES_MEMORYCHUNK_H
