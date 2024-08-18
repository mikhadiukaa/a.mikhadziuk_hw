#pragma once
#include "tree.h"
#include <iostream>
#include <vector>
class tree;
class forest {
public:
  forest(){};
  ~forest() {
    for (auto t : trees)
      delete t;
  }
  forest(const forest &original_forest);
  forest &operator=(const forest &rhs);
  void growUp(const tree &new_tree);
  void cutAll();
  forest operator+(const forest &rhs);
  void wind();

private:
  std::vector<tree *> trees;
};
