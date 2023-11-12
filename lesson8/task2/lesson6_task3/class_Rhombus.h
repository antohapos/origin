#pragma once
#include "class_Parallelogram.h"
class Rhombus : public Parallelogram
{
protected:
    bool chek() override;
public:
    Rhombus(int a, int b, int c, int d, int A, int B, int C, int D);
};