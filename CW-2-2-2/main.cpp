#include <iostream>
#include "LinkedListStack.h"

int main() {
    auto *myStack = new LinkedListStack();
    myStack->push(12);
    myStack->push(2);
    myStack->push(15);
    myStack->print();
    std::cout << myStack->getTop() << std::endl;
    myStack->pop();
    myStack->print();
    return 0;
}
