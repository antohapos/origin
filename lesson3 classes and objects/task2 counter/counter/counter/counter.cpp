﻿// counter.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>



class Counter {

protected:
    int count;
public:
    void operation(std::string oper) {
        if (oper == "+") { count++; }
        if (oper == "-") { count--; }
        if (oper == "=") { std::cout << count << std::endl; }
    }
    
    Counter(int count) {
        this->count = count;
    }
    


};

int main()
{
    system("chcp 1251");
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::string c;
    std::cin >> c;
    int C = 1;
    if (c == "да") { 
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> C; }
    Counter counter(C);
    
    for (std::string operation; operation != "x" && operation != "х";) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> operation;
        counter.operation(operation);
    }
    std::cout << "До свидания!";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
