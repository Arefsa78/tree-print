//
// Created by aref on 5/24/20.
//

#ifndef DSHW4_NODE_H
#define DSHW4_NODE_H

#include <iostream>

template<class T>
class Node {
public:

    T data;
    Node *parent;
    Node *rightSibling;
    Node *leftChild;

    Node() {}

    Node(T data,
         Node *parent = nullptr,
         Node *rightSibling = nullptr,
         Node *leftChild = nullptr) : data(data), parent(parent),
                                      rightSibling(rightSibling),
                                      leftChild(leftChild) {}

    Node *addChild(Node *node) {
        if (this->leftChild == nullptr) {
            this->leftChild = node;
        } else {
            Node *p = this->leftChild;
            while (p->rightSibling != nullptr)
                p = p->rightSibling;

            p->rightSibling = node;
        }
        node->parent = this;
        return this;
    }

};

std::ostream &operator<<(std::ostream &os, const Node<std::string> *node) {
    static int i = 0;
    std::string tabs = "";
    for (int j = 1; j <= i; j++)
        tabs += '\t';
    os << "\n" << tabs << node->data;
    if (node->leftChild != nullptr) {
        i++;
        os << "(" << node->leftChild << ")";
        i--;
    }
    if (node->rightSibling != nullptr) {
        os << ',' << node->rightSibling;
    }
    return os;
}


#endif //DSHW4_NODE_H
