#include <iostream>
#include <string>

class MyExeption : public std::domain_error {
public:
    MyExeption(const char* message) : std::domain_error(message) {}
  
};


void foo(int a) {

    if (a == 0) {
        throw MyExeption("Запрещеное число");
    }
    std::cout << a << std::endl;
}

int main() {
    system("chcp 1251");
    std::cout << "Hello World!\n";
    int a = 0;
    try {
        foo(a);
    }
    catch (MyExeption& e) {
        std::cout << e.what() << std::endl;
    }
}