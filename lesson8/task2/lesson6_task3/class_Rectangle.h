#pragma once
#include "class_Quadrangle.h"

class Rectangle : public Quadrangle
{
protected:
    bool chek() override;
public:
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D);
};