//
// Created by jadamczyk on 30/05/17.
//

#ifndef JIMP_EXERCISES_TREE_H
#define JIMP_EXERCISES_TREE_H

#include <iostream>

using std::cout;
using std::endl;


template<class T>
struct node {
    T value;
    node *left;
    node *right;

    node(T value) : value(value) {}

    node(T value, node *left, node *right) : value(value), left(left), right(right) {}

};

template<class T>
class tree {
private:
    node<T> *root;

    void insertHelper(node<T> *root, T value) {
        if (value < root->value) {
            if (!root->left) {
                root->left->value = new node<T>(value);
            } else {
                insertHelper(root->left,  value);
            }
        }
    }

public:
    void insert(T value) {
        if (root) {
            insertHelper(root, value);
        } else {
            this->root = new node<T>(value);
        }
    }

};

// Legacy Code:
//template<class T>
//class tree {
//public:
//    tree(node<T> *root) : root(root) {}
//
//    node<T> *Insert(node<T> *element) {
//        node<T> *tmp = root;
//        while (tmp != nullptr) {
//            if (element->getValue() >= tmp->getValue()) {
//                if (tmp->getRight() != nullptr) {
//                    tmp = (tmp->getRight());
//                } else {
//                    tmp->setRight(element);
//                    return element;
//                }
//            } else {
//                if (tmp->getLeft() != nullptr) {
//                    tmp = (tmp->getLeft());
//                } else {
//                    tmp->setLeft(element);
//                    return element;
//                }
//            }
//        }
//    }
//
//    node<T> *Search(T value) {
//        node<T> *tmp = root;
//        while (tmp != nullptr) {
//            if (tmp->getValue() == value) {
//                return tmp;
//            }
//            if (tmp->getValue() < value) {
//                tmp = tmp->getRight();
//            } else {
//                tmp = tmp->getLeft();
//            }
//        }
//        return nullptr;
//    }
//
//private:
//    node<T> *root;
//};


#endif //JIMP_EXERCISES_TREE_H
