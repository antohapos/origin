#include "classGroundRacer.h"

    float GroundRacer::get_time(int distance) {
        float t = (static_cast<float>(distance)) / speed;
        int rest_count = t / time_to_rest;
        t = t + (rest_count * rest_time);
        if (type == 1 && rest_count > 0) { t += 5; }
        if (type == 3 && rest_count > 0) { t -= 5; std::cout << "GetTime"; }
        if (type == 6 && rest_count == 1) { t -= 3; }
        if (type == 6 && rest_count >= 2) { t -= 4.5; }
        return t;
    }
