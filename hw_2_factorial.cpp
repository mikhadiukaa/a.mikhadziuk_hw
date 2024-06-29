#include <iostream>
#include "factorial_calculation_func.h"
#define INT_MODE


int main() {
#ifdef INT_MODE
    int int_for_fact;
    std::cout << "To calculate the factorial, please enter a number" << std::endl;
    std::cin >> int_for_fact;
    std::cout<<"The factorial of " << int_for_fact << " is " << func_fact_int(int_for_fact) << std::endl;
#endif
#ifdef FLOAT_MODE
    float float_for_fact;
    std::cout << "To calculate the factorial, please enter a float" << std::endl;
    std::cin >> float_for_fact;
    std::cout << "The factorial of " << float_for_fact << " is " << func_fact_float(float_for_fact) << std::endl;
#endif

    return 0;
}
