//
// Created by Tay on 3/7/17.
//

#include "SimpleForwardList.h"

ForwardList *CreateNode(int value) {
    ForwardList *newNode = new ForwardList;
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

ForwardList *PushFront(ForwardList *list, int value) {
    // przepinanie wskaznikow:
    if(list != NULL) {
        ForwardList *tmp = list;
        list = CreateNode(value);
        list->next = tmp;
    }
    return list;
}

void DestroyList(ForwardList *list) {
    ForwardList *tmp;
    while(list != NULL) {
        tmp = list;
        list = list->next;
        delete tmp;
    }
}

void Append(ForwardList *list, ForwardList *tail) {
    // przechodzenie na koniec:
    if(list == NULL) {
        list = CreateNode(tail->value);
    }
        while (list->next != NULL) {
            list = list->next;
        }
        list->next = tail;
        if (tail != NULL) {
            tail->next = NULL;
        }
    }
