#include "structures.h"
#include "trace.h"
#include "utils.h"

double  hit_sphere(t_sphere *sp, t_ray *ray)
{
    t_vec3  oc; // 방향벡터로 나타낸 구의 중심
    double  a;
    double  b;
    double  c;
    double  discriminant;

    oc = vminus(ray->origin, sp->center);
    a = vdot(ray->direction, ray->direction);
    b = 2.0 * vdot(oc, ray->direction);
    c = vdot(oc, oc) - sp->radius_square;
    discriminant = b * b - 4 * a * c;
    if (discriminant < 0)
        return (-1.0);
    else
        return ((-b - sqrt(discriminant)) / (2.0 * a));
}