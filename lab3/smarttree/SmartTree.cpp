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
    if(tree->left == nullptr) {
        tree->left = std::move(left_subtree);
        if(left_subtree != nullptr) {
            tree->left->left = nullptr;
            tree->left->right = nullptr;
        }
    }
    return tree;
}

std::unique_ptr <datastructures::SmartTree> datastructures::InsertRightChild(std::unique_ptr<datastructures::SmartTree> tree, std::unique_ptr<datastructures::SmartTree> right_subtree) {
    if(tree->right == nullptr) {
        tree->right = std::move(right_subtree);
        if(right_subtree != nullptr) {
            tree->right->left = nullptr;
            tree->right->right = nullptr;
        }
    }
    return tree;
}

void datastructures::PrintTreeInOrder(const std::unique_ptr<datastructures::SmartTree> &unique_ptr, std::ostream *out) {
    if(unique_ptr == nullptr) {
        return;
    }
    datastructures::PrintTreeInOrder(unique_ptr->left,out);
    *out << unique_ptr->value << ", ";
    datastructures::PrintTreeInOrder(unique_ptr->right,out);
}

std::string datastructures::DumpTree(const std::unique_ptr<datastructures::SmartTree> &tree) { // wypisuje drzewo na stringa
    std::string value = "[none]";
    if(tree == nullptr) {
        return value;
    }
    value = std::to_string(tree->value);
    return "[" + value + " " + datastructures::DumpTree(tree->left) + " " + datastructures::DumpTree(tree->right) + "]";

}

std::unique_ptr <datastructures::SmartTree> datastructures::RestoreTree(const std::string &tree) { // robi drzewo ze stringa
    if(tree == "[none]") {
        return nullptr;
    }
    std::unique_ptr <datastructures::SmartTree> root;
    // jesli pierwsza wartosc to nie none:
    // wstaw pierwsza wartosc
    // wywolaj dla lewego poddrzewa z obcietym stringiem
    // wywolaj dla prawego poddrzewa z obcietym stringiem
    return root;
}
