/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_resize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 14:00:42 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/04 00:23:48 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	draw_resize_bottomright(t_graph *e, int value_y)
{
	int		i;

	i = e->i.mlx->img_x + 1;
	while (i-- > e->i.mlx->img_x - value_y)
	{
		e->bs.xi = i;
		e->bs.xf = e->bs.xi;
		e->bs.yi = e->i.mlx->img_y;
		e->bs.yf = e->i.mlx->img_y - (e->i.mlx->img_y / 4);
		ft_segment(e);
	}
	i = e->i.mlx->img_y + 1;
	while (i-- > e->i.mlx->img_y - value_y)
	{
		e->bs.xi = e->i.mlx->img_x;
		e->bs.xf = e->i.mlx->img_x - (e->i.mlx->img_y / 4);
		e->bs.yi = i;
		e->bs.yf = e->bs.yi;
		ft_segment(e);
	}
}

void	draw_resize_bottomleft(t_graph *e, int value_y)
{
	int		i;

	i = -1;
	while (i++ < value_y)
	{
		e->bs.xi = i;
		e->bs.xf = e->bs.xi;
		e->bs.yi = e->i.mlx->img_y;
		e->bs.yf = e->bs.yi - (e->i.mlx->img_y / 4);
		ft_segment(e);
	}
	i = e->i.mlx->img_y + 1;
	while (i-- > (e->i.mlx->img_y - value_y))
	{
		e->bs.xi = 0;
		e->bs.xf = (e->i.mlx->img_y / 4);
		e->bs.yi = i;
		e->bs.yf = e->bs.yi;
		ft_segment(e);
	}
}

void	draw_resize_topright(t_graph *e, int value_y)
{
	int		i;

	i = -1;
	while (i++ < value_y)
	{
		e->bs.xi = e->i.mlx->img_x;
		e->bs.xf = e->bs.xi - (e->i.mlx->img_y / 4);
		e->bs.yi = i;
		e->bs.yf = e->bs.yi;
		ft_segment(e);
	}
	i = e->i.mlx->img_x + 1;
	while (i-- > e->i.mlx->img_x - value_y)
	{
		e->bs.xi = i;
		e->bs.xf = e->bs.xi;
		e->bs.yi = 0;
		e->bs.yf = e->i.mlx->img_y / 4;
		ft_segment(e);
	}
}

void	draw_resize_topleft(t_graph *e, int value_y)
{
	int		i;

	i = -1;
	while (i++ < value_y)
	{
		e->bs.xi = 0;
		e->bs.xf = e->i.mlx->img_y / 4;
		e->bs.yi = i;
		e->bs.yf = e->bs.yi;
		ft_segment(e);
		e->bs.xi = i;
		e->bs.xf = e->bs.xi;
		e->bs.yi = 0;
		e->bs.yf = e->i.mlx->img_y / 4;
		ft_segment(e);
	}
}

void	draw_resize(t_graph *e, int color)
{
	int		value_y;

	value_y = e->i.mlx->img_y * 0.05;
	e->bs.color = color;
	draw_resize_topleft(e, value_y);
	draw_resize_topright(e, value_y);
	draw_resize_bottomleft(e, value_y);
	draw_resize_bottomright(e, value_y);
}
