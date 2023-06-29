#include "trace.h"

void    set_face_normal(t_ray *r, t_hit_record *rec)
{
    // 광선의 방향벡터와 교점의 법선벡터의 내적이 음수라면, 광선은 객체의 앞면에 hit
    rec->front_face = vdot(r->direction, rec->normal) < 0;
    // 광선의 앞면에 hit면 그대로, 아니라면 법선을 반대로 뒤집는다. (항상 광선 방향벡터와 법선 벡터를 반대인 상태로 사용하기 위함)
    rec->normal = (rec->front_face) ? rec->normal : vmult(rec->normal, -1);
}