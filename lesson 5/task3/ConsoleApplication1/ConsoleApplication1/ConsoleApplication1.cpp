#include <iostream>


class Figure
{
protected:
    std::string name;
    int count_of_sides;  
    bool f_chek;
public:
    Figure() 
    {
        name = "Фигура:";
        count_of_sides = 0;
        ;
    }
    virtual void set_chek() { if (count_of_sides == 0)  f_chek = 1; else f_chek = 0; };
    virtual void get_figure_parametrs()
    {       
        std::cout << name << std::endl;
        if (f_chek) std::cout << "Правильная" << std::endl;
        else std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон; " << count_of_sides << std::endl << std::endl;

    };
};
class Triangle : public Figure
{ 
protected:
    int a;
    int b;
    int c;
   
    int A;
    int B;
    int C;
public:
    virtual void set_chek() { if (A + B + C == 180)  f_chek = 1; else f_chek = 0; };
    Triangle(int a ,int b, int c, int A, int B, int C, std::string name) {
        count_of_sides = 3;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        this->name = name;
    };
    void get_figure_parametrs() override {
        std::cout << name << std::endl;
        if (f_chek) std::cout << "Правильная" << std::endl; else  std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон; " << count_of_sides << std::endl;
        std::cout << "Стороны: " << "a=" << a << "  b=" << b << "  c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << "  B=" << B << "  C=" << C << std::endl << std::endl;
    }
};
class Right_triangle : public Triangle
{
public:
    virtual void set_chek() { if (C == 90 && A + B == 90)  f_chek = 1; else f_chek = 0; };
    Right_triangle(int a, int b, int c, int A, int B, int C, std::string name) : Triangle(a, b, c, A, B, C, name){}
};
class Isosceles_triangle : public Triangle
{
public:
    virtual void set_chek() { if (C == A && a == c)  f_chek = 1; else f_chek = 0; };
    Isosceles_triangle(int a, int b, int c, int A, int B, int C, std::string name) : Triangle(a, b, c, A, B, C, name) {}

};
class Equilateral_triangle : public Triangle
{
public:
    virtual void set_chek() { if (C == A && A == B && a == c && c == b)  f_chek = 1; else f_chek = 0; };
    Equilateral_triangle(int a, int b, int c, int A, int B, int C, std::string name) : Triangle(a, b, c, A, B, C, name) {}
};
class Quadrangle : public Figure
{
protected:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
public:
    virtual void set_chek() { if (A + B + C + D == 360 and count_of_sides == 4)  f_chek = 1; else f_chek = 0; };
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D , std::string name) {
        count_of_sides = 4;
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D; 
        this->name = name;
    }
    void get_figure_parametrs() override {
        std::cout << name << std::endl;
        if (f_chek) std::cout << "Правильная" << std::endl; else  std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон; " << count_of_sides << std::endl;
        std::cout << "Стороны: " << "a=" << a << "  b=" << b << "  c=" << c << "  d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << "  B=" << B << "  C=" << C << "  D=" << D << std::endl << std::endl;
    }
};
class Rectangle : public Quadrangle
{
public:
    virtual void set_chek() { if (A == 90 && B == 90 && C == 90 && D == 90 && a == c && b == d)  f_chek = 1; else f_chek = 0; }
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) : Quadrangle(a, b, c, d, A, B, C, D, name) {  }
};
class Square : public Quadrangle
{
public:
    void set_chek() override {if (a == b && c == d && a == c && A == 90 && B == 90 && C == 90 && D == 90) f_chek = 1; else f_chek = 0;}
    Square(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) : Quadrangle(a, b, c, d, A, B, C, D, name) {  }
};
class Parallelogram : public Quadrangle
{
public:
    void set_chek() override { if (a == c && b == d && A == C && B == D ) f_chek = 1; else f_chek = 0; }
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) : Quadrangle(a, b, c, d, A, B, C, D, name) {  }
};
class Rhombus : public Quadrangle
{
public:
    void set_chek() override { if (a == b && a == c && a == d && A == C && B == D && A+ B+C+D ==360) f_chek = 1; else f_chek = 0; }
    Rhombus(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) : Quadrangle(a, b, c, d, A, B, C, D, name) {  }
};
    int main()
    {
        system("chcp 1251");
        Figure figure;
        figure.get_figure_parametrs();
        figure.set_chek();
        Triangle triangle(10, 5, 15, 60, 40, 80 , "Треугольник");
        Figure* F_figure = &triangle;
        F_figure->get_figure_parametrs();
        Right_triangle r_triangle(5, 10, 15, 35, 60, 90, "Правильный треугольник");
        F_figure = &r_triangle;
        F_figure->get_figure_parametrs();
        Isosceles_triangle i_triangle(10, 20, 10, 50, 40, 90, "Равнобедренный треугольник");
        F_figure = &i_triangle;
        F_figure->set_chek();
        F_figure->get_figure_parametrs();
        Equilateral_triangle e_triangle(30, 30, 30, 60, 60, 60, "Равносторонний треугольник");
        F_figure = &e_triangle;
        F_figure->set_chek();
        F_figure->get_figure_parametrs();
        Quadrangle quadrangle(5, 10, 15, 5, 50, 30, 130, 90, "Четырех угольник");
        F_figure = &quadrangle;
        F_figure->set_chek();
        F_figure->get_figure_parametrs();
        Rectangle r_quadrangle(10, 20, 10, 20, 90, 90, 90, 90, "Прямоугольник");
        F_figure = &r_quadrangle;
        F_figure->set_chek();
        F_figure->get_figure_parametrs();
        Square s_quadrangle(20, 20, 20, 20, 90, 90, 90, 90, "Квадрат");
        F_figure = &s_quadrangle;
        F_figure->set_chek();
        F_figure->get_figure_parametrs();
        Parallelogram p_quadrangle(20, 30, 20, 30, 30, 40, 30, 40, "Параллелограм");
        F_figure = &p_quadrangle;
        F_figure->set_chek();
        F_figure->get_figure_parametrs();
        Rhombus rh_quadrangle(30, 30, 30, 30, 30, 40, 30, 40, "Ромб");
        F_figure = &rh_quadrangle;
        F_figure->set_chek();
        F_figure->get_figure_parametrs();
    };