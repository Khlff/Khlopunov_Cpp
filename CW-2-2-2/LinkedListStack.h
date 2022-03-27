#ifndef KHLOPUNOV_CPP_LINKEDLIST_H
#define KHLOPUNOV_CPP_LINKEDLIST_H

#include "string"

class LinkedList {
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
    void push(int value);

    int pop();

    int getTop();

    void print() const;
};


#endif //KHLOPUNOV_CPP_LINKEDLIST_H
