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

    sll->print();






    cout << endl << endl;




    return EXIT_SUCCESS;
}