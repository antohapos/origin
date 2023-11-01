#include <iostream>


class Figure
{
protected:
    std::string name = "Фигура";
    int count_of_sides;  
    bool f_chek;
    virtual bool chek() { if (count_of_sides == 0)  return true; else return false; }
public:
    std::string get_name() { return name; }
    Figure() {
        count_of_sides = 0;
    }
    virtual void get_parameters(Figure &f)
    {       
        std::cout << f.get_name() << std::endl;
        if (chek()) std::cout << "Правильная" << std::endl;
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
    bool chek() override { if (count_of_sides == 3 && A + B + C == 180) return true; else return false; };
    Triangle() {};
public:
    Triangle(int a ,int b, int c, int A, int B, int C) {
        count_of_sides = 3;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        name = "Треугольник";
    };
    void get_parameters(Figure& f) override {
        std::cout << f.get_name() << std::endl;
        if (chek()) std::cout << "Правильная" << std::endl; else  std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон; " << count_of_sides << std::endl;
        std::cout << "Стороны: " << "a=" << a << "  b=" << b << "  c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << "  B=" << B << "  C=" << C << std::endl << std::endl;
    }
};
class Right_triangle : public Triangle
{
protected:
    bool chek() override {  if (C == 90 && Triangle::chek()) return true; else return false; };
public:
    Right_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) { name = "Прямоугольный треугольник"; }
};
class Isosceles_triangle : public Triangle
{
protected:
    Isosceles_triangle() {};
public:
    bool chek() override { if (C == A && a == c && Triangle::chek())  return true; else return false; };
    Isosceles_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
        name = "Равнобедренный треугольник"; 
    }
};
class Equilateral_triangle : public Isosceles_triangle
{
public:
    bool chek() override { if (Isosceles_triangle::chek() && A==B && a==b )   return true; else return false;};
    Equilateral_triangle(int a, int b, int c, int A, int B, int C) : Isosceles_triangle(a, b, c, A, B, C)  {
        name = "Равносторонний треугольник"; 
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
    bool chek() override { if(A + B + C + D == 360 && count_of_sides == 4)  return true; else return false;}
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
        count_of_sides = 4;
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D; 
        name = "Четырех угольник";
    }
    void get_parameters(Figure& f) override {
        std::cout << f.get_name() << std::endl;
        if (chek()) std::cout << "Правильная" << std::endl; else  std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон; " << count_of_sides << std::endl;
        std::cout << "Стороны: " << "a=" << a << "  b=" << b << "  c=" << c << "  d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << "  B=" << B << "  C=" << C << "  D=" << D << std::endl << std::endl;
    }
};
class Rectangle : public Quadrangle
{
protected:
     bool chek() override{ if ( Quadrangle::chek() && A == 90 && B == 90 && C == 90  && a == c && b == d)  return true; else return false; }
public:
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a,b,c,d,A,B,C,D){
        name = "прямоугольник";
    }
};
class Square : public Rectangle
{
protected:
    bool chek() override { if (Rectangle::chek() && a == b)return true; else return false; }
public:
    Square(int a, int b, int c, int d, int A, int B, int C, int D) : Rectangle(a, b, c, d, A, B, C, D) {
        name = "Квадрат";
    }
};
class Parallelogram : public Quadrangle
{
protected:
    bool chek() override{ if(Quadrangle::chek() && A == C && B==D && a==c && b==d )  return true; else return false;}
public:
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
        name = "Параллелограм";
    }
};
class Rhombus : public Parallelogram
{protected:
    bool chek() override { if (Parallelogram::chek() && a == b) return true; else return false; }
public:
    Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D) {
        name = "Ромб";
    }
};

 void print_info(Figure &f) {
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
    };