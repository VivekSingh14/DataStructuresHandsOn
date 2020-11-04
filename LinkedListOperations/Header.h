
#include <iostream>
using namespace std;

class Node {
    int data;
    Node * next;
public:
    Node( int );
    void setData( int );
    int getData();
    void setNext( Node * );
    Node * getNext();
};

class LinkedList {
    Node * head;
public:
    LinkedList();
    bool insert( int );
    bool insert( int, int );
    bool deleteByPos( int );
    bool deleteByVal( int );

    void display();
    void displayRev();
    void displayRev( Node * );
    Node * getHead();

    ~LinkedList();
};
