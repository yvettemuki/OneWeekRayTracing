//
// Created by Shuqi Liao on 2021/7/8.
//

#ifndef ONEWEEKRAYTRACING_RTWEEKEND_H
#define ONEWEEKRAYTRACING_RTWEEKEND_H

#include <cmath>
#include <limits>
#include <memory>

// Usings

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

// Common Headers

#include "ray.h"
#include "vec3.h"

#endif //ONEWEEKRAYTRACING_RTWEEKEND_H
