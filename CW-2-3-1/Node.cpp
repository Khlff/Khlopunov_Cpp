#include "Node.h"

Node::Node(Graph* ownerGraph) {
    this->neighbors = std::vector<Node *>();
    ownerGraph->addNode(this);
}

Node::Node(std::vector<Node *> n, Graph* ownerGraph) {
    this->neighbors = n;
    ownerGraph->addNode(this);
}

Node::~Node() = default;

void Node::addNeighbor(Node* neighbor) {
    this->neighbors.push_back(neighbor);
    neighbor->neighbors.push_back(this);
}

std::vector<Node *> Node::getNeighbors() {
    return this->neighbors;
}