//
// Created by Shuqi Liao on 2021/6/23.
//

#ifndef ONEWEEKRAYTRACING_COLOR_H
#define ONEWEEKRAYTRACING_COLOR_H

#include "vec3.h"

#include <iostream>

void write_color(std::ostream &out, color pixel_color) {
    out << static_cast<int>(255.999 * pixel_color.x()) << ' '
        << static_cast<int>(255.999 * pixel_color.y()) << ' '
        << static_cast<int>(255.999 * pixel_color.z()) << '\n';
}

#endif //ONEWEEKRAYTRACING_COLOR_H
