#include "Graph.h"

std::vector<Node*> Graph::getNodes() {
    return this->nodes;
}

void Graph::addNode(Node *node) {
    this->nodes.push_back(node);
}

Graph::Graph() {
    this->nodes = std::vector<Node*>();
}