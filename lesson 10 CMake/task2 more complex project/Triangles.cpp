#include <iostream>
#include "class_Figure.h"
#include "class_Triangle.h"
#include "class_Right_triangle.h"
#include "class_Isosceles_triangle.h"
#include "class_Equilateral_triangle.h"
#include "class_Quadrangle.h"
#include "class_Rectangle.h"
#include "class_Square.h"
#include "class_Parallelogram.h"
#include "class_Rhombus.h"


void print_info(Figure& f) {
    f.get_parameters(f);
}

int main()
{
    system("chcp 1251");
    Figure figure;
    print_info(figure);
    Triangle triangle(10, 5, 15, 60, 40, 80);
    print_info(triangle);
    Right_triangle r_triangle(5, 10, 15, 35, 60, 90);
    print_info(r_triangle);
    Isosceles_triangle i_triangle(10, 20, 10, 50, 40, 90);
    print_info(i_triangle);
    Equilateral_triangle e_triangle(30, 30, 30, 60, 60, 60);
    print_info(e_triangle);
    Quadrangle quadrangle(5, 10, 15, 5, 80, 100, 70, 100);
    print_info(quadrangle);
    Rectangle r_quadrangle(10, 20, 10, 20, 90, 90, 90, 90);
    print_info(r_quadrangle);
    Square s_quadrangle(20, 20, 20, 20, 90, 90, 90, 90);
    print_info(s_quadrangle);
    Parallelogram p_quadrangle(20, 30, 20, 30, 30, 40, 30, 40);
    print_info(p_quadrangle);
    Rhombus rh_quadrangle(30, 30, 30, 30, 30, 40, 30, 40);
    print_info(rh_quadrangle);
    system("pause");
    return 0;
}