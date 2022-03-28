#include <iostream>
#include "LinkedList1.h"
#include "DoubleLinkedList.h"

int main() {
    LinkedList1* myList = new LinkedList1();
    myList->addFirst(5);
    myList->addLast(3);
    myList->print();

    auto* doubleLinkedList = new DoubleLinkedList();
    doubleLinkedList->fromSingleToDouble(myList->first);
    doubleLinkedList->print();
    return 0;
}