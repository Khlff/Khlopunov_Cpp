#include "DoubleLinkedList.h"
#include "string"
#include "iostream"

void DoubleLinkedList::print() {
    if (first == nullptr) return;
    Node *pNode = first;
    while (pNode) {
        std::cout<< pNode->prev->value<< " " << pNode->value << " " << pNode->next->value << " ";
        pNode = pNode->next;
    }
    std::cout << std::endl;
};

void DoubleLinkedList::addFirst(int value) {
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

void DoubleLinkedList::addLast(int value) {
    Node *pNode = new Node(value);
    if (first == nullptr) {
        first = pNode;
        last = pNode;
        return;
    }
    last->next = pNode;
    last = pNode;
};

void DoubleLinkedList::removeFirst() {
    if (first == nullptr) {
        return;
    }
    Node *second = first->next;
    first = second;
};

void DoubleLinkedList::removeLast() {
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

int DoubleLinkedList::getFirst() {
    return first->value;
};

int DoubleLinkedList::getLast() {
    return last->value;
};

int DoubleLinkedList::get(int value) {
    Node *iter = first;
    for (int i = 0; i < value; i++) {
        iter = iter->next;
    }
    return iter->value;
}

DoubleLinkedList DoubleLinkedList::fromSingleToDouble(LinkedList1::Node *node) {
    DoubleLinkedList *doubleLinkedList = new DoubleLinkedList();
    Node *mappedNode = new Node(node->value);
    doubleLinkedList->first = mappedNode;

    while (mappedNode->next) {
        Node *tempNode = mappedNode;
        mappedNode = mappedNode->next;
        mappedNode->prev = tempNode;
    }
    Node *tempNode = mappedNode;
    mappedNode = mappedNode->next;
    mappedNode->prev = tempNode;
    return *doubleLinkedList;
}

