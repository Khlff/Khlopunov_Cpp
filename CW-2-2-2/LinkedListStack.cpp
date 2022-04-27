#include "LinkedListStack.h"
#include "iostream"

void LinkedList::print() const {
    if (first == nullptr) return;
    Node *pNode = first;
    while (pNode) {
        std::cout << pNode->value << " ";
        pNode = pNode->next;
    }
    std::cout << std::endl;
};

void LinkedList::push(int value) {
    Node *pNode = new Node(value);
    if (first == nullptr) {
        first = pNode;
        last = pNode;
        return;
    }
    last->next = pNode;
    last = pNode;
}

int LinkedList::pop() {
    if (first != nullptr) {
        int poppedElement = last->value;
        Node *temp = first;
        while (temp->next->next) {
            temp = temp->next;
        }
        last = temp;
        temp->next = nullptr;
        return poppedElement;
    }
}

int LinkedList::getTop() {
    return last->value;
};
