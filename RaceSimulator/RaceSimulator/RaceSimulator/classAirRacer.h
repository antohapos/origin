#pragma once
#ifdef Racelib_EXPORTS
#define RaceLib_API __declspec(dllexport)
#else
#define RaceLib_API __declspec(dllimport)
#endif
class AirRacer {
protected:
    int speed = 1;
    int air_permission = 3;
    bool reg;
    int type;
    RaceLib_API float get_time(int distance);
};
