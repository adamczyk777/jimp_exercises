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
                root->left = new node<T>(value);
            } else {
                insertHelper(root->left, value);
            }
        } else if (value >= root->value) {
            if (!root->right) {
                root->right = new node<T>(value);
            } else {
                insertHelper(root->right, value);
            }
        }
    }

    node<T> *searchHelper(node<T> *root, T value) {
        if (root->value == value) {
            return root;
        } else if (!root->left || !root->right) {
            return nullptr;
        } else if (root->value <= value) {
            return searchHelper(root->right, value);
        } else if (root->value > value) {
            return searchHelper(root->left, value);
        }
    }

    void printHelper(node<T> *root) {
        if (!root) return;
        printHelper(root->left);
        cout << root->value << ' ';
        printHelper(root->right);
    }

public:
    tree() {}

    void printTree() {
        printHelper(root);
    }

    void insert(T value) {
        if (root) {
            insertHelper(root, value);
        } else {
            this->root = new node<T>(value);
        }
    }

    node<T> *search(T value) {
        return searchHelper(root, value);
    }

};


#endif //JIMP_EXERCISES_TREE_H
