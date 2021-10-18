#include <iostream>
#include "../include/singleLinkedList.h"

using namespace std;

int main()
{

    SingleLinkedList* sll = new SingleLinkedList();


    sll->addNode(5);
    sll->addNode(20);
    sll->addNode(200);
    sll->addNode(-7);
    sll->addNode(9);
    sll->addNode(100);
    sll->addNode(25);
    sll->addNode(-500);


/*
    sll->addSortedNode(100);
    sll->addSortedNode(20);
    sll->addSortedNode(50);
    sll->addSortedNode(35);
    sll->addSortedNode(75);
    sll->addSortedNode(-56);
    sll->addSortedNode(-67);
    sll->addSortedNode(2);
    sll->addSortedNode(-56);
    sll->addSortedNode(50);
    sll->addSortedNode(50);
    sll->addSortedNode(50);
    sll->addSortedNode(50);
    sll->addSortedNode(50);
*/
    sll->print();






    cout << endl << endl;




    return EXIT_SUCCESS;
}