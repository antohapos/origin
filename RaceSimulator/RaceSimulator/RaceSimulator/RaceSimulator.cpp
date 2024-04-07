#include <iostream>
#include <string>

#include "classRace.h"
#include "classGroundRacer.h"
#include "classAirRacer.h"
#include "classBoots.h"
#include "classCamel.h"
#include "classBroom.h"
#include "classEagle.h"
#include "classCentaur.h"
#include "classFastCamel.h"
#include "classCarpet.h"
#include "classCreateRacer.h"
#include "Functions.h"
#include "classRaceList.h"


/*
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

class Race {
public:
    Race(int type, int distance) { 
        if (type == 2) { this->type = 3; }
        else if(type == 3) { this->type = 2; }
        else this->type = type; 
        this->distance = distance;
    }
    int get_distance() { return distance; };
    int get_type() { return type; };
protected:
    int type;
    int distance;

};

class GroundRacer {
protected:
    int speed = 1;
    int ground_permission = 1;
    int time_to_rest = 1;
    int rest_time = 1;
    bool reg = false;
    int type = 0;
    float get_time(int distance) {
        float t = (static_cast<float>(distance)) / speed;
        int rest_count = t / time_to_rest;
        t = t + (rest_count * rest_time);
        if (type == 1 && rest_count > 0) { t += 5; }
        if (type == 3 && rest_count > 0) { t -= 5; std::cout << "GetTime"; }
        if (type == 6 && rest_count == 1) { t -= 3; }
        if (type == 6 && rest_count >= 2) { t -= 4.5; }
        return t;
    }
};

class AirRacer {
protected:
    int speed = 1;
    int air_permission = 3;
    bool reg;
    int type;
    float get_time(int distance) {
        if (type == 2) {
            int k = distance / 1000;
            distance += (distance / 100 * k);
        }
        if (type == 5) {
            distance -= (distance / 100 * 6);
        }
        if (type == 7) {
           if (distance < 1000 and distance < 5000) {distance -= (distance/100*3); }
            else if (distance < 10000) { distance -= (distance / 100 * 10); }
            else if (distance > 10000) { distance -= (distance / 100 * 5); };
        }
        float t = (static_cast<float>(distance)) / speed;
        t = t ;
        return t;
    }
};

class Boots : public GroundRacer {
protected:
    Boots() {
        speed = 6;
        time_to_rest = 60;
        rest_time = 5;
        type = 1;
    }
    
};

class Camel : public GroundRacer {
protected:
    Camel() {
        speed = 10;
        time_to_rest = 30;
        rest_time = 8;
        type = 3;
    }
};

class Eagle : public AirRacer {
protected:
    Eagle() {
        speed = 20;
        type = 5;
    }
};

class Broom : public AirRacer {

protected:
    Broom() {
        speed = 20;
        type = 2;
    }
};

class Centaur : public GroundRacer  {
protected:
    Centaur() {
        speed = 15;
        time_to_rest = 8;
        rest_time = 2;
    }
};

class FastCamel : public GroundRacer {
protected:
    FastCamel() {
        speed = 40;
        time_to_rest = 10;
        rest_time = 8;
    }
 };

class Carpet : public AirRacer {
protected:
    Carpet() {
        speed = 10;
        type = 7;
    }
};

class CreateRacer : public Boots, Camel, Eagle, Broom, Centaur, FastCamel, Carpet {
public:
    CreateRacer(Race r, int RacerType) {
        reg = true;
        switch (RacerType) {
        case 1: permission = Boots::ground_permission; time = Boots::get_time(r.get_distance()); break;
        case 3: permission = Camel::ground_permission; time = Camel::get_time(r.get_distance()); break;
        case 5: permission = Eagle::air_permission; time = Eagle::get_time(r.get_distance()); break;
        case 2: permission = Broom::air_permission; time = Broom::get_time(r.get_distance()); break;
        case 4: permission = Centaur::ground_permission; time = Centaur::get_time(r.get_distance()); break;
        case 6: permission = FastCamel::ground_permission; time = FastCamel::get_time(r.get_distance()); break;
        case 7: permission = Carpet::air_permission; time = Carpet::get_time(r.get_distance()); break;
        case 0: permission = 0; time = 0; reg = false; break;
        };
        type = RacerType;
    };
    bool get_reg() { return reg; }
    float get_time() { return time; }
    int get_type() { return type; }
    int get_permission() { return permission; }
protected:
    float time;
    int permission;
    bool reg;
    int type;
};

class RaceList {
public:
    RaceList(){
        registredRacers = "Зарегистрированые транспортные средства: ";
        count = 0;
    }
    std::string reg_recer(Race r, int type) {
        if (arr[type - 1].get_reg()) {
            return (get_RacerName(type) + " уже зарегистрирован!");
        }
        CreateRacer racer(r, type);
        if (abs(racer.get_permission() - r.get_type()) <2) {
            arr[type - 1] = racer;
            if (count > 0) { registredRacers += ", "; }
            registredRacers += get_RacerName(type);
            count++;
            return registredRacers;
        }
        else { return "Попытка зарегистрировать неправильный тип транспортного средства!"; }
    }; 
    int get_count() { return count; }
      std::string get_RaceResult(){
          for (bool swapped = true; swapped;) {
              swapped = false;
              for (int n = 0; n < 6; n++) {
                  if (arr[n].get_time() > arr[n + 1].get_time()) {
                      std::swap(arr[n], arr[n + 1]);
                      swapped = true;
                  }
              }
          }
          std::string result = "";
          int a = 1;
          for (int n = 0; n < 7; n++) {
              if (arr[n].get_permission()) {
                  result += std::to_string(a) + ". " + get_RacerName(arr[n].get_type()) + ": " + std::to_string(arr[n].get_time()) + "\n";
                  a++;
              }
          }
          return result;
      }
      std::string get_registredRacers() {return registredRacers;}
protected:
    CreateRacer arr[7]{
      CreateRacer(Race(0, 100), 0),
      CreateRacer(Race(0, 100), 0),
      CreateRacer(Race(0, 100), 0),
      CreateRacer(Race(0, 100), 0),
      CreateRacer(Race(0, 100), 0),
      CreateRacer(Race(0, 100), 0),
      CreateRacer(Race(0, 100), 0),
    };
    std::string registredRacers;
    int count;
};*/
int main() {
    system("chcp 1251");
    int choise = 0;
    int distance = 0;
    int step = 1;
    std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
    RaceList racelist;
    Race race(choise, distance);
    while (choise !=2) {
        switch (step) {
        case 1: {
           int distance = 0;
            while (choise <= 0 || choise >= 4) {
                std::cout << "1. Гонка наземного транспорта" << std::endl <<
                    "2. Гонка воздушного транспорта" << std::endl <<
                    "3. Гонка наземного и воздушного транспорта" << std::endl <<
                    "Выберите тип гонки: ";
                std::cin >> choise;
                std::cout << std::endl;
                if (choise < 0 && choise < 4) { std::cout << "Неверная команда"; }
            };
            while (distance <= 0) {
                std::cout << "Укажите длинну дистанции(должна быть положительна): ";
                std::cin >> distance;
                std::cout << std::endl;
                if (distance <= 0) { std::cout << "Длинна должна быть положительна"; }
            }; 
             Race r(choise, distance);
             race = r;
             RaceList l;
             racelist = l;
            step = 2;
            choise = 0;
        }
        case 2: {
            while (choise != 1) {
                std::cout << "Должно быть зарегестрированно хотябы 2 транспртных средства" << std::endl <<
                    "1. Зарегестрировать транспорт" << std::endl <<
                    "Выберите действие: ";
                std::cin >> choise;
                std::cout << std::endl;
            }
            std::cout << get_RaceName(race.get_type()) << ". Расстояние: " << race.get_distance() << std::endl;
            step = 4;
            break;
        }
        case 3: {
            std::cout << get_RaceName(race.get_type()) << ". Расстояние: " << race.get_distance() << std::endl;
            std::cout << racelist.get_registredRacers();
            step = 4;
        }
        case 4: {
            while (choise != 0) {
                for (int n = 1; n < 9; n++) {
                    if (n == 8) { std::cout << 0 << ". " << get_RacerName(n) << std::endl; }
                    else std::cout << n << ". " << get_RacerName(n) << std::endl;
                }
                std::cout << "Выберите транспорт или 0 для завершения регистрации: ";
                std::cin >> choise;
                std::cout << std::endl;
                if (0 < choise and choise < 8) {
                    std::cout << racelist.reg_recer(race, choise) << std::endl;
                }
            }
            if (choise == 0 and racelist.get_count() < 2) {
                step = 2;
                break;
            }
            std::cout << "1. Зарегистрировать транспорт\n2. Начать гонку\nВыберите действие: ";
            std::cin >> choise;
            std::cout << std::endl;
            if (choise == 1) {
                step = 3;
                break;
            }
            if (choise == 2) {
                std::cout << "Результат гонки:\n" << racelist.get_RaceResult() << std::endl;
                while (choise == 1 or choise == 2) {
                    std::cout << "1. Провести еще одну гонку\n2. Выйти\n Выберите действие: ";
                    std::cin >> choise;
                    std::cout << std::endl;
                    if (choise == 1) { step = 1; choise = 0, distance = 0;; break; }
                    else if (choise == 2) { step = 6; }
                    else { std::cout << "Неверная команда!\n"; }
                }
            }
        }
        }
    }
    return 1;
}