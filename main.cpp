#include <iostream>

int main() {
    int a1;
    std::cout << "Введите число a1: ";
    std::cin >> a1;

    int a2;
    std::cout << "Введите число a2: ";
    std::cin >> a2;
    
    std::cout << "Сумма a1 и a2: " << (a1 + a2) << std::endl;
    std::cout << "Произведение a1 и a2: " << (a1 * a2) << std::endl;
    return 0;
}