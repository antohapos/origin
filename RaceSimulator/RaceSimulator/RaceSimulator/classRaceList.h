#pragma once
#ifdef Racelib_EXPORTS
#define RaceLib_API __declspec(dllexport)
#else
#define RaceLib_API __declspec(dllimport)
#endif
#include <string>
#include "classRace.h"
#include "classCreateRacer.h"
#include "Functions.h"

class RaceList {
public:
    RaceLib_API RaceList();
    RaceLib_API std::string reg_recer(Race r, int type);
    RaceLib_API int get_count();
    RaceLib_API std::string get_RaceResult();
       
    RaceLib_API std::string get_registredRacers();
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
};