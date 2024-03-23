
#include <iostream>
#include "LeaverLib.h"

int main()
{
    system("chcp 1251");
    LeaverLib::Leave leave;
    std::string name;
    std::cout << "¬ведите им€: ";
    std::cin >> name;
    std::cout << leave.leave(name);
    system("pause");
    return 0;
}

