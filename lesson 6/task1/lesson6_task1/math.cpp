
#include <iostream>
#include "math.h"

void math(double a, double b, int c) {
	switch (c) {
	case 1:  std::cout << "� " << a << " ��������� " << b << " = " << a + b << std::endl;
		break;
	case 2:  std::cout << "�� " << a << " ������� " << b << " = " << a - b << std::endl;
		break;
	case 3:  std::cout << a << " �������� �� " << b << " = " << a * b << std::endl;
		break;
	case 4: std::cout << a << " ��������� " << b << " = " << a / b << std::endl;
		break;
	case 5: static_cast<double>(c = a);
		for (int i = 1; i < b; i++) { c = c * a; }
		std::cout << a << " � ������� " << b << " = " << c << std::endl;
		break;
	}
}