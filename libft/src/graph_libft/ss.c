/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:07:48 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 13:52:23 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_s_sd(t_graph *e, int option)
{
	if (option == 4)
	{
		e->bs.xi = e->lt.posx + (2.8 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (31 * e->lt.coeff) - 1;
		e->bs.xf = e->bs.xi + (19.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (13.2 * e->lt.coeff);
	}
	if (option == 5)
	{
		e->bs.xi = e->lt.posx + (2.8 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (31 * e->lt.coeff) - 2;
		e->bs.xf = e->bs.xi + (19.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (13.2 * e->lt.coeff);
	}
}

void	ft_init_segment_s(t_graph *e, int option)
{
	if (option == 1)
	{
		e->bs.x_arc = e->lt.posx;
		e->bs.y_arc = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.width = 25 * e->lt.coeff;
		e->bs.height = 12.5 * e->lt.coeff;
	}
	if (option == 2)
	{
		e->bs.x_arc = e->lt.posx + (25 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (37.5 * e->lt.coeff);
		e->bs.width = 25 * e->lt.coeff;
		e->bs.height = 12.5 * e->lt.coeff;
	}
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + (2.8 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (31 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (19.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (13.2 * e->lt.coeff);
	}
	ft_init_segment_s_sd(e, option);
}

void	s(t_graph *e)
{
	ft_init_segment_s(e, 1);
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 6);
	e->bs.y_arc--;
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 6);
	e->bs.y_arc--;
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 6);
	ft_init_segment_s(e, 2);
	ft_ellipse(e, 2, 1);
	ft_ellipse(e, 1, 3);
	e->bs.y_arc++;
	ft_ellipse(e, 2, 1);
	ft_ellipse(e, 1, 3);
	e->bs.y_arc++;
	ft_ellipse(e, 2, 1);
	ft_ellipse(e, 1, 3);
	ft_init_segment_s(e, 3);
	ft_segment(e);
	ft_init_segment_s(e, 4);
	ft_segment(e);
	ft_init_segment_s(e, 5);
	ft_segment(e);
}
