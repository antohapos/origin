#include "class_Isosceles_triangle.h"
#include "class_exception.h"
Isosceles_triangle::Isosceles_triangle() {};

bool  Isosceles_triangle::chek() { if (C == A && a == c && Triangle::chek())  return true; else return false; };

Isosceles_triangle::Isosceles_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    if (a != c && A != C) { throw MyException("Стороны \"a\" и \"c\" не равны, Углы \"A\" и \"C\" не равны"); }
    if (a != c) { throw MyException("Стороны \"a\" и \"b\" не равны"); }
    if (A != C) { throw MyException("Углы \"A\" и \"B\" не равны"); }
        name = "Равнобедренный треугольник";
}
