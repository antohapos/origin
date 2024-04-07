#include "classCreateRacer.h"


    CreateRacer::CreateRacer(Race r, int RacerType) {
        reg = true;
        switch (RacerType) {
        case 1: permission = Boots::ground_permission; time = Boots::get_time(r.get_distance()); break;
        case 3: permission = Camel::ground_permission; time = Camel::get_time(r.get_distance()); break;
        case 5: permission = Eagle::air_permission; time = Eagle::get_time(r.get_distance()); break;
        case 2: permission = Broom::air_permission; time = Broom::get_time(r.get_distance()); break;
        case 4: permission = Centaur::ground_permission; time = Centaur::get_time(r.get_distance()); break;
        case 6: permission = FastCamel::ground_permission; time = FastCamel::get_time(r.get_distance()); break;
        case 7: permission = Carpet::air_permission; time = Carpet::get_time(r.get_distance()); break;
        case 0: permission = 0; time = 0; reg = false; break;
        };
        type = RacerType;
    };
    bool CreateRacer::get_reg() { return reg; }
    float CreateRacer::get_time() { return time; }
    int CreateRacer::get_type() { return type; }
    int CreateRacer::get_permission() { return permission; }
