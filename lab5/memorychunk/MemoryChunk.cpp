//
// Created by Tay on 3/28/17.
//

#include "MemoryChunk.h"

memorychunk::MemoryChunk::MemoryChunk(size_t sz) {
    this->MemSize = sz;
    if (sz > 0) {
        this->Memory = new(int8_t[sz / sizeof(int8_t)]);
    }
    else {
        this->Memory = nullptr;
    }
}

int8_t *memorychunk::MemoryChunk::MemoryAt(size_t offset) const {
    //int8_t *offsetPtr;
    return this->Memory + (offset*sizeof(int8_t));
}

size_t memorychunk::MemoryChunk::ChunkSize() const {
    return this->MemSize;
}
