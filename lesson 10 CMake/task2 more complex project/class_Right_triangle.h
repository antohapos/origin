#pragma once
#include "class_Triangle.h"
class Right_triangle : public Triangle
{
protected:
    bool chek() override;
public:
    Right_triangle(int a, int b, int c, int A, int B, int C);
};