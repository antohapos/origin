#pragma once
#ifdef Racelib_EXPORTS
#define RaceLib_API __declspec(dllexport)
#else
#define RaceLib_API __declspec(dllimport)
#endif
#include <string> 

RaceLib_API std::string get_RacerName(int type);

RaceLib_API std::string get_RaceName(int type);
