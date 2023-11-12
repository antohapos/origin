#include "class_Rhombus.h"
#include "class_exception.h"

    bool Rhombus::chek() { if (Parallelogram::chek() && a == b) return true; else return false; }

    Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D) {
        if (a == b) { name = "Ромб"; }
      else{ throw MyException("стороны \"a\" и \"b\" или \"с\" и \"d\" не равны");
        }
     
    }
