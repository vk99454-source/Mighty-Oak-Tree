#include <iostream>

#include "src/hello.hpp"
using namespace std;

int main() {
  Squirrel cheeks("Cheeks");
  Squirrel squeaks("Squeaks");
  Squirrel fluffy("Mr. Fluffy Butt");
  Node root(cheeks);
  Node leftNode(squeaks);
  Node rightNode(fluffy);
  root.setLeft(&leftNode);
  root.setRight(&rightNode);
  cout << "Root: " << root.getSquirrel().getName() << endl;
  cout << "Left: " << root.left()->getSquirrel().getName() << endl;
  cout << "Right: " << root.right()->getSquirrel().getName() << endl;
  return 0;
}