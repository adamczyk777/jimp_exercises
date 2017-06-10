//
// Created by jadamczyk on 30/05/17.
//

#include "Tree.h"

namespace tree {

    int main() {

        Tree<int> tree1;

        tree1.insert(5);
        tree1.insert(4);
        tree1.insert(7);
        tree1.insert(9);
        tree1.insert(1);
        tree1.insert(2);

        tree1.printTree();

        cout << "That was a tree :)" << endl;
        cout << tree1.search(5)->value << endl;
        cout << tree1.search(0)->value << endl;

        return 0;
    }

}
