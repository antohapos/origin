#pragma once
#ifdef FIGURECLASSDLL_EXPORTS
#define FIGURECLASSDLL_API __declspec(dllexport)
#else
#define FIGURECLASSDLL_API __declspec(dllimport)
#endif
#include "class_triangle.h"
class Isosceles_triangle : public Triangle
{
protected:
    Isosceles_triangle();
public:
    FIGURECLASSDLL_API bool chek() override ;
    FIGURECLASSDLL_API Isosceles_triangle(int a, int b, int c, int A, int B, int C);
};