#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct s_vec3   t_vec3;
typedef struct s_vec3   t_point3;
typedef struct s_vec3   t_color3;
typedef struct s_ray    t_ray;
typedef struct s_camera t_camera;
typedef struct s_canvas t_canvas;

struct s_vec3
{
    double x;
    double y;
    double z;
};

struct s_ray
{
    t_point3    origin;
    t_vec3      direction;
};

struct s_camera
{
    t_point3    origin;
    double      viewport_height;
    double      viewport_width;
    t_vec3      horizontal;
    t_vec3      vertical;
    double      focal_len;
    t_point3    left_bottom;
};

struct s_canvas
{
    int     width;
    int     height;
    double  aspect_ratio;
};

#endif
