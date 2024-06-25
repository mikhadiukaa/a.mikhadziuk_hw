#include <iostream>
#include <string>
#include <vector>

int main() {
    bool mode_flag;
    std::cout << "Welcome to calculator-comparator" << std::endl;
    std::cout << "Please choose an operational mode" << "\n"
            << "Enter '0' for calculation mode, or '1' for comparation mode"
            << std::endl;
    std::cin >> mode_flag;
    if (mode_flag == 0) {
        std::string expression;
        std::vector<char> operations;
        std::vector<float> numbers;
        std::cout << "Please enter an expression, using digits and following symbols: '+', '-', '*', '/'" << std::endl;
        std::cin >> expression;
        unsigned int l = expression.size();
        std::string curr_num = "";
        for (unsigned int i = 0; i <= l; i++) {
            if (expression[i] == '*') {
                operations.push_back('*');
                numbers.push_back(std::stof(curr_num));
                curr_num = "";
            } else if (expression[i] == '+') {
                operations.push_back('+');
                numbers.push_back(std::stof(curr_num));
                curr_num = "";
            } else if (expression[i] == '-') {
                operations.push_back('-');
                numbers.push_back(std::stof(curr_num));
                curr_num = "";
            } else if (expression[i] == '/') {
                operations.push_back('/');
                numbers.push_back(std::stof(curr_num));
                curr_num = "";
            } else {
                curr_num += expression[i];
                if (i == l) {
                    numbers.push_back(std::stof(curr_num));
                }
            }
        }
        float result = numbers[0];
        for (unsigned int i = 0; i < l / 2; i++) {
            if (operations[i] == '+') {
                result += numbers[i + 1];
            } else if (operations[i] == '*') {
                result *= numbers[i + 1];
            } else if (operations[i] == '/') {
                result /= numbers[i + 1];
            } else if (operations[i] == '-') {
                result -= numbers[i + 1];
            }
        }
        std::cout << result << std::endl;
    } else {
        float num_1, num_2;
        std::cout << "Please enter the first number" << std::endl;
        std::cin >> num_1;
        std::cout << "Please enter the second number" << std::endl;
        std::cin >> num_2;
        if (num_1 - num_2 > 1e-7) {
            std::cout << num_1 << " is bigger than " << num_2 << std::endl;
        } else if (num_2 - num_1 > 1e-7) {
            std::cout << num_1 << " is lesser than " << num_2 << std::endl;
        } else {
            std::cout << num_1 << " is equal to " << num_2 << std::endl;
        }
    }
    return 0;
}
