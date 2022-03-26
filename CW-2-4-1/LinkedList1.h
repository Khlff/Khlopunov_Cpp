//
// Created by nikoff on 25.03.2022.
//

#ifndef KHLOPUNOV_CPP_LINKEDLIST1_H
#define KHLOPUNOV_CPP_LINKEDLIST1_H


class LinkedList1 {

public:
    struct Node {
        int value;
        Node *next;

        Node(int _value) {
            value = _value;
        };
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
};


#endif //KHLOPUNOV_CPP_LINKEDLIST1_H
