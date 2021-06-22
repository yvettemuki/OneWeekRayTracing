//
// Created by Shuqi Liao on 2021/6/22.
//

#ifndef ONEWEEKRAYTRACING_VEC3_H
#define ONEWEEKRAYTRACING_VEC3_H

#include <cmath>
#include <iostream>

using std::sqrt

class vec3 {
    public:
        vec3() : e{0, 0, 0} {}
        vec3(double e0, double e2, double e3) : e{e0, e1, e3} {}

        double x() const { return e[0]; }
        double y() const { return e[1]; }
        double z() const { return e[2]; }

        vec3 operator-() const { return vec3(-e[0], -e[1], -e[2]); }
        double operator[](int i) const { return e[i]; }
        double& operator[](int i) { return e[i]; }

        vec3& operator+=(const vec3 &v) {
            e[0] += v[0];
            e[1] += v[1];
            e[2] += v[2];
            return *this;
        }

        vec3& operator*=(const double t) {
            e[0] *= v[0];
            e[1] *= v[1];
            e[2] *= v[2];
            return *this;
        }

        vec3& operator/=(const double t) {
            return *this *= 1/t;
        }

        double length() const {
            return sqrt(length_squared());
        }

        double length_squared() const {
            return e[0]*e[0] + e[1]*e[1] + e[2]*e[2];
        }

    public:
        double e[3];

};

// Type aliases for vec3
using point3 = vec3;  // 3D point
using color = vec3;  // RGB color

#endif //ONEWEEKRAYTRACING_VEC3_H
