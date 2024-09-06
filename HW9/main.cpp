#include "forest.h"
#include "tree.h"

int main() {
  tree un;
  tree oak("Oak");
  tree linden("Linden");
  oak.wind();
  linden.wind();
  tree ash("Ash");
  ash.wind();
  un.wind();
  tree pine("Pine");
  tree maple("Maple");

  forest myForest;
  myForest.growUp(pine);
  myForest.growUp(maple);
  myForest.wind();
  myForest.cutAll();

  forest newForest;
  newForest.growUp(oak);
  newForest.growUp(tree("Spruce"));
  newForest.wind();

  forest bigForest;
  for (int i = 0; i < 10; ++i)
    bigForest.growUp(tree("Cedar"));
  bigForest.wind();

  forest bothForests = bigForest + newForest;
  bothForests.wind();
  bothForests.cutAll();
  bothForests.wind();
  return 0;
}
