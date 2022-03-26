#ifndef KHLOPUNOV_CPP_LINKEDLIST_H
#define KHLOPUNOV_CPP_LINKEDLIST_H

#pragma once

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
    void addFirst(int value);

    void addLast(int value);

    void removeFirst();

    void removeLast();

    int getFirst();

    int getLast();

    int get(int value);

    void print();
};


#endif //KHLOPUNOV_CPP_LINKEDLIST_H
