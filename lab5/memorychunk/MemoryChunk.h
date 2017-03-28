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
        MemoryChunk(size_t sz);

        int8_t *MemoryAt(size_t offset) const;
        size_t ChunkSize() const;
    private:
        int8_t *Memory;
        size_t MemSize;
    };
}
#endif //JIMP_EXERCISES_MEMORYCHUNK_H
