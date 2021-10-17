#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H
#include "node.h"

class SingleLinkedList
{
    private:
        Node* head;
        Node* tail;

    public:
        SingleLinkedList();
        void addNode(int data);
        void print() const;



};

#endif