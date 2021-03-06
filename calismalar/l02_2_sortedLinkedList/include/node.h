#ifndef NODE_H
#define NODE_H

class Node
{
    private:
        int     data;
        Node*   next;
    
    public:
        Node(int data);

        void    setData(int data);
        void    setNext(Node* next);

        int     getData();
        Node*   getNext();
        ~Node();


};


#endif