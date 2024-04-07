#pragma once
#ifdef Racelib_EXPORTS
#define RaceLib_API __declspec(dllexport)
#else
#define RaceLib_API __declspec(dllimport)
#endif
#include "classBoots.h"
#include "classCamel.h"
#include "classEagle.h"
#include "classBroom.h"
#include "classCentaur.h"
#include "classFastCamel.h"
#include "classCarpet.h"
#include "classRace.h"

class CreateRacer : public Boots, Camel, Eagle, Broom, Centaur, FastCamel, Carpet {
public:
    CreateRacer(Race r, int RacerType);
    RaceLib_API bool get_reg();
    RaceLib_API float get_time();
    RaceLib_API int get_type();
    RaceLib_API int get_permission();
protected:
    float time;
    int permission;
    bool reg;
    int type;
};
