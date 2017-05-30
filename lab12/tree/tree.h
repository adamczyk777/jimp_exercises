//
// Created by jadamczyk on 30/05/17.
//

#ifndef JIMP_EXERCISES_TREE_H
#define JIMP_EXERCISES_TREE_H

#include <iostream>
using std::cout;
using std::endl;


template<class T>
class node {
public:
    node(T value) {
        this->parent = nullptr;
        this->left = nullptr;
        this->right = nullptr;
        this->value = value;
    }

    node *getParent() const {
        return parent;
    }

    void setParent(node *parent) {
        node::parent = parent;
    }

    node *getLeft() const {
        return left;
    }

    void setLeft(node *left) {
        node::left = left;
    }

    node *getRight() const {
        return right;
    }

    void setRight(node *right) {
        node::right = right;
    }

    T getValue() const {
        return value;
    }

    void setValue(T value) {
        node::value = value;
    }

private:
    node *parent;
    node *left;
    node *right;
    T value;
};

template<class T>
class tree {
public:
    tree(node<T> *root) : root(root) {}

    node<T> *Insert(node<T> *element) {
        while(root != nullptr) {
            if (element->getValue() >= root->getValue()) {
                if(root->getRight() != nullptr) {
                    root = (root->getRight());
                }
                else {
                    root->setRight(element);
                    return element;
                }
            } else {
                if(root->getLeft() != nullptr) {
                    root = (root->getLeft());
                }
                else {
                    root->setLeft(element);
                    return element;
                }
            }
        }
        return element;
    }

    node<T> *Search(T value) {
        return nullptr;
    }

private:
    node<T> *root;
};


#endif //JIMP_EXERCISES_TREE_H
