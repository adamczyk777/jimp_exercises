//
// Created by Tay on 3/18/2017.
//

#include "SmartTree.h"


std::unique_ptr <SmartTree> CreateLeaf(int value) {
    unique_ptr<SmartTree> p = make_unique<SmartTree>(value);
}

std::unique_ptr <SmartTree> InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree) {

}

std::unique_ptr <SmartTree> InsertRightChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> right_subtree) {

}

void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out) {

}

std::string DumpTree(const std::unique_ptr<SmartTree> &tree) {

}

std::unique_ptr <SmartTree> RestoreTree(const std::string &tree) {

}
