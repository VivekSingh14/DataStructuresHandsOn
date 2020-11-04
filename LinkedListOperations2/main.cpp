#include "Header.h"

int main(int argc, const char* argv[]){

    LinkedList l1;

    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);

    l1.display();


    l1.insert(100,1);
    l1.insert(300,3);
    l1.display();
    return 0;
}
