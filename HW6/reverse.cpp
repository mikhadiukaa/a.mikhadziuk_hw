#include "reverse.h"
#include <iostream>

void reverseString(char *str) { //переворачивание строки
  int length = 0;
  while (str[length] != '\0') {
    length++;
  }

  for (int i = 0, j = length - 1; i < j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}

void readAndPrintString() { //ввод-вывод строки
  char buffer[100];

  std::cout << "Please, enter a string to reverse: ";
  std::cin.getline(buffer, 100);
  reverseString(buffer);
  std::cout << "Reversed string: " << buffer << std::endl;
}
