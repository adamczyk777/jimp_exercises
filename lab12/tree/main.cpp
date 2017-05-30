//
// Created by jadamczyk on 30/05/17.
//

#include "tree.h"

int main() {

    node<int> a(5);
    node<int> b(6);

    tree<int> tree1{&a};
     
    tree1.Insert(&b);
    cout << a.getRight() << endl;


    return 0;
}
