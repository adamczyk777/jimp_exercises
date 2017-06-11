//
// Created by jadamczyk on 10.06.17.
//

#include "Tree.h"

int main() {

    tree::Tree<int> tree{5};
    tree.Insert(11);
    tree.Insert(11);
    tree.Insert(11);
    tree.Insert(11);
    tree.Insert(2);
    tree.printTree();
    cout << tree.Size() << endl;
    cout << tree.Depth() << endl;
////        EXPECT_EQ(5, value);
//    cout << "should be 1, is:";
//    cout << tree.Size();
////        EXPECT_EQ(1, tree.Size());
//    cout << "should be 1 bit is:" ;
//    cout << tree.Depth() << endl;
////        EXPECT_EQ(1, tree.Depth());

    return 0;
}