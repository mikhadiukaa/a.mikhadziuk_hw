#include "tree.h"
tree::tree() {
  count++;
  this->name = "Unknown tree";
  this->id = count + 1;
}

tree::tree(std::string name) {
  count++;
  this->name = name;
  this->id = count + 1;
}

tree::tree(const tree &original_tree) {
  count++;
  this->name = original_tree.name;
  this->id = count + 1;
}

void tree::wind() {
  std::cout << "id: " << getId(this) << std::endl;
  std::cout << "Name: " << getName(this) << "\n" << std::endl;
}
int tree::count = 0;
