#include "class_Rhombus.h"

    bool Rhombus::chek() { if (Parallelogram::chek() && a == b) return true; else return false; }

    Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D) {
        name = "Ромб";
    }
