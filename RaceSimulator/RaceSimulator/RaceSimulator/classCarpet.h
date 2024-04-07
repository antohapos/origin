#pragma once
#ifdef Racelib_EXPORTS
#define RaceLib_API __declspec(dllexport)
#else
#define RaceLib_API __declspec(dllimport)
#endif
#include "classAirRacer.h"

class Carpet : public AirRacer {
protected:
	RaceLib_API Carpet();
};