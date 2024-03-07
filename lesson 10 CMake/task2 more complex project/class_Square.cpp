
#include "class_Square.h" 
bool Square::chek()  {
    if (Rectangle::chek() && a == b)return true; else return false;
}
    Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Rectangle(a, b, c, d, A, B, C, D) {
        name = " вадрат";
    }
