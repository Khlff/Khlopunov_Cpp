#include <iostream>
#include "LinkedListQueue.h"

int main() {
    auto *myQueue = new LinkedListQueue();
    myQueue->enqueue(12);
    myQueue->enqueue(7);
    myQueue->print();
    myQueue->enqueue(99);
    myQueue->print();
    myQueue->dequeue();
    myQueue->print();
    std::cout << myQueue->getFirst() << std::endl;
    myQueue->print();
    return 0;
}