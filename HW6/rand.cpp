#include "rand.h"
#include <random>

int rand_int(int beg,
             int end) { //функция возвращает случайное челое чило из [beg, end],
                        //используя дискретное равномерное распределение
  std::random_device generator;
  std::uniform_int_distribution<int> distribution(beg, end);
  return distribution(generator);
}
