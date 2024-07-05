#include <iostream>
int main() {
    for(int i=1; i <= 10; i++) {
        for(int j=1; j <= 10; j++) {
            std::cout << " " << j <<  "*" << i << "=" <<i*j;
            if (i != 10) {
                std::cout << " ";
                if (j == 10) {
                    std::cout << " ";
                }
            }
            if ((i*j)/10 == 0) {
                std::cout << " ";
            }
            std::cout << " | " ;
        }
        std::cout << "\n";
    }
    return 0;
}