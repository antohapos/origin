#include "class_Triangle.h"
#include "class_exception.h"

    bool Triangle::chek() { if (count_of_sides == 3 && A + B + C == 180) return true; else return false; };

    Triangle::Triangle() {};

    Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
        if (A + B + C != 180) { throw MyException("сумма углов не равна 180"); }
        else {
            count_of_sides = 3;
            this->a = a;
            this->b = b;
            this->c = c;
            this->A = A;
            this->B = B;
            this->C = C;
            name = "Треугольник";
        }
    };
    void Triangle::get_parameters(Figure& f) {
        std::cout << f.get_name() << "(Стороны: " << "a=" << a << "  b=" << b << "  c=" << c <<
        "Углы: " << "A=" << A << "  B=" << B << "  C=" << C << ") Создан" << std::endl << std::endl;
    }
