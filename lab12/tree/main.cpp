//
// Created by jadamczyk on 30/05/17.
//

#include "tree.h"

int main() {

    node<int> a(5);
    node<int> b(6);
    node<int> c(11);
    node<int> d(12);
    node<int> l(9);

    tree<int> tree1{&a};

    tree1.Insert(&b);
    tree1.Insert(&c);
    tree1.Insert(&d);
    tree1.Insert(&l);
    cout << (a.getRight())->getValue() << endl;
    cout << (b.getRight())->getValue() << endl;
    cout << (c.getRight())->getValue() << endl;

    //expected nullptr
    cout << tree1.Search(10)->getValue() << endl;

    //expected value
    cout << tree1.Search(6)->getValue() << endl;

    return 0;
}
