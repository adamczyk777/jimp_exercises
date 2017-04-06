//
// Created by Tay on 4/1/2017.
//

#ifndef JIMP_EXERCISES_TEXTPOOL_H
#define JIMP_EXERCISES_TEXTPOOL_H

#include <initializer_list>
#include <string>
#include <experimental/string_view>
#include <set>

namespace pool {
    class TextPool {
    public:
        // Rule of Five (z zakomentowana mozliwoscia kopiowania):
        // tworzymy obiekt na podstawie istniejacego:
        // TextPool(const TextPool &obj); // 1. konstruktor kopiujacy (copy constructor) (stary obiekt jest nienatuszony przy przenoszeniu, przekazany przez const)
        TextPool(TextPool &&obj); // 2. konstruktor przenoszacy (move constructor), rvalue, bierze obiekt tymczasowy (stary obiekt jest niszczony przy przenoszeniu)

        // przypisujemy do zainicjalizowanego obiektu juz zainicjalizowany:
        // TextPool &operator=(const TextPool &obj); // 3. operator przypisania kopiujacy ()
        TextPool &operator=(pool::TextPool &&obj); //{ // 4. operator przypisania przenoszacy ()
            /*this->StoredStringCounter = obj.StoredStringCounter;
            this->pool_ = obj.pool_;
            obj.StoredStringCounter = 0;
            obj.pool_.clear();
            return *this;
        }*/

        // kasujemy obiekt:
        ~TextPool(); // 5. destruktor

        // domyslny konstruktor:
        TextPool();
        // konstruktor z lista inicjalizacyjna (ma przypisac do setu to co podamy, np z uzyciem interna):
        TextPool(const std::initializer_list<std::experimental::string_view> pool_);
        // metoda do insertowania stringa do setu i zwracania go:
        std::experimental::string_view Intern(const std::string &str);
        // metoda do zwracania ilosci rzeczy w secie:
        size_t StoredStringCount() const; // const po - nie moze modyfikowac elementow skladowych klasy i nie moze wykorzystywac innych metod niz const. getter do stored strring counter
    private:
        std::set<std::experimental::string_view> pool_; // here we store strings
        size_t StoredStringCounter;
    };

}

#endif //JIMP_EXERCISES_TEXTPOOL_H
