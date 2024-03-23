#pragma once
#ifdef FIGURECLASSDLL_EXPORTS
#define FIGURECLASSDLL_API __declspec(dllexport)
#else
#define FIGURECLASSDLL_API __declspec(dllimport)
#endif
#include "class_Rectangle.h"
class Square : public Rectangle
{
protected:
    bool chek() override;
public:
    FIGURECLASSDLL_API Square(int a, int b, int c, int d, int A, int B, int C, int D);
};