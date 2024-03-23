#pragma once
#ifdef FIGURECLASSDLL_EXPORTS
#define FIGURECLASSDLL_API __declspec(dllexport)
#else
#define FIGURECLASSDLL_API __declspec(dllimport)
#endif
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
    FIGURECLASSDLL_API Triangle(int a, int b, int c, int A, int B, int C);
    FIGURECLASSDLL_API void get_parameters(Figure& f) override;
};