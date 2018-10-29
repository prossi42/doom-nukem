/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_img_edges.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 00:58:06 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/19 01:52:37 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	color_right_edge(t_graph *e, int pixel, int color)
{
	int		x;
	int		y;

	y = -1;
	while (y++ <= e->i.mlx->img_y)
	{
		x = e->i.mlx->img_x - pixel - 1;
		while (x++ <= e->i.mlx->img_x)
			pixel_put_to_img(&e->i.mlx, x, y, color);
	}
}

void	color_left_edge(t_graph *e, int pixel, int color)
{
	int		x;
	int		y;

	y = -1;
	while (y++ <= e->i.mlx->img_y)
	{
		x = -1;
		while (++x < pixel)
			pixel_put_to_img(&e->i.mlx, x, y, color);
	}
}

void	color_bottom_edge(t_graph *e, int pixel, int color)
{
	int		x;
	int		y;

	y = e->i.mlx->img_y - pixel - 1;
	while (y++ <= e->i.mlx->img_y)
	{
		x = -1;
		while (x++ < e->i.mlx->img_x)
			pixel_put_to_img(&e->i.mlx, x, y, color);
	}
}

void	color_top_edge(t_graph *e, int pixel, int color)
{
	int		x;
	int		y;

	y = -1;
	while (++y < pixel)
	{
		x = -1;
		while (x++ <= e->i.mlx->img_x)
			pixel_put_to_img(&e->i.mlx, x, y, color);
	}
}

void	color_img_edges(t_graph *e, int pixel, int color)
{
	color_top_edge(e, pixel, color);
	color_bottom_edge(e, pixel, color);
	color_left_edge(e, pixel, color);
	color_right_edge(e, pixel, color);
}
