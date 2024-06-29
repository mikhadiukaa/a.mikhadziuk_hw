#include <iostream>

int main() {
#ifdef _WIN32
    std::cout << "Running on Windows" << std::endl;
    std::system("ver");
    std::cout << "MS Visual C++ compiler version:" << _MSC_VER << std::endl;
#elif __linux__

    std::cout << "Running on Linux" << std::endl;
    std::system("cat /etc/os-release");
    std::system("g++ -v");
#endif
    return 0;
}
