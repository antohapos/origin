#pragma once
#ifdef FIGURECLASSDLL_EXPORTS
#define FIGURECLASSDLL_API __declspec(dllexport)
#else
#define FIGURECLASSDLL_API __declspec(dllimport)
#endif
#include <iostream>

class Figure {
protected:
    std::string name = "Фигура";
    int count_of_sides;
    bool f_chek;
    virtual bool chek();
public:
    FIGURECLASSDLL_API std::string get_name();
    FIGURECLASSDLL_API Figure();
    FIGURECLASSDLL_API virtual void get_parameters(Figure& f);
};
