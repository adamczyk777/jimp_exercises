//
// Created by jadamczyk on 11.06.2017.
//

#ifndef JIMP_EXERCISES_TREEITERATORS_H
#define JIMP_EXERCISES_TREEITERATORS_H

#include "../tree/Tree.h"

namespace tree {
    template<class T>
    class PreOrderIterator {
    public:
        PreOrderIterator() {}

        PreOrderIterator(const Tree<T> *tree) : tree(tree) {}

    private:
        const Tree<T> *tree;
    };

    template<class T>
    class InOrderIterator {

    };

    template<class T>
    class PostOrderIterator {

    };
}


#endif //JIMP_EXERCISES_TREEITERATORS_H
