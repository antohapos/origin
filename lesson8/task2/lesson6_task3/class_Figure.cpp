#include "class_Figure.h"

 bool Figure::chek() { if (count_of_sides == 0)  return true; else return false; }
 std::string Figure::get_name() { return name; }
 Figure::Figure() {
     count_of_sides = 0;
 }
 void Figure::get_parameters(Figure& f)
 {
 };