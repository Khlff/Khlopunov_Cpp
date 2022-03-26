#ifndef KHLOPUNOV_CPP_LINKEDLIST_H
#define KHLOPUNOV_CPP_LINKEDLIST_H

#include "string"
#include "LinkedList.h"
#include "LinkedList1.h"

class DoubleLinkedList {
private:


public:

    struct Node {
        int value;
        Node *next;
        Node *prev;

        Node(int _value) {
            value = _value;
        };
        Node() = default;
    };
    Node *first = nullptr;
    Node *last = nullptr;
public:
    void addFirst(int value);

    void addLast(int value);

    void removeFirst();

    void removeLast();

    int getFirst();

    int getLast();

    int get(int value);

    void print();

    static DoubleLinkedList fromSingleToDouble(LinkedList1::Node* node);
};


#endif //KHLOPUNOV_CPP_LINKEDLIST_H
