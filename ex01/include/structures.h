/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:21:26 by yena              #+#    #+#             */
/*   Updated: 2023/06/27 15:22:08 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_TUTORIAL_STRUCTURES_H
#define MINIRT_TUTORIAL_STRUCTURES_H

typedef struct s_vec3 t_vec3;
typedef struct s_vec3 t_point3;
typedef struct s_vec3 t_color3;

struct s_vec3
{
	double x;
	double y;
	double z;
};

#endif //MINIRT_TUTORIAL_STRUCTURES_H
