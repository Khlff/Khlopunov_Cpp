#ifndef KHLOPUNOV_CPP_LINKEDLIST_H
#define KHLOPUNOV_CPP_LINKEDLIST_H

#include "string"

class LinkedListQueue {
private:
    struct Node {
        int value;
        Node *next;

        Node(int _value) {
            value = _value;
        };
    };

public:
    Node *first = nullptr;
    Node *last = nullptr;

public:
    void enqueue(int value);

    int dequeue();

    int getFirst() const;

    void print() const;
};


#endif //KHLOPUNOV_CPP_LINKEDLIST_H
