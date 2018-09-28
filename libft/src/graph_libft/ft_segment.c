/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_segment.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:16:52 by prossi            #+#    #+#             */
/*   Updated: 2018/09/28 16:18:14 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_segment_letter_td(t_graph *e)
{
	int		i;

	e->bs.cumul = e->bs.dy / 2;
	i = 1;
	while (i <= e->bs.dy)
	{
		e->bs.yi += e->bs.yinc;
		e->bs.cumul += e->bs.dx;
		if (e->bs.cumul >= e->bs.dy)
		{
			e->bs.cumul -= e->bs.dy;
			e->bs.xi += e->bs.xinc;
		}
		pixel_put_to_img(&e->i.mlx, e->bs.xi, e->bs.yi, \
			e->lt.couleur);
		i++;
	}
}

void	ft_segment_letter_sd(t_graph *e)
{
	int		i;

	e->bs.cumul = e->bs.dx / 2;
	i = 1;
	while (i <= e->bs.dx)
	{
		e->bs.xi += e->bs.xinc;
		e->bs.cumul += e->bs.dy;
		if (e->bs.cumul >= e->bs.dx)
		{
			e->bs.cumul -= e->bs.dx;
			e->bs.yi += e->bs.yinc;
		}
		pixel_put_to_img(&e->i.mlx, e->bs.xi, e->bs.yi, \
			e->lt.couleur);
		i++;
	}
}

void	ft_segment_letter(t_graph *e)
{
	e->bs.dx = e->bs.xf - e->bs.xi;
	e->bs.dy = e->bs.yf - e->bs.yi;
	e->bs.xinc = (e->bs.dx > 0) ? 1 : -1;
	e->bs.yinc = (e->bs.dy > 0) ? 1 : -1;
	e->bs.dx = abs(e->bs.dx);
	e->bs.dy = abs(e->bs.dy);
	pixel_put_to_img(&e->i.mlx, e->bs.xi, e->bs.yi, \
		e->lt.couleur);
	if (e->bs.dx > e->bs.dy)
		ft_segment_letter_sd(e);
	else
	{
		ft_segment_letter_td(e);
	}
}
