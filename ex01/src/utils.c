/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:28:03 by yena              #+#    #+#             */
/*   Updated: 2023/06/27 16:07:49 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/**
 * t_vec3의 생성자
 * @param x
 * @param y
 * @param z
 * @return t_vec3
 */
t_vec3	vec3(double x, double y, double z)
{
	t_vec3	vec;

	vec.x = x;
	vec.y = y;
	vec.z = z;
	return (vec);
}

/**
 * t_point3의 생성자
 * @param x
 * @param y
 * @param z
 * @return t_point3
 */
t_point3	point3(double x, double y, double z)
{
	t_point3	point;

	point.x = x;
	point.y = y;
	point.z = z;
	return (point);
}

/**
 * t_color3의 생성자
 * @param r
 * @param g
 * @param b
 * @return t_color3
 */
t_color3	color3(double r, double g, double b)
{
	t_point3	color;

	color.x = r;
	color.y = g;
	color.z = b;
	return (color);
}

/**
 * t_vec3의 값 설정
 * @param vec
 * @param x
 * @param y
 * @param z
 */
void	vset(t_vec3 *vec, double x, double y, double z)
{
	vec->x = x;
	vec->y = y;
	vec->z = z;
}

/**
 * 벡터의 길이를 제곱한 값 계산
 * @param vec
 * @return x^2 + y^2 + z^2
 */
double	vlength2(t_vec3 vec)
{
	return (vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
}

/**
 * 벡터의 길이 계산
 * @param vec
 * @return (x^2 + y^2 + z^2) ^ (1 / 2)
 */
double vlength(t_vec3 vec)
{
	return (sqrt(vlength2(vec)));
}

/**
 * 벡터 끼리의 합 계산
 * @param vec1
 * @param vec2
 * @return x1 + x2, y1 + y2, z1 + z2
 */
t_vec3	vplus(t_vec3 vec1, t_vec3 vec2)
{
	vec1.x += vec2.x;
	vec1.y += vec2.y;
	vec1.z += vec2.z;
	return (vec1);
}

/**
 * 벡터 합 계산
 * @param vec
 * @param x
 * @param y
 * @param z
 * @return vec.x + x, vec.y + y, vec.z + z
 */
t_vec3	vplus_(t_vec3 vec, double x, double y, double z)
{
	vec.x += x;
	vec.y += y;
	vec.z += z;
	return (vec);
}

/**
 * 벡터 끼리의 차 계산
 * @param vec1
 * @param vec2
 * @return x1 - x2, y1 - y2, z1 - z2
 */
t_vec3	vminus(t_vec3 vec1, t_vec3 vec2)
{
	vec1.x -= vec2.x;
	vec1.y -= vec2.y;
	vec1.z -= vec2.z;
	return (vec1);
}

/**
 * 벡터의 차 계산
 * @param vec
 * @param x
 * @param y
 * @param z
 * @return vec.x - x, vec.y - y, vec.z - z
 */
t_vec3	vminus_(t_vec3 vec, double x, double y, double z)
{
	vec.x -= x;
	vec.y -= y;
	vec.z -= z;
	return (vec);
}

/**
 * 벡터 간 곱 연산
 * @param vec1
 * @param vec2
 * @return x1 * x2, y1 * y2, z1 * z2
 */
t_vec3	vmult(t_vec3 vec1, t_vec3 vec2)
{
	vec1.x *= vec2.x;
	vec1.y *= vec2.y;
	vec1.z *= vec2.z;
	return (vec1);
}

/**
 * 벡터의 스칼라 곱 연산
 * @param vec
 * @param t
 * @return x * t, y * t, z * t
 */
t_vec3	vmult_(t_vec3 vec, double t)
{
	vec.x *= t;
	vec.y *= t;
	vec.z *= t;
	return (vec);
}

/**
 * 벡터의 스칼라 나누기 연산
 * @param vec
 * @param t
 * @return x / t, y / t, z / y
 */
t_vec3	vdivide(t_vec3 vec, double t)
{
	vec.x *= 1 / t;
	vec.y *= 1 / t;
	vec.z *= 1 / t;
	return (vec);
}

/**
 * 벡터의 내적
 * @param vec1
 * @param vec2
 * @return x1 * x2 + y1 * y2 + z1 * z2
 */
double	vdot(t_vec3 vec1, t_vec3 vec2)
{
	return (vec1.x * vec2.x + vec1.y + vec2.y + vec1.z + vec2.z);
}

/**
 * 벡터의 외적
 * @param vec1
 * @param vec2
 * @return A × B = (A₂B₃ - A₃B₂, A₃B₁ - A₁B₃, A₁B₂ - A₂B₁)
 */
t_vec3	vcross(t_vec3 vec1, t_vec3 vec2)
{
	t_vec3	cross;

	cross.x = vec1.y * vec2.z - vec1.z * vec2.y;
	cross.y = vec1.z * vec2.x - vec1.x * vec2.z;
	cross.z = vec1.x * vec2.y - vec1.y * vec2.x;
	return (cross);
}

/**
 * 단위 벡터
 * @param vec
 * @return 벡터 / 벡터의 크기
 */
t_vec3	vunit(t_vec3 vec)
{
	double length = vlength(vec);
	if (length == 0)
	{
		printf("Error\n:Devider is 0");
		exit(0);
	}
	vec.x /= length;
	vec.y /= length;
	vec.z /= length;
	return (vec);
}

/**
 * 두 벡터의 원소를 비교하여 작은 값들만 반환
 * @param vec1
 * @param vec2
 * @return x, y, z
 */
t_vec3	vmin(t_vec3 vec1, t_vec3 vec2)
{
	if (vec1.x > vec2.x)
		vec1.x = vec2.x;
	if (vec1.y > vec2.y)
		vec1.y = vec2.y;
	if (vec1.z > vec2.z)
		vec1.z = vec2.z;
	return (vec1);
}
