//
// Created by Tay on 4/1/2017.
//

#include "TextPool.h"

pool::TextPool::TextPool(TextPool &&obj) {

}

pool::TextPool::TextPool &operator=(const pool::TextPool &&obj) {

}

pool::TextPool::~TextPool() {

}

pool::TextPool::TextPool() {

}

pool::TextPool::TextPool(const std::initializer_list<std::pair<const std::string, unsigned int>> &elements) : counter_{elements} {

}

std::experimental::string_view pool::TextPool::Intern(const std::string &str) {

    // insert string to set
    // if added new increment counter
    // return inserted string_view
}

size_t pool::TextPool::StoredStringCount() const {
    return StoredStringCounter;
}