#include "class_Right_triangle.h"

bool Right_triangle::chek() { if (C == 90 && Triangle::chek()) return true; else return false; };

Right_triangle::Right_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	name = "������������� �����������"; 
}
