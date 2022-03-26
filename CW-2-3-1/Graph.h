#ifndef KHLOPUNOV_CPP_GRAPH_H
#define KHLOPUNOV_CPP_GRAPH_H

#pragma once
#include "Node.h"
#include "vector"

class Graph {
private:
    std::vector<Node*> nodes = std::vector<Node*>();
public:
    Graph();

    std::vector<Node *> getNodes();

    void addNode(Node *node);

    ~Graph() = default;
};

#endif //KHLOPUNOV_CPP_GRAPH_H
