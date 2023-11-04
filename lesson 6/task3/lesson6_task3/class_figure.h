#pragma once
#include <iostream>

class Figure {
protected:
    std::string name = "Фигура";
    int count_of_sides;
    bool f_chek;
    virtual bool chek();
public:
    std::string get_name();
    Figure();
    virtual void get_parameters(Figure& f);
};
