#pragma once
#include "class_Rectangle.h"
class Square : public Rectangle
{
protected:
    bool chek() override;
public:
    Square(int a, int b, int c, int d, int A, int B, int C, int D);
};