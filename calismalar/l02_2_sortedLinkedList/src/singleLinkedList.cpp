#include "../include/singleLinkedList.h"
#include <iostream>
using namespace std;

SingleLinkedList::SingleLinkedList()
{
    head = NULL;
}

void SingleLinkedList::addNode(int data)
{
    Node* new_node  = new Node(data);

    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
    }

    else
    {
        Node* prev_node = this->search(data);

        if(prev_node == NULL)
        {
            new_node->setNext(head);
            head = new_node;    
        }

        else if(prev_node == tail)
        {
            tail->setNext(new_node);
            tail = new_node;      
        }

        else
        {
            new_node->setNext(prev_node->getNext());
            prev_node->setNext(new_node);

        }
  
    }
}

void SingleLinkedList::print() const
{
    cout << "LINKED LIST's ELEMENTS" << endl;
    cout << "======================" << endl;

    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
}

Node* SingleLinkedList::search(int data)
{
    Node* temp = head;

    if(data < head->getData())
    {
        return NULL;
    }


    else
    {
        while(temp->getNext())
        {
            if(temp->getNext()->getData() > data)
            {
                return temp;    
            }

            else
            {
                temp = temp->getNext();
            }
        }

        return temp;
    }
}

void SingleLinkedList::addSortedNode(int data)
{
    // if head is null
    if(head == NULL)
    {
        head = new Node(data);
        head->setNext(NULL);
    }

    //else HEAD is not NULL 
    else
    {
        //if data smaller than the first element (which is head's data)
        if(data < head->getData())
        {
            Node* newNode = new Node(data);
            newNode->setNext(head);
            head = newNode;
        }

        //if data bigger than or equal to data
        else
        {
            Node* tempNode = head;

            while(tempNode->getNext() != NULL && tempNode->getNext()->getData() < data )
            {
                tempNode = tempNode->getNext();
            } 

            Node *newNode = new Node(data);
            newNode->setNext(tempNode->getNext());
            tempNode->setNext(newNode);
        }

    }

}


SingleLinkedList::~SingleLinkedList()
{
    delete head;
}