#include "class_Equilateral_triangle.h"
#include "class_exception.h"

    bool Equilateral_triangle::chek() {
        if (Isosceles_triangle::chek() && A == B && a == b)   return true; else return false;
    }
    Equilateral_triangle::Equilateral_triangle(int a, int b, int c, int A, int B, int C) : Isosceles_triangle(a, b, c, A, B, C) {
        if (a != b && A != B) { throw MyException("������� �� �����, ���� �� �����"); }
        if (a != c) { throw MyException("������� �� �����"); }
        if (A != C) { throw MyException("������ �����"); }
        name = "�������������� �����������";
    }
