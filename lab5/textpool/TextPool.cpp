//
// Created by Tay on 4/1/2017.
//

#include "TextPool.h"

pool::TextPool::TextPool(TextPool &&obj) {
    this->StoredStringCounter = obj.StoredStringCounter; // kopiowanie pol ze starego obiektu
    this->pool_ = obj.pool_; // cd
    obj.StoredStringCounter = 0; // czyszczenie starego obiektu
    //obj.pool_; // cd
}

pool::TextPool::~TextPool() {

}

pool::TextPool::TextPool() {
    this->StoredStringCounter = 0;
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
    if(this->pool_.count(to_add) == 0) {
        StoredStringCounter++;
    }
    this->pool_.insert(to_add);
    return to_add;
    //return pool_.insert(to_add).first;
    // insert string to set
    // if added new increment counter
    // return inserted string_view
}

size_t pool::TextPool::StoredStringCount() const {
    return this->StoredStringCounter;
}