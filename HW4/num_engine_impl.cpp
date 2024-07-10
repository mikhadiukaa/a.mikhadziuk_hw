#include <iostream>

int num_processor(int num) {
    //обрабатывает число в зависимости от его свойств, согласно условию задачи
    (num > 0 && num % 2 == 0) ? num = num << 2 : num = num >> 2;
    return num;
}

void in_out_processor(std::string intro_string) {
    //функция для ввода и вывода
    std::cout << intro_string << std::endl;
    int num;
    std::cin >> num;
    std::cout << num_processor(num);
}
