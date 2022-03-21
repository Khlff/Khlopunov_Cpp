#include "Node.h"
#include "vector"

Node::Node() {
    this->neighbors = std::vector<Node *>();
}

Node::Node(std::vector<Node *> n) {
    this->neighbors = n;
}

Node::~Node() = default;

void Node::addNeighbor(Node *neighbor) {
    this->neighbors.push_back(neighbor);
}

std::vector<Node *> Node::getNeighbors() {
    return this->neighbors;
}
