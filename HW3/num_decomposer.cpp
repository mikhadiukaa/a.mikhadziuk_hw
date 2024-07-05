#include <iostream>
#include <cmath>

int main() {
    unsigned int num;
    std::cout << "Please enter an unsigned integer type number" << std::endl;
    std::cin >> num;
    int num_length = 0;
    unsigned int num_copy = num;
    while(num_copy > 0) {
        num_copy /= 10;
        num_length++;
    }

    for (int i = num_length - 1; i >= 0; i--) {
        unsigned int digit = num / static_cast<unsigned int>(pow(10, i));
        std::cout << digit << " ";
        num -= digit * static_cast<unsigned int>(pow(10, i));

    }
    return 0;
}