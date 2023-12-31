#ifndef STRUCTURES_H
# define STRUCTURES_H

# define TRUE 1
# define FALSE 0
# define SP 0 // sphere

typedef struct s_vec3       t_vec3;
typedef struct s_vec3       t_point3;
typedef struct s_vec3       t_color3;
typedef struct s_ray        t_ray;
typedef struct s_camera     t_camera;
typedef struct s_canvas     t_canvas;
typedef struct s_sphere     t_sphere;
typedef struct s_hit_record t_hit_record;
typedef struct s_object     t_object;
typedef int                 t_object_type;
typedef int                 t_bool;

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

struct s_sphere
{
    t_point3    center;
    double      radius;
    double      radius_square;
};

struct s_hit_record
{
    t_point3    p;
    t_vec3      normal;
    double      tmin;
    double      tmax;
    double      t;
    int         front_face;
};

struct s_object
{
    t_object_type   type;
    void            *element;
    void            *next;
};


#endif
