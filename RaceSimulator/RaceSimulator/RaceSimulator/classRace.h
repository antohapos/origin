#pragma once
#ifdef Racelib_EXPORTS
#define RaceLib_API __declspec(dllexport)
#else
#define RaceLib_API __declspec(dllimport)
#endif
class Race {
public:
    RaceLib_API Race(int type, int distance);
    RaceLib_API int get_distance();
    RaceLib_API int get_type();
    protected:
        int type;
        int distance;
};