#include <iostream>
#include <string>

int main(){
	system("chcp 1251");
	std::string a;
	std::cout << "������� ���: ";
	std::cin >> a;
	std::cout << "������������, " << a << std::endl;
	system("pause");
	return 0;

}