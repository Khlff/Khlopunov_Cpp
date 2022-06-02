#ifndef KHLOPUNOV_CPP_LINKEDLISTSTACK_H
#define KHLOPUNOV_CPP_LINKEDLISTSTACK_H

#include "iostream"
#include "Node.h"
#pragma once
class LinkedListStack {
private:
    std::shared_ptr<Node> firstNode;
public:
    LinkedListStack();
    void push();
    int pop();
    int getTop();
};

#endif //KHLOPUNOV_CPP_LINKEDLISTSTACK_H