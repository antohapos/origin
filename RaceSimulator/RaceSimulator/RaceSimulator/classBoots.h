#pragma once
#ifdef Racelib_EXPORTS
#define RaceLib_API __declspec(dllexport)
#else
#define RaceLib_API __declspec(dllimport)
#endif
#include "classGroundRacer.h"

class Boots : public GroundRacer {
protected:
	RaceLib_API Boots();
};