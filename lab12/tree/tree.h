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
        this->left = nullptr;
        this->right = nullptr;
        this->value = value;
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
    node *left;
    node *right;
    T value;
};

template<class T>
class tree {
public:
    tree(node<T> *root) : root(root) {}

    node<T> *Insert(node<T> *element) {
        node<T> *tmp = root;
        while(tmp != nullptr) {
            if (element->getValue() >= tmp->getValue()) {
                if(tmp->getRight() != nullptr) {
                    tmp = (tmp->getRight());
                }
                else {
                    tmp->setRight(element);
                    return element;
                }
            } else {
                if(tmp->getLeft() != nullptr) {
                    tmp = (tmp->getLeft());
                }
                else {
                    tmp->setLeft(element);
                    return element;
                }
            }
        }
    }

    node<T> *Search(T value) {
        node<T> *tmp = root;
        while(tmp != nullptr) {
            if(tmp->getValue() == value) {
                return tmp;
            }
            if (tmp->getValue() < value) {
                tmp = tmp->getRight();
            }
            else {
                tmp = tmp->getLeft();
            }
        }
        return nullptr;
    }

private:
    node<T> *root;
};


#endif //JIMP_EXERCISES_TREE_H
