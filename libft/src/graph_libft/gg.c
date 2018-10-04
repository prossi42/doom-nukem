/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gg.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:01:55 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 12:50:21 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_g_sd(t_graph *e, int option)
{
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff) + 1;
		e->bs.xf = e->bs.xi - (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 4)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff) - 1;
		e->bs.xf = e->bs.xi - (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
}

void	ft_init_segment_g(t_graph *e, int option)
{
	if (option == 1)
	{
		e->bs.x_arc = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (25 * e->lt.coeff);
		e->bs.width = 12.5 * e->lt.coeff;
		e->bs.height = 25 * e->lt.coeff;
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff);
		e->bs.xf = e->bs.xi - (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	ft_init_segment_g_sd(e, option);
}

void	g(t_graph *e)
{
	ft_init_segment_g(e, 1);
	ft_ellipse(e, 2, 1);
	ft_ellipse(e, 1, 0);
	ft_ellipse(e, 2, 6);
	e->bs.width--;
	e->bs.height--;
	ft_ellipse(e, 2, 1);
	ft_ellipse(e, 1, 0);
	ft_ellipse(e, 2, 6);
	e->bs.width--;
	e->bs.height--;
	ft_ellipse(e, 2, 1);
	ft_ellipse(e, 1, 0);
	ft_ellipse(e, 2, 6);
	ft_init_segment_g(e, 2);
	ft_segment(e);
	ft_init_segment_g(e, 3);
	ft_segment(e);
	ft_init_segment_g(e, 4);
	ft_segment(e);
}
