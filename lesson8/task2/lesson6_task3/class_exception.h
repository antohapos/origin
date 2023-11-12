#pragma once
#include <stdexcept>

class MyException : public std::domain_error {
public:
	MyException(const char* message) : std::domain_error(message) { std::cout << "Ошибка создания фигуры: "; }
};