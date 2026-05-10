#include <string>
using namespace std;

class Squirrel {
private:
    string name;
    public:
    Squirrel(string name) {
        this->name = name;
    }
    string getName() {
        return this->name;
    }
};
class Node {
private:
    Squirrel squirrel;
    Node* leftChild;
    Node* rightChild;
    public:
    Node(Squirrel squirrel);
    void setLeft(Node* node);
    void setRight(Node* node);
    Node* left() const;
    Node* right() const;
    Squirrel getSquirrel() const;
};