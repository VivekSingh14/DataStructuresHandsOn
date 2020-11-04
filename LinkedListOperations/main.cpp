#include "Header.h"

int main(int argc, const char * argv[]) {

    LinkedList l1;

    l1.insert( 10 );
    l1.insert( 20 );
    l1.insert( 30 );
    l1.display();
    l1.insert(40, 1);
    l1.display();
    l1.insert(50, 4);
    l1.display();
    l1.insert(60, 6);
    l1.display();
    l1.insert(40, 5);
    l1.display();
    l1.insert(80, 8);
    l1.display();

    l1.deleteByVal( 40 );
    l1.display();
    l1.displayRev();
    l1.displayRev( l1.getHead() );


//    l1.deleteByVal( 50);
//    l1.display();
//    l1.deleteByVal( 60 );
//    l1.display();
//    l1.deleteByVal( 90 );
//    l1.display();

    return 0;
}
