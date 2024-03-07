#pragma once
#include "class_Isosceles_triangle.h"
class Equilateral_triangle : public Isosceles_triangle
{
public:
    bool chek() override;
    Equilateral_triangle(int a, int b, int c, int A, int B, int C);
};