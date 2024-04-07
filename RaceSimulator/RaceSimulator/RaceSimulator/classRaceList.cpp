#include "classRaceList.h"

    RaceList::RaceList() {
        registredRacers = "Зарегистрированые транспортные средства: ";
        count = 0;
    }
    std::string RaceList::reg_recer(Race r, int type) {
        if (arr[type - 1].get_reg()) {
            return (get_RacerName(type) + " уже зарегистрирован!");
        }
        CreateRacer racer(r, type);
        if (abs(racer.get_permission() - r.get_type()) < 2) {
            arr[type - 1] = racer;
            if (count > 0) { registredRacers += ", "; }
            registredRacers += get_RacerName(type);
            count++;
            return registredRacers;
        }
        else { return "Попытка зарегистрировать неправильный тип транспортного средства!"; }
    };
    int RaceList::get_count() { return count; }
    std::string RaceList::get_RaceResult() {
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
    std::string RaceList::get_registredRacers() { return registredRacers; }

   