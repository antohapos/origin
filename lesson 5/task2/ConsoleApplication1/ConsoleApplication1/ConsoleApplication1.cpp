#include <iostream>

class Figure
{
protected:
    std::string name;
    Figure() {
    }
    std::string get_name() { return name; }
public:
    virtual void get_parameters(){}
};
class Triangle : public Figure
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
         void get_parameters() override {
             std::cout << get_name() << std::endl;
             std::cout << "Стороны: " << "a=" << a << "  b=" << b << "  c=" << c << std::endl;
             std::cout << "Углы: " << "A=" << A << "  B=" << B << "  C=" << C << std::endl << std::endl;
         }
    Triangle() {}
public:
    Triangle(int a, int b, int c, int A, int B, int C) {
        name = "Треугольник:";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
};
class Right_triangle : public Triangle
{
public:
    Right_triangle(int a,int b, int c, int A,int B) {
        name = "Прямоугольный треугольник:";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        C = 90;
    }
};
class Isosceles_triangle : public Triangle
{
public:
    Isosceles_triangle(int a, int c, int C) {
        name = "Равнобедренный треугольник:";
        this->a = a;
        this->c = c;
        this->A = A;
        this->C = C;
        b = a;
        A = B = (180 - C) / 2;
    }
};

class Equilateral_triangle : public Triangle
{
public:
    Equilateral_triangle(int a) {
        name = "Равностороний треугольник:";
        this->a = a;
        b = c = a;
        A = B = C = 60;
    }
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
    Quadrangle() {};
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
         name = "Четырехугольник";
         this->a = a;
         this->b = b;
         this->c = c;
         this->d = d;
         this->A = A;
         this->B = B;
         this->C = C;
         this->D = D;
    }
    void get_parameters() override {
        std::cout << get_name() << std::endl;
        std::cout << "Стороны: " << "a=" << a << "  b=" << b << "  c=" << c << "  d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << "  B=" << B << "  C=" << C << "  D=" << D << std::endl << std::endl;
    }
};
   
class Rectangle : public Quadrangle
{
public:
    Rectangle(int a, int b) {
        this->a = c = a;
        this->b = d = b;
        A = B = C = D = 90;
        name = "Прямоугольник";
    }
};
class Square : public Quadrangle
{
public:
    Square(int a) {
        this->a = c = b = d = a;
        A = B = C = D = 90;
        name = "Квадрат";
    }
};
class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int a, int b, int A) {
        this->a = c = a;
        this->b = d = b;
        this->A = C = A;
        B = D = 180 - A;
        name = "Параллелограм";
    }
};
class Rhombus : public Quadrangle
{
public:
    Rhombus(int a, int A) {
        this->a = c = b = d = a;
        this->A = C = A;
        B = D = 180 - A;
        name = "Ромб";
    }
};
void print_info(Figure &f) {
    f.get_parameters();
}

    int main()
    {
        system("chcp 1251");
        Triangle T(10, 5, 15, 60, 40, 80);
        print_info(T);
        Right_triangle R(5, 10, 15, 30, 60);
        print_info(R);
        Isosceles_triangle I(10, 15, 80);
        print_info(I);
        Equilateral_triangle E(10);
        print_info(E);
        Quadrangle Q(5, 10, 15, 5, 110, 30, 130, 90);
        print_info(Q);
        Rectangle Re(10, 15);
        print_info(Re);
        Square S(10);
        print_info(S);
        Parallelogram P(10, 15, 40);
        print_info(P);
        Rhombus Rh(15, 60);
        print_info(Rh);
    }