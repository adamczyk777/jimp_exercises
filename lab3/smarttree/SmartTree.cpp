//
// Created by Tay on 3/18/2017.
//

#include "SmartTree.h"

std::unique_ptr <datastructures::SmartTree> datastructures::CreateLeaf(int value) {
    // wersja z konstruktorem:
    //std::unique_ptr<datastructures::SmartTree> Leaf = std::make_unique<datastructures::SmartTree>(value, nullptr,nullptr,nullptr);
    std::unique_ptr<datastructures::SmartTree> Leaf = std::make_unique<datastructures::SmartTree>();
    Leaf->value = value;
    return Leaf;
}

std::unique_ptr <datastructures::SmartTree> datastructures::InsertLeftChild(std::unique_ptr<datastructures::SmartTree> tree, std::unique_ptr<datastructures::SmartTree> left_subtree) {

}

std::unique_ptr <datastructures::SmartTree> datastructures::InsertRightChild(std::unique_ptr<datastructures::SmartTree> tree, std::unique_ptr<datastructures::SmartTree> right_subtree) {

}

void datastructures::PrintTreeInOrder(const std::unique_ptr<datastructures::SmartTree> &unique_ptr, std::ostream *out) {

}

std::string datastructures::DumpTree(const std::unique_ptr<datastructures::SmartTree> &tree) {

}

std::unique_ptr <datastructures::SmartTree> datastructures::RestoreTree(const std::string &tree) {

}
