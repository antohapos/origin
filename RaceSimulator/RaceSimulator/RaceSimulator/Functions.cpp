#include "Functions.h"

std::string get_RacerName(int type) {
    switch (type) {
    case 1: return "Ботинки-вездеходы"; break;
    case 2: return "Метла"; break;
    case 3: return "Верблюд"; break;
    case 4: return "Кентавр"; break;
    case 5: return "Орел"; break;
    case 6: return "Верблюд-быстроход"; break;
    case 7: return "Ковер-самолет"; break;
    case 8: return "Закончить регистрацию"; break;
    default: return "Неизвестный тип";
    }
};

std::string get_RaceName(int type) {
    switch (type) {
    case 1: return "Гонка наземного транспорта"; break;
    case 3: return "Гонка воздушного транспорта"; break;
    case 2: return "Гонка наземного и воздушного транспорта"; break;
    default: return "Неизвестный тип";
    }
};
