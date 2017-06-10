//
// Created by jadamczyk on 10.06.17.
//

#include "Tree.h"

int main() {

    tree::Tree<int> tree{5};
    auto value = tree.Value();
    cout << value << endl;
    cout << "should be 5" << endl;
//        EXPECT_EQ(5, value);
    cout << "should be 1, is:" + tree.Size() << endl;
//        EXPECT_EQ(1, tree.Size());
    cout << "should be 1 bit is:" + tree.Depth() << endl;
//        EXPECT_EQ(1, tree.Depth());

    return 0;
}