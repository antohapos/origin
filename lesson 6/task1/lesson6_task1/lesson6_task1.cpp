
#include <iostream>
#include "math.h"

int main()
{
    system("chcp 1251");
    double a;
    double b;
    int c;
    while (true) {
        std::cout << "Введите первое число:";
        std::cin >> a;
        std::cout << "Введите второе число:";
        std::cin >> b;
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        std::cin >> c;
        math(a, b, c);
    }
}


