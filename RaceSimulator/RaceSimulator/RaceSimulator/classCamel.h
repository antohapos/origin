#pragma once
#ifdef Racelib_EXPORTS
#define RaceLib_API __declspec(dllexport)
#else
#define RaceLib_API __declspec(dllimport)
#endif
#include "classGroundRacer.h"

class Camel : public GroundRacer {
protected:
	RaceLib_API Camel();
};