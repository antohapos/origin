#define MODE 1

#include <iostream>
#if MODE == 1
int sum(int a, int b) { return a + b; }
#endif
int main()
{
	system("chcp 1251");
#if MODE == 1
	int a;
	int b;
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1: ";
	std::cin >> a;
	std::cout << "Введите число 2: ";
	std::cin >> b;
	std::cout << "Результат сложения: " << sum(a, b);

#elif MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#else
	std::cout << "Неизвестный режим" << std::endl;
#endif
}


