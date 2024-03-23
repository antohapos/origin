#pragma once
#ifdef FIGURECLASSDLL_EXPORTS
#define FIGURECLASSDLL_API __declspec(dllexport)
#else
#define FIGURECLASSDLL_API __declspec(dllimport)
#endif
#include "class_Isosceles_triangle.h"
class Equilateral_triangle : public Isosceles_triangle
{
public:
    FIGURECLASSDLL_API bool chek() override;
    FIGURECLASSDLL_API Equilateral_triangle(int a, int b, int c, int A, int B, int C);
};