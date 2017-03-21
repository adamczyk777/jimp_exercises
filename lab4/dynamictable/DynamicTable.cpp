//
// Created by Tay on 3/21/17.
//

#include "DynamicTable.h"
#include <iostream>

void DTab::resize(int newSize) {

}

DTab::DTab() {

}

DTab::DTab(int initLength) {

}

DTab::~DTab() {

}

void DTab::add(double element) {

}

double DTab::get(int index) {
    return this->tab[index];
}

void DTab::set(double element, int index) {
    this->tab[index] = element;
}

void DTab::print() {
    for(int i=0;i<this->length;i++) {
        std::cout << this->tab[i];
    }
}