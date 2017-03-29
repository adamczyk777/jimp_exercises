//
// Created by Tay on 3/28/17.
//

#include "MemoryChunk.h"
#include <iostream>

int main() {
    memorychunk::MemoryChunk Pamiec(50);
    std::fill(Pamiec.MemoryAt(0), Pamiec.MemoryAt(49) + 1, 50);
    std::cout << Pamiec.MemoryAt(10);
    return 0;
}