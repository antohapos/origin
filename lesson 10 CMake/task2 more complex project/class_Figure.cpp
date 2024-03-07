#include "class_Figure.h"

 bool Figure::chek() { if (count_of_sides == 0)  return true; else return false; }
 std::string Figure::get_name() { return name; }
 Figure::Figure() {
     count_of_sides = 0;
 }
 void Figure::get_parameters(Figure& f)
 {
     std::cout << f.get_name() << std::endl;
     if (chek()) std::cout << "Правильная" << std::endl;
     else std::cout << "Неправильная" << std::endl;
     std::cout << "Количество сторон; " << count_of_sides << std::endl << std::endl;

 };