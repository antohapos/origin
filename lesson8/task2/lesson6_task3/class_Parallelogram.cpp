#include "class_Parallelogram.h"
#include "class_exception.h"

    bool Parallelogram::chek() {
        if (Quadrangle::chek() && A == C && B == D && a == c && b == d)  return true; else return false;
    }

    Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
        if (A == C && B == D && a == c && b == d) { name = "ѕараллелограм"; }
        else {throw MyException("стороны или углы по парно не равны");}
    }
