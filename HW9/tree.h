#pragma once
#include <iostream>
#include <string>

class tree {
public:
  static int count;
  tree();

  tree(std::string name);

  tree(const tree &original_tree);

  const std::string getName(tree *obj) { return obj->name; }
  const int getId(tree *obj) { return obj->id; }

  void wind();

  ~tree() { count--; }

private:
  int id;
  std::string name;
};
