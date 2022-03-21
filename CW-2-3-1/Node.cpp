#include "Node.h"

Node::Node() {
    this->neighbors = std::vector<Node *>();
}

Node::Node(std::vector<Node *> n) {
    this->neighbors = n;
}

Node::~Node() = default;

void Node::AddNeighbor(Node *neighbor) {

}

std::vector<Node *> Node::getNeighbors() {
    return std::vector<Node *>
    neighbors;
}
