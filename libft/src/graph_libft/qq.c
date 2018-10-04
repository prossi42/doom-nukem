/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qq.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:06:20 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 13:37:49 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_q_sd(t_graph *e, int option)
{
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff) + 1;
		e->bs.yi = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff) - 1;
		e->bs.yf = e->bs.yi + (12.5 * e->lt.coeff);
	}
	if (option == 4)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff) + 2;
		e->bs.yi = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff) - 2;
		e->bs.yf = e->bs.yi + (12.5 * e->lt.coeff) - 1;
	}
}

void	ft_init_segment_q(t_graph *e, int option)
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
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff) - 1;
		e->bs.yf = e->bs.yi + (12.5 * e->lt.coeff);
	}
	ft_init_segment_q_sd(e, option);
}

void	q(t_graph *e)
{
	ft_init_segment_q(e, 1);
	ft_ellipse(e, 0, 0);
	e->bs.width--;
	e->bs.height--;
	ft_ellipse(e, 0, 0);
	e->bs.width--;
	e->bs.height--;
	ft_ellipse(e, 0, 0);
	ft_init_segment_q(e, 2);
	ft_segment(e);
	ft_init_segment_q(e, 3);
	ft_segment(e);
	ft_init_segment_q(e, 4);
	ft_segment(e);
}
