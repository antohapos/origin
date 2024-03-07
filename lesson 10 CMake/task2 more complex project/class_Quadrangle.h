#pragma once
#include "class_Figure.h"
#include <iostream>

class Quadrangle : public Figure
{
protected:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
    bool chek() override;
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    void get_parameters(Figure& f) override;
};