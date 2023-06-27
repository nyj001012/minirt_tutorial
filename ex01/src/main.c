/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:17:23 by yena              #+#    #+#             */
/*   Updated: 2023/06/27 16:20:41 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "structures.h"
#include "utils.h"
#include "print.h"

int	main(void)
{
	int			i;
	int			j;
	int			canvas_width;
	int			canvas_height;
	t_color3	pixel_color;

	canvas_width = 256;
	canvas_height = 256;

	// 렌더링
	// P3: 색상 값이 아스키 코드
	// canvas_width canvas_height: 캔버스의 가로 세로 크기
	// 255: 사용할 색상 값
	printf("P3\n%d %d\n255\n", canvas_width, canvas_height);
	j = canvas_height - 1;
	while (j >= 0)
	{
		i = 0;
		while (i < canvas_width) {
			pixel_color.x = (double) i / (canvas_width - 1);
			pixel_color.y = (double) j / (canvas_height - 1);
			pixel_color.z = 0.25;
			write_color(pixel_color);
			i++;
		}
		j--;
	}
}