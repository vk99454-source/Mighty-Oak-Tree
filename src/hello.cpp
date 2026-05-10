#include "hello.hpp"

Node::Node(Squirrel squirrel) : squirrel(squirrel) {
    leftChild = nullptr;
    rightChild = nullptr;
}
void Node::setLeft(Node* node) {
leftChild = node;
}
void Node::setRight(Node* node) {
rightChild = node;
}
Node* Node::left() const {
return leftChild;
}
Node* Node::right() const {
return rightChild;
}
Squirrel Node::getSquirrel() const {
return squirrel;
}