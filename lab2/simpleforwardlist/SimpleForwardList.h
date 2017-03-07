//
// Created by Tay on 3/7/17.
//

#ifndef JIMP_EXERCISES_FORWARDLIST_H
#define JIMP_EXERCISES_FORWARDLIST_H

#include <iostream>

struct ForwardList {
    int value;
    ForwardList *next;
};

ForwardList *CreateNode(int value);
void DestroyList(ForwardList *list);
ForwardList *PushFront(ForwardList *list, int value);
void Append(ForwardList *list, ForwardList *tail);

#endif //JIMP_EXERCISES_FORWARDLIST_H
