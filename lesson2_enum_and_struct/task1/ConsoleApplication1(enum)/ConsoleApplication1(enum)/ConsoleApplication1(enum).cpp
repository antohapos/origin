

#include <iostream>
#include <string>
#include <clocale>

enum class months {
    junuary = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

std::string prin_month(months a) {
;
    switch (a) {
    case months::junuary: return "январь";
    case months::february: return "февраль";
    case months::march: return "март";
    case months::april: return "апрель";
    case months::may: return "май";
    case months::june: return "июнь";
    case months::july: return "июль";
    case months::august: return "август";
    case months::september: return "сентябрь";
    case months::october: return "октябрь";
    case months::november: return "ноябрь";
    case months::december: return "декабрь";
    };
};

int main()
{
   // setlocale(LC_ALL, "Russian");
    system("chcp 1251");
     int a;
    bool b = 1;
    while (b) {
        std::cout << "Введите номер месяца: ";
        std::cin >> a; 
        if (a > 0 && a < 13) {
            months month = static_cast <months>(a);
            std::cout << prin_month(month) << std::endl;
        }
        else if (a == 0) {
            b = 0;
            std::cout << "До свидания" << std::endl;
        }
        else { std::cout << "Неправильный номер!" << std::endl; }
    }
}

