

#include <iostream>
#include "counter.h"

int main()
{
    system("chcp 1251");
    int i = 0;
    std::string set;
    char a = 48;
    while (set != "да" && set != "нет") {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> set;
    }
    if (set == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> i;
    }
    Counter c(i);
    while (a != 120) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> a;
        if (a == 61) { std::cout << c.get_count() << std::endl; }
        else { c.set_count(a); }
    }
    std::cout << "До свидания!";
}

