#ifndef KHLOPUNOV_CPP_GRAPH_H
#define KHLOPUNOV_CPP_GRAPH_H

#include "Node.h"

class Graph {
private:
    std::vector<Node*> nodes;
    static Node* getNextNeighbor(Node* parentNode);
public:
    std::vector<Node*> getNodes();
    void addNode(Node* node);
    void zeroingFlags(std::vector<Node*>& nodes);
    Node* searchInDepth(int value);
    Node* searchInWidth(int value);

    Graph();
    ~Graph() = default;
};

#endif //KHLOPUNOV_CPP_GRAPH_H
