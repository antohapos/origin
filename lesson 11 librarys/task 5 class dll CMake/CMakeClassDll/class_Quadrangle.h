#pragma once
#ifdef FIGURECLASSDLL_EXPORTS
#define FIGURECLASSDLL_API __declspec(dllexport)
#else
#define FIGURECLASSDLL_API __declspec(dllimport)
#endif
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
    FIGURECLASSDLL_API Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    FIGURECLASSDLL_API void get_parameters(Figure& f) override;
};