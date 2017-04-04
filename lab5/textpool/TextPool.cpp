//
// Created by Tay on 4/1/2017.
//

#include "TextPool.h"

pool::TextPool::TextPool(TextPool &&obj) {

}

pool::TextPool::~TextPool() {

}

pool::TextPool::TextPool() {

}

pool::TextPool::TextPool(const std::initializer_list<std::experimental::string_view> pool_) {
    for(auto n : pool_) {
        if(this->pool_.count(n) == 0) {
            StoredStringCounter++;
        }
        this->pool_.insert(n);
    }
}

std::experimental::string_view pool::TextPool::Intern(const std::string &str) {
    std::experimental::string_view to_add = str;
    if(pool_.count(to_add)) {
        StoredStringCounter++;
    }
    pool_.insert(to_add);
    return str;
    //return pool_.insert(to_add).first;
    // insert string to set
    // if added new increment counter
    // return inserted string_view
}

size_t pool::TextPool::StoredStringCount() const {
    return StoredStringCounter;
}