//
// Created by Tay on 3/28/2017.
//
#include "Parent.h"
#include "Child.h"

int main() {
    Parent Andrzej;
    Child Brajan;
    Andrzej.setAge(5);
    Andrzej.setChild(Brajan);
    Andrzej.changeSchool("II LO");
    return 0;
}