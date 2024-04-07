#include "classRace.h"

    Race::Race(int type, int distance) {
        if (type == 2) { this->type = 3; }
        else if (type == 3) { this->type = 2; }
        else this->type = type;
        this->distance = distance;
    }
   int Race::get_distance() { return distance; };
   int Race::get_type() { return type; };

    
