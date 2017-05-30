//
// Created by jadamczyk on 30/05/17.
//

#ifndef JIMP_EXERCISES_TREE_H
#define JIMP_EXERCISES_TREE_H

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
    tree(node *root) : root(root) {}

    node *tree::Insert(node *element) {
        while(root != nullptr) {
            if (element->getValue() >= root->getValue()) {
                if(root->getRight() != nullptr) {
                    root = (root->getRight());
                }
                else {
                    root->setRight(element);
                }
            } else {
                if(root->getLeft() != nullptr) {
                    root = (root->getLeft());
                }
                else {
                    root->setLeft(element);
                }
            }
        }
        return element;
    }

    node *tree::Search(T value) {
        return nullptr;
    }

private:
    node *root;
};


#endif //JIMP_EXERCISES_TREE_H
