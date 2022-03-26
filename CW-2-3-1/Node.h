#ifndef KHLOPUNOV_CPP_NODE_H
#define KHLOPUNOV_CPP_NODE_H

#include "Graph.h"
#include <vector>

#pragma once

class Node {
private:
    std::vector<Node*> neighbors;
public:
    std::vector<Node*> getNeighbors();

    void addNeighbor(Node *neighbor);

    Node(Graph *ownerGraph);

    Node(std::vector<Node *> neighbors, Graph *ownerGraph);

    ~Node();
};

#endif //KHLOPUNOV_CPP_NODE_H