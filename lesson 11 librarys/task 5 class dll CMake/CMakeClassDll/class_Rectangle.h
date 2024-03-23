#pragma once
#ifdef FIGURECLASSDLL_EXPORTS
#define FIGURECLASSDLL_API __declspec(dllexport)
#else
#define FIGURECLASSDLL_API __declspec(dllimport)
#endif
#include "class_Quadrangle.h"

class Rectangle : public Quadrangle
{
protected:
    bool chek() override;
public:
    FIGURECLASSDLL_API Rectangle(int a, int b, int c, int d, int A, int B, int C, int D);
};