#include "LinkedListQueue.h"
#include "iostream"

void LinkedListQueue::print() const {
    if (first == nullptr) return;
    Node *pNode = first;
    while (pNode) {
        std::cout << pNode->value << " ";
        pNode = pNode->next;
    }
    std::cout << std::endl;
}

int LinkedListQueue::dequeue() {
    if (first != nullptr) {
        int firstElementValue = first->value;
        Node *second = first->next;
        first = second;
        return firstElementValue;
    }
}

int LinkedListQueue::getFirst() const {
    return first->value;
};

void LinkedListQueue::enqueue(int value) {
    Node *pNode = new Node(value);
    if (first == nullptr) {
        first = pNode;
        last = pNode;
        return;
    }
    last->next = pNode;
    last = pNode;
}