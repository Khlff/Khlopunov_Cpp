#include "LinkedList1.h"
#include "iostream"

void LinkedList1::print() {
    if (first == nullptr) return;
    Node *pNode = first;
    while (pNode) {
        std::cout << pNode->value << " ";
        pNode = pNode->next;
    }
    std::cout << std::endl;
};

void LinkedList1::addFirst(int value) {
    Node *pNode = new Node(value);
    if (first == nullptr) {
        first = pNode;
        last = pNode;
        return;
    }
    Node *first_ = first;
    first = pNode;
    first->next = first_;
};

void LinkedList1::addLast(int value) {
    Node *pNode = new Node(value);
    if (first == nullptr) {
        first = pNode;
        last = pNode;
        return;
    }
    last->next = pNode;
    last = pNode;
};

void LinkedList1::removeFirst() {
    if (first == nullptr) {
        return;
    }
    Node *second = first->next;
    first = second;
};

void LinkedList1::removeLast() {
    if (first == nullptr) {
        return;
    }
    Node *temp = first;
    while (temp->next->next) {
        temp = temp->next;
    }
    last = temp;
    temp->next = nullptr;
};

int LinkedList1::getFirst() {
    return first->value;
};

int LinkedList1::getLast() {
    return last->value;
};

int LinkedList1::get(int value) {
    Node *iter = first;
    for (int i = 0; i < value; i++) {
        iter = iter->next;
    }
    return iter->value;
};