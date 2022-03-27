#ifndef KHLOPUNOV_CPP_NODE_H
#define KHLOPUNOV_CPP_NODE_H

#pragma once
#include "vector"

class Node {
private:
    std::vector<Node*> neighbours;
    int value;
public:
    bool wasSeen = false;

    std::vector<Node*> getNeighbours();
    void addNeighbour(Node* neighbour);
    int getValue();

    Node(int value);
    Node(std::vector<Node*> neighbours, int value);
    ~Node() = default;
};
#endif //KHLOPUNOV_CPP_NODE_H