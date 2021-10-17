#include "../include/singleLinkedList.h"
#include <iostream>
using namespace std;

 SingleLinkedList::SingleLinkedList()
 {
     head = NULL;
 }

 void SingleLinkedList::addNode(int data)
 {
     Node* new_node = new Node(data);

    
     if(head == NULL)
     {
         head = new_node;
         tail = new_node;
     }

     else
     {
         /*
         Node* temp = head;
         while(temp->getNext() != NULL)
         {
             temp = temp->getNext();
         }

         temp->setNext(node);
         */

         tail->setNext(new_node);
         tail = new_node;
        
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