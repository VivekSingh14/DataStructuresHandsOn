#include "Header.h"

Node::Node( int data ) {
    this->data = data;
    this->next = NULL;
}

void Node::setData(int data) {
    this->data = data;
}

int Node::getData() {
    return data;
}

void Node::setNext(Node * next ){
    this->next = next;
}

Node * Node::getNext() {
    return next;
}

///LInkedList

LinkedList::LinkedList() {
    head = NULL;
}

bool LinkedList::insert(int data) {

    Node * newNode = new Node( data );

    if( newNode == NULL ) {
        return false;
    }

    if( head == NULL ) {
        head = newNode;
        return true;
    }

    Node * temp = head;

    while( temp->getNext() != NULL ) {
        temp = temp->getNext();
    }

    temp->setNext(newNode);

    return true;
}

void LinkedList::display() {

    Node * temp = head;

    while( temp != NULL ) {
        cout<<temp->getData()<<" ";
        temp = temp->getNext();
    }
    cout<<endl;

}

bool LinkedList::insert(int data, int position ) {

    if( position <= 0 || ( head == NULL && position > 1 ) ) {
        return false;
    }

    Node * newNode = new Node( data );
    if( newNode == NULL ) {
        return false;
    }

    if( position == 1 ) {
        newNode->setNext( head );
        head = newNode;
        return true;
    }

    Node * prev = head;
    for(  int i = 1; i < position - 1; i++ ) {
        prev = prev->getNext();
        if( prev == NULL ) {
            delete newNode;
            return false;
        }
    }

    if ( prev->getNext() ) {
        newNode->setNext( prev->getNext() );
    }
    prev->setNext( newNode );

    return true;
}

bool LinkedList::deleteByPos(int position ) {

    if( position <= 0 || head == NULL ) {
        return false;
    }

    if( position == 1 ) {
        Node * del = head;
        head = head->getNext();
        delete del;
        return true;
    }

    Node  * prev = head;
    for( int i = 1; i < position - 1; i++ ) {
        prev = prev->getNext();

        if( prev->getNext() == NULL ) {
            return false;
        }
    }

    Node * del = prev->getNext();

    prev->setNext( del->getNext() );
    delete del;

    return true;
}

bool LinkedList::deleteByVal(int data) {

    if( head == NULL ) {
        return false;
    }

    if( head->getData() == data ) {
        Node * del = head;
        head = head->getNext();
        delete del;
        return true;
    }

    Node * prev = head,  * del = head;
    while( del->getData() != data ) {
        prev = del;
        del = del->getNext();

        if( del == NULL ) {
            return false;
        }
    }

    prev->setNext( del->getNext() );
    delete del;

    return true;
}
LinkedList::~LinkedList() {

    while( head ) {
        Node * del = head;
        head = head->getNext();
        delete del;
    }

}
void LinkedList::displayRev() {

    Node * stack[100];
    int top = -1;

    Node * temp = head;

    while( temp ) {
        stack[++top] = temp;
        temp = temp->getNext();
    }

    while ( top != -1 ) {
        cout<<stack[top--]->getData()<<" ";
    }
    cout<<endl;

}

Node * LinkedList::getHead() {
    return head;
}

void LinkedList::displayRev(Node * head) {

    if( head == NULL ) {
        return;
    }

    displayRev( head->getNext() );
    cout<<head->getData()<<" ";


}
