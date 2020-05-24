#include <iostream>
#include "Node.h"

int main() {
    Node<std::string> *node = (new Node<std::string>("Sales"))
            ->addChild(new Node<std::string>("Domestics"))
            ->addChild((new Node<std::string>("International"))
                               ->addChild(new Node<std::string>("Canada"))
                               ->addChild(new Node<std::string>("S. America"))
                               ->addChild((new Node<std::string>("OverSeas"))
                                                  ->addChild(new Node<std::string>("Africa"))
                                                  ->addChild(new Node<std::string>("Europa"))
                                                  ->addChild(new Node<std::string>("Asia"))
                                                  ->addChild(new Node<std::string>("Australia"))))
            ->addChild((new Node<std::string>("externational"))
                               ->addChild(new Node<std::string>("Moon"))
                               ->addChild(new Node<std::string>("Mars"))
                               ->addChild(new Node<std::string>("Sun")));
    std::cout << node;
}


