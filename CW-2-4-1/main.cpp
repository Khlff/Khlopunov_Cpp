#include <iostream>
#include "LinkedList1.h"
#include "DoubleLinkedList.h"

int main() {
    auto* myList = new LinkedList1();
    myList->addLast(222);
    myList->addFirst(5);
    myList->addLast(2);
    myList->addLast(9);

    auto* doubleLinkedList = new DoubleLinkedList();
    doubleLinkedList->fromSingleToDouble(myList->first);
    doubleLinkedList->print();
    return 0;
}