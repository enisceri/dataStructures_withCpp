#include "../include/node.h"
#include <iostream>
using namespace std;

Node::Node(int data)
{
    this->data = data;
    this->next = NULL;
}

void Node::setData(int data)
{
    this->data = data;
}

void Node::setNext(Node* next)
{
    this->next = next;
}

int Node::getData()
{
    return data;
}

Node* Node::getNext()
{
    return next;
}

Node::~Node()
{
    delete this->next;
}