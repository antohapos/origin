#include "class_Triangle.h"

    bool Triangle::chek() { if (count_of_sides == 3 && A + B + C == 180) return true; else return false; };

    Triangle::Triangle() {};

    Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
        count_of_sides = 3;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        name = "Треугольник";
    };
    void Triangle::get_parameters(Figure& f) {
        std::cout << f.get_name() << std::endl;
        if (Triangle::chek()) std::cout << "Правильная" << std::endl; else  std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон; " << count_of_sides << std::endl;
        std::cout << "Стороны: " << "a=" << a << "  b=" << b << "  c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << "  B=" << B << "  C=" << C << std::endl << std::endl;
    }