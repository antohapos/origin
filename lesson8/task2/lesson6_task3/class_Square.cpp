
#include "class_Square.h" 
#include "class_exception.h"
bool Square::chek()  {
    if (Rectangle::chek() && a == b)return true; else return false;
}
    Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Rectangle(a, b, c, d, A, B, C, D) {
        if (a == b) { throw MyException("стороны не равны"); }
        else{name = " вадрат";
        }
    }
