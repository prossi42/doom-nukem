/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_one_color.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:09:57 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/08 19:11:38 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	img_one_color(t_mlx **mlx, int color)
{
	int		x;
	int		y;

	y = -1;
	while (y++ < (*mlx)->img_y)
	{
		x = -1;
		while (x++ < (*mlx)->img_x)
		{
			pixel_put_to_img(mlx, x, y, color);
		}
	}
}
