#pragma once
#include "class_Quadrangle.h"
class Parallelogram : public Quadrangle
{
protected:
    bool chek() override;
public:
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);
    
};