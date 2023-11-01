

#include <iostream>

class Figure
{
protected:
    int sides_count = 0;
    int get_sides_count() {}
    std::string name;
public:
    std::string get_name() { return name; }
    Figure() { 
        sides_count = 0;
        name = "Фигура";
    }
};
class Triangle : public Figure
{
public:
    Triangle() {
        sides_count = 3;
        name = "Треугольник";
    }
};
class Quadrangle: public Figure
{
public:
    Quadrangle(){
        sides_count = 4;
        name = "Четырехугольник";
    }
};
int main()
{
    system("chcp 1251");
    Figure F;
    std::cout << F.get_name() << std::endl;
    Triangle T;
    std::cout << T.get_name() << std::endl;
    Quadrangle Q;
    std::cout << Q.get_name() << std::endl;
}