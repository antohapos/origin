#pragma once
#ifdef Racelib_EXPORTS
#define RaceLib_API __declspec(dllexport)
#else
#define RaceLib_API __declspec(dllimport)
#endif
#include <iostream>
class GroundRacer {
protected:
    int speed = 1;
    int ground_permission = 1;
    int time_to_rest = 1;
    int rest_time = 1;
    bool reg = false;
    int type = 0;
    RaceLib_API float get_time(int distance);
    
};