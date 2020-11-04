#include "Header.h"

Node::Node(int data){
    this->data = data;
    this->next = NULL;
}

void Node::setData(int data){
    this->data = data;
}

int Node::getData(){
    return data;
}

void Node::setNext(Node *next){
    this->next = next;
}

Node* Node::getNext(){
    return next;
}


LinkedList::LinkedList(){
    head = NULL;
}


bool LinkedList::insert(int data){
    Node * newNode = new Node(data);
    if (newNode == NULL){
        return false;
    }

    if (head == NULL){
        head = newNode;
        return true;
    }

    Node * temp =  head;

    while(temp->getNext() != NULL){
        temp = temp->getNext();
    }

    temp->setNext(newNode);

    return true;
}


bool LinkedList::insert(int data, int position){
    Node* newNode = new Node(data);

    if (newNode == NULL){
        return false;
    }
    if (head == NULL){
        head = newNode;
        return true;
    }
    if (position == 1){
        newNode->setNext(head);
        head = newNode;
        return true;
    }

    Node * prev = head;
    for(int i = 1; i < position-1; i++){
        prev = prev->getNext();
    }

    newNode->setNext(prev->getNext());
    prev->setNext(newNode);

return true;
}

bool LinkedList::deleteNode(int node){
    if(head == NULL){
        return false;
    }

    if
}

void LinkedList::display(){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->getData()<<" ";
        temp = temp->getNext();
    }
    cout<<endl;
}

LinkedList::~LinkedList(){
    while(head){

        Node *del = head;
        head = head->getNext();
        delete del;
    }

}

