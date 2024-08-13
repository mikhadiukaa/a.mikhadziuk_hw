#include "rand.h"
#include <iostream>
#include <bits/stdc++.h>
#include <vector>

int main() {
  int length;
  std::cout << "Please, enter the length of the array: " << std::endl;
  std::cin >> length;
  std::vector<int> array(length);
  for (int i = 0; i < length; i++) {
    array[i] = rand_int(1, 100);
  }
  std::cout << "Unsorted array: ";
  for (int i = 0; i < length; i++) {

    std::cout << array[i];
    if (i < length - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "\n";
  sort(array.begin(), array.end());
  std::cout << "Sorted array: ";
  for (int i = 0; i < length; i++) {

    std::cout << array[i];
    if (i < length - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "\n";
  return 0;
}
