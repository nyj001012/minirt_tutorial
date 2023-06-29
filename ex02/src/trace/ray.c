#include "../include/trace.h"

t_ray   ray(t_point3 origin, t_vec3 direction)
{
    t_ray   ray;

    ray.origin = origin;
    ray.direction = vunit(direction);
    return (ray);
}

t_point3    ray_at(t_ray *ray, double t)
{
    t_point3    at;
    
    at = vplus(ray->origin, vmult(ray->direction, t));
    return (at);
}

/**
 * @brief left_bottom + u * horizontal + v * vertical - origin의 단위 벡터
 * 빛이 left_bottom으로부터 u * horizontal 만큼의 거리에서 쏜 것,
 * 그리고 원점에서부터 v * vertical 만큼의 거리에서 쏜 것을 단위 벡터로 표현
 * @param cam 
 * @param u 
 * @param v 
 * @return t_ray 
 */
t_ray   ray_primary(t_camera *cam, double u, double v)
{
    t_ray   ray;

    ray.origin = cam->origin;
    ray.direction = vunit(
        vminus(
            vplus(
                vplus(
                    cam->left_bottom, vmult(cam->horizontal, u)
                ),
                vmult(cam->vertical, v)
            ), cam->origin
        )
    );
    return (ray);
}

t_color3    ray_color(t_ray *r)
{
    double t;

    t = 0.5 * (r->direction.y + 1.0);
    return (vplus(
        vmult(color3(1, 1, 1), 1.0 - t),
        vmult(color3(0.5, 0.7, 1.0), t)
    ));
}
