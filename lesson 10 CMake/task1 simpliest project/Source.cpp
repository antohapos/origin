#include <iostream>
#include <string>

int main(){
	system("chcp 1251");
	std::string a;
	std::cout << "Введите имя: ";
	std::cin >> a;
	std::cout << "Здравствуйте, " << a << std::endl;
	system("pause");
	return 0;

}