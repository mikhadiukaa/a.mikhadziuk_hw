#include "forest.h"

forest &forest::operator=(const forest &rhs) {
  for (auto t : trees)
    delete t;
  for (auto t : rhs.trees)
    this->trees.push_back(new tree(*t));
  return *this;
}

void forest::growUp(const tree &new_tree) {
  trees.push_back(new tree(new_tree));
}

void forest::cutAll() { trees.clear(); }

forest forest::operator+(const forest &rhs) {
  forest newForest;
  for (auto t : trees)
    newForest.growUp(*t);
  for (auto t : rhs.trees)
    newForest.growUp(*t);
  return newForest;
}

void forest::wind() {
  for (auto t : trees)
    t->wind();
}
forest::forest(const forest &original_forest) {
  for (auto t : original_forest.trees)
    this->trees.push_back(new tree(*t));
}
