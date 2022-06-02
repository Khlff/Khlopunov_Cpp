#include "Node.h"

Node::Node(int value_) {
        value = value_;
        nextNode = nullptr;
};

Node::Node() {
    value = 0;
    nextNode = nullptr;
}

int Node::getValue() {
    return this->value;
}