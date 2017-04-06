//
// Created by Tay on 4/1/2017.
//

#include "TextPool.h"
#include <iostream>

/*pool::TextPool::TextPool(TextPool &&obj) {
    this->StoredStringCounter = obj.StoredStringCounter; // kopiowanie pol ze starego obiektu
    this->pool_ = obj.pool_; // cd
    obj.StoredStringCounter = 0; // czyszczenie starego obiektu
   // obj.pool_ =; // cd
}*/

pool::TextPool::~TextPool() {

}

pool::TextPool::TextPool() {
    this->StoredStringCounter = 0;
}

pool::TextPool::TextPool(const std::initializer_list<std::experimental::string_view> pool_) {
    this->StoredStringCounter = 0;
    for(auto n : pool_) {
        if(this->pool_.count(n) == 0) {
            this->StoredStringCounter++;
        }
        this->pool_.insert(n);
    }
}

std::experimental::string_view pool::TextPool::Intern(const std::string &str) {
    std::experimental::string_view to_add(str);
    if(this->pool_.count(to_add) == 0) {
        this->StoredStringCounter++;
    }
    this->pool_.insert(to_add);
    return to_add;
}

size_t pool::TextPool::StoredStringCount() const {
    return this->StoredStringCounter;
}

pool::TextPool::TextPool(TextPool &&obj) {
    this->StoredStringCounter = 0; // ta linijka jest potrzebna, gdy tworzac obiekt od razu przypisujemy do niego inny (rvalue). Bez tego bedzie tam losowa wartosc.
    std::swap(pool_,obj.pool_);
    std::swap(StoredStringCounter,obj.StoredStringCounter);

}

pool::TextPool & pool::TextPool::operator=(pool::TextPool &&obj){
    if(this !=&obj) {
        std::swap(pool_,obj.pool_);
        std::swap(StoredStringCounter,obj.StoredStringCounter);
    }
    return *this;

}

