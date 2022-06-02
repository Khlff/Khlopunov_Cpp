#ifndef KHLOPUNOV_CPP_NODE_H
#define KHLOPUNOV_CPP_NODE_H
#include <memory>

#pragma once
class Node {
private:
    int value;

public:
    std::shared_ptr<Node> nextNode;
    Node(int value_);
    Node();
    int getValue();
};


#endif //KHLOPUNOV_CPP_NODE_H
