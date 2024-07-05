#include "dice.h"

#include <random>

int dice_1() {
    std::random_device generator;
    std::uniform_int_distribution<int> distribution(-5, 5);
    return distribution(generator);
}

int dice_2() {
    std::random_device generator;
    std::uniform_int_distribution<int> distribution(-5, 5);
    return distribution(generator);
}
