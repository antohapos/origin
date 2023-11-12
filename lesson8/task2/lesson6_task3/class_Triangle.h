#pragma once
#include "class_Figure.h"
class Triangle : public Figure
{
protected:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
    bool chek() override;
    Triangle();
public:
    
        Triangle(int a, int b, int c, int A, int B, int C);
   
    void get_parameters(Figure& f) override; 
};