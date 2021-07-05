//
// Created by Shuqi Liao on 2021/7/5.
//

#ifndef ONEWEEKRAYTRACING_HITTABLE_H
#define ONEWEEKRAYTRACING_HITTABLE_H

#include "ray.h"

struct hit_record {
    point3 p;
    vec3 normal;
    double t;
};

class hittable {
    public:
        virtual bool hit(const ray &r, double t_min, double t_max, hit _record &rect) const = 0;
};

#endif //ONEWEEKRAYTRACING_HITTABLE_H
