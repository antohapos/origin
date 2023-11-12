#include "class_Rectangle.h"
#include "class_exception.h"


bool Rectangle::chek() { 
    if (Quadrangle::chek() && A == 90 && B == 90 && C == 90 && a == c && b == d)  return true; else return false;
}

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
    if ( A == 90 && B == 90 && C == 90 && a == c && b == d) { name = "прямоугольник"; }
    else{ throw MyException("стороны попарно не равны или углы не равны 90 градусов"); }
    }