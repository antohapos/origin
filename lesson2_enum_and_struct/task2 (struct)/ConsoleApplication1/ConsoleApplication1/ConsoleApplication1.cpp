

#include <iostream>
#include <string>
#include <clocale>


struct bank_account {
    int number;
    std::string name;
    double balance;

}; 
void change_balance(bank_account& p, double new_balance){
    p.balance = new_balance;
};

int main()
{
   // setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    bank_account account;
    bank_account* acc = &account;
    std::cout << "Введите номер счета: ";
    std::cin >> account.number;
    std::cout << "Введите имя: ";
    std::cin >> acc->name;
    std::cout << "Введите баланс: ";
    std::cin >> account.balance;
    std::cout << "Введите новый баланс: ";
    double new_balance;
    std::cin >> new_balance;
    change_balance(account, new_balance);
    std::cout << "Ваш счет: " << account.name << ", " << account.number <<  ", " << account.balance;

}

