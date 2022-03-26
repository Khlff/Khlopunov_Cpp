#include <iostream>
#include "Node.h"

int main() {
    setlocale(LC_ALL, "Russian");
    Graph* myGraph = new Graph();
    Node *a = new Node(myGraph), *b = new Node(myGraph), *c = new Node(myGraph);
    a->addNeighbor(b);
    b->addNeighbor(c);
    a->getNeighbors();
    b->getNeighbors();
    c->getNeighbors();
}

