//
// Created by Shuqi Liao on 2021/7/7.
//

#ifndef ONEWEEKRAYTRACING_HITTABLE_LIST_H
#define ONEWEEKRAYTRACING_HITTABLE_LIST_H

#include "hittable.h"

#include <memory>
#include <vector>

using std::shared_ptr;
using std::make_shared;

class hittable_list : public hittable {
    public:
        hittable_list() {}
        hittable_list(shared_ptr<hittable> object) { add(object); }

        void clear() { objects.clear(); }
        void add(shared_ptr<hittable> object) { objects.push_back(object); }

        virtual bool hit(
                const ray &r, double t_min, double t_max, hit_record &rec
                ) const override;

    public:
        std::vector<shared_ptr<hittable>> objects;
};

bool hittable_list::hit(const ray &r, double t_min, double t_max, hit_record &rec) const {
    hit_record temp_rec;
    bool hit_anything = false;
    auto closest_so_far = t_max;

    for (const auto &object : objects) {
        if (object->hit(r, t_min, closest_so_far, temp_rec)) {
            hit_anything = true;
            closest_so_far = temp_rec.t;  // because is in the world, need depth test
            rec = temp_rec;
        }
    }

    return hit_anything;
}


#endif //ONEWEEKRAYTRACING_HITTABLE_LIST_H
