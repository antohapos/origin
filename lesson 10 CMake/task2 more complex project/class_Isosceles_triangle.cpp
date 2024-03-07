#include "class_Isosceles_triangle.h"
Isosceles_triangle::Isosceles_triangle() {};

bool  Isosceles_triangle::chek() { if (C == A && a == c && Triangle::chek())  return true; else return false; };

Isosceles_triangle::Isosceles_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
        name = "Равнобедренный треугольник";
}
