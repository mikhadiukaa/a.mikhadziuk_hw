#include <cmath>
#include "factorial_calculation_func.h"

int func_fact_int(int num_for_fact) {
    int result = 1;
    for (int i = 1; i <= num_for_fact; i++) {
        result *= i;
    }
    return result;
}

float func_fact_float(float num_for_fact) {
    return tgammaf(num_for_fact + 1);
}
