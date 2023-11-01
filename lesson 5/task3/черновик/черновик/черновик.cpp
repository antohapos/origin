

#include <iostream>

class Figure {
protected:
    int a;
    virtual bool chek() {
        if (a == 3) { return true; }
        else { return false; }
    };
    Figure() {};
public:
    Figure(int a) { this->a = a; }
    virtual void get_parametr() {
        std::cout << "a=" << a << std::endl;
        if (chek()) { std::cout << "true" << std::endl; }
        else { std::cout << "false" << std::endl; }
   } 
};
class triangle : public Figure {
public:
    triangle(int a) { this->a = a; }
    void get_parametr() override {
        
        if (chek()) { std::cout << "true" << std::endl; }
        else { std::cout << "false" << std::endl; }
        std::cout << "a=" << a << std::endl;
    }
protected:

    bool chek() override{
        if (a == 3 and Figure::chek()) { return true; }
        else { return false; }
    }
};

void print_info(Figure &f) {
    f.get_parametr();
};


int main()
{
    std::cout << "Hello World!\n";
    Figure f(4);
    print_info(f);
    triangle T(3);
    print_info(T);
}

