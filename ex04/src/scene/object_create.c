#include "../../include/structures.h"

t_sphere    sphere(t_point3 center, double radius)
{
    t_sphere    sphere;

    sphere.center = center;
    sphere.radius = radius;
    sphere.radius_square = radius * radius;
    return (sphere);
}
