//
// Created by Tay on 3/28/2017.
//
#include "Parent.h"
#include "Child.h"
#include "ParentChild.h"

int main() {
    Parent Andrzej;
    Child Brajan;
    Andrzej.setChild(&Brajan);
    Andrzej.changeSchool("liceum");
    std::cout << Brajan.getSchool();
    return 0;
}