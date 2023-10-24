

#include <iostream>

class Figure
{
protected:
    int sides_count = 0;
    int get_sides_count() {}
    std::string name;
public:
    void get_name() { std::cout << name <<" " << sides_count<< std::endl; }
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
        name = "Квадрат";
    }
};
int main()
{
    system("chcp 1251");
    Figure F;
    F.get_name();
    Triangle T;
    T.get_name();
    Quadrangle Q;
    Q.get_name();
}