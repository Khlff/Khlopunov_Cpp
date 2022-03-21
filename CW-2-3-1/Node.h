#include <set>
#include <vector>

#ifndef KHLOPUNOV_CPP_NODE_H
#define KHLOPUNOV_CPP_NODE_H


class Node {
private:
    std::vector<Node *> neighbors;
public:
    static std::vector<Node *> getNeighbors();

    void addNeighbor(Node *neighbor);

    Node();

    Node(std::vector<Node *> neighbors);

    ~Node();
};


#endif //KHLOPUNOV_CPP_NODE_H
