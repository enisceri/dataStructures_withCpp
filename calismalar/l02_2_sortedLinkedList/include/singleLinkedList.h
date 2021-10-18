#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H
#include "node.h"

class SingleLinkedList
{
    private:
        Node* head;
        Node* tail;
        Node* search(int data); // it returns previous node which is smaller than what we want to add

    public:
        SingleLinkedList();
        void addNode(int data);
        void print() const;
        void addSortedNode(int data);
        ~SingleLinkedList();



};

#endif