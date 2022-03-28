#ifndef KHLOPUNOV_CPP_LINKEDLIST_H
#define KHLOPUNOV_CPP_LINKEDLIST_H
#include "LinkedList1.h"

class DoubleLinkedList {
private:

        Node(int _value) {
            value = _value;
        };
        ~Node() = default;
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

    DoubleLinkedList fromSingleToDouble(LinkedList1::Node *node);
};


#endif //KHLOPUNOV_CPP_LINKEDLIST_H
