/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:01:04 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 09:53:36 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_d_sd(t_graph *e, int option)
{
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + 2;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 4)
	{
		e->bs.x_arc = e->lt.posx;
		e->bs.y_arc = e->lt.posy - (25 * e->lt.coeff);
		e->bs.width = 25 * e->lt.coeff;
		e->bs.height = 25 * e->lt.coeff;
	}
}

void	ft_init_segment_d(t_graph *e, int option)
{
	if (option == 1)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx + 1;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	ft_init_segment_d_sd(e, option);
}

void	d(t_graph *e)
{
	ft_init_segment_d(e, 1);
	ft_segment(e);
	ft_init_segment_d(e, 2);
	ft_segment(e);
	ft_init_segment_d(e, 3);
	ft_segment(e);
	ft_init_segment_d(e, 4);
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 6);
	ft_ellipse(e, 1, 4);
	e->bs.width--;
	e->bs.height--;
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 6);
	ft_ellipse(e, 1, 4);
	e->bs.width--;
	e->bs.height--;
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 6);
	ft_ellipse(e, 1, 4);
}
