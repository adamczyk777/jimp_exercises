//
// Created by adamc on 28.03.2017.
//
#include "Marsjanin.h"


int main() {
    list<Marsjanin> lista;

    for (int i = 0; i < 1000;i++){
        if ((i%10) == 0) {
            lista.emplace_back();
        } else {
            lista.pop_back();
        }
        if(Marsjanin::liczbaMarsjan >= 5) {
            for(auto el : lista) {
                el.attack();
            }
        } else {
            for (auto el : lista) {
                el.hide();
            }
        }
    }
}