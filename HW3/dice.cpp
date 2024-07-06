#include "dice.h"

#include <random>

int dice_1() { //функция возвращает случайное челое чило из [-5, 5], используя дискретное равномерное распределение
    std::random_device generator;
    std::uniform_int_distribution<int> distribution(-5, 5);
    return distribution(generator);
}

int dice_2() { //функция, полностью идентичная dice_1, мне кажется, что вполне можно было бы обойтись одной
    std::random_device generator;
    std::uniform_int_distribution<int> distribution(-5, 5);
    return distribution(generator);
}
