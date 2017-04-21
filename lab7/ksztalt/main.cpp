//
// Created by adamc on 15.04.2017.
//

#include "Ksztalt.h"
#include "Kolo.h"
#include "Kwadrat.h"
#include "Trojkat.h"
#include <list>
#include <random>

int main() {
    std::list<Ksztalt*> ksztalty;
    for (int i = 0; i < 10; i++) {
        int rnd = 1 + static_cast<int>((std::rand() / static_cast<double>(RAND_MAX + 1)) * 2);
        switch (rnd) {
            case 1:
                ksztalty.emplace_back(new Kolo());
            case 2:
                ksztalty.emplace_back(new Kwadrat());
            case 3:
                ksztalty.emplace_back(new Trojkat());
        }
    }

    for (auto el : ksztalty) {
        el->rysuj();
    }
}
