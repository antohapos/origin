#include "classAirRacer.h"

    float AirRacer::get_time(int distance) {
        if (type == 2) {
            int k = distance / 1000;
            distance += (distance / 100 * k);
        }
        if (type == 5) {
            distance -= (distance / 100 * 6);
        }
        if (type == 7) {
            if (distance < 1000 and distance < 5000) { distance -= (distance / 100 * 3); }
            else if (distance < 10000) { distance -= (distance / 100 * 10); }
            else if (distance > 10000) { distance -= (distance / 100 * 5); };
        }
        float t = (static_cast<float>(distance)) / speed;
        t = t;
        return t;
    }
