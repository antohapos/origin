

#include <iostream>
#include "GreeterLib.h"

int main()
{
    system("chcp 1251");
    GreeterLib::Greeter greeting;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << greeting.greeting(name);
}

