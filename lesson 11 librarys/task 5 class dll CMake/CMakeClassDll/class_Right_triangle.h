#pragma once
#ifdef FIGURECLASSDLL_EXPORTS
#define FIGURECLASSDLL_API __declspec(dllexport)
#else
#define FIGURECLASSDLL_API __declspec(dllimport)
#endif
#include "class_Triangle.h"
class Right_triangle : public Triangle
{
protected:
    bool chek() override;
public:
    FIGURECLASSDLL_API Right_triangle(int a, int b, int c, int A, int B, int C);
};