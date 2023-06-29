#ifndef TRACE_H
# define TRACE_H

# include "structures.h"
# include "utils.h"
# include <stdbool.h>

t_ray       ray(t_point3 origin, t_vec3 direction);
t_point3    ray_at(t_ray *ray, double t);
t_ray       ray_primary(t_camera *cam, double u, double v);
t_color3    ray_color(t_ray *ray, t_sphere *sphere);
bool        hit_sphere(t_sphere *sp, t_ray *ray);

#endif
