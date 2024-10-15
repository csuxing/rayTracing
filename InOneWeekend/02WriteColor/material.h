#ifndef _MATERIAL_H_
#define _MATERIAL_H_

#include "hittable.h"

class material 
{
public:
    virtual ~material() = default;

    virtual bool scatter(const ray& r_in, const hit_record& rec, color& attenuation, ray& scattered) const
    {
        return false;
    };
};
#endif