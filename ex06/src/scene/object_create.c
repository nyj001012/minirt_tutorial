#include "../../include/structures.h"
#include "scene.h"

t_object    *object(t_object_type type, void *element)
{
    t_object    *new;

    if (!(new = (t_object *)malloc(sizeof(t_object))))
        return (NULL);
    new->type = type;
    new->element = element;
    new->next = NULL;
    return (new);
}

t_sphere    *sphere(t_point3 center, double radius)
{
    t_sphere    *sphere;

    if (!(sphere = (t_sphere *)malloc(sizeof(t_sphere))))
        return (NULL);
    sphere->center = center;
    sphere->radius = radius;
    sphere->radius_square = radius * radius;
    return (sphere);
}
