#include "class_Quadrangle.h"

    bool Quadrangle::chek() { if (A + B + C + D == 360 && count_of_sides == 4)  return true; else return false; }

    Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
        count_of_sides = 4;
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        name = "Четырех угольник";
    }
    void Quadrangle::get_parameters(Figure& f) {
        std::cout << f.get_name()<< " (Стороны: " << "a=" << a << "  b=" << b << "  c=" << c << "  d=" << d << 
        " Углы: " << "A=" << A << "  B=" << B << "  C=" << C << "  D=" << D << ") Создан"<<std::endl << std::endl;
    }
