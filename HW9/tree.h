#pragma once
#include <iostream>
#include <string>

class tree {
public:
  static int count;
  tree();

  tree(std::string name);

  tree(const tree &original_tree);

  static std::string getName(tree *obj) { return obj->name; }
  static int getId(tree *obj) { return obj->id; }

  void wind();

  ~tree() { count--; }

private:
  int id;
  std::string name;
};
