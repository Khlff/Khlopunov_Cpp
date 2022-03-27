#include <iostream>
#include "LinkedList.h"

int main() {
    auto* myList = new LinkedList();
    myList->addLast(222);
    myList->addFirst(5);
    myList->addLast(2);
    myList->addLast(9);
    myList->print();
    myList->removeLast();
    myList->print();
    std::cout<<myList->getLast() << std::endl;
    std::cout<<myList->get(2);
    return 0;
}