#pragma once
#include "class_triangle.h"
class Isosceles_triangle : public Triangle
{
protected:
    Isosceles_triangle();
public:
    bool chek() override ;
    Isosceles_triangle(int a, int b, int c, int A, int B, int C);
};