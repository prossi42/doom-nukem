/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_exit_logo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 08:19:56 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/17 18:11:43 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	draw_exit_logo_int_values(t_graph *e, int option, int posx, int posy)
{
	e->bs.xi = posx;
	e->bs.yi = posy;
	if (option == 0)
	{
		e->bs.xf = e->bs.xi + (30 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	else if (option == 1)
	{
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (15 * e->lt.coeff);
	}
	else if (option == 2)
	{
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	else if (option == 3)
	{
		e->bs.xf = e->bs.xi + (30 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	else if (option == 4)
	{
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi + (15 * e->lt.coeff);
	}
	else if (option == 5)
	{
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	else if (option == 6)
	{
		e->bs.xf = e->bs.xi - (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (5 * e->lt.coeff);
	}
	else if (option == 7)
	{
		e->bs.xf = e->bs.xi - (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (5 * e->lt.coeff);
	}
}

void	draw_exit_logo(t_graph *e, int posx, int posy, int color)
{
	e->bs.color = color;
	draw_exit_logo_int_values(e, 0, posx, posy);
	ft_segment(e);
	draw_exit_logo_int_values(e, 1, posx + (30 * e->lt.coeff), posy);
	ft_segment(e);
	draw_exit_logo_int_values(e, 2, posx, posy);
	ft_segment(e);
	draw_exit_logo_int_values(e, 3, posx, posy - (50 * e->lt.coeff));
	ft_segment(e);
	draw_exit_logo_int_values(e, 4, posx + (30 * e->lt.coeff), posy - (50 * e->lt.coeff));
	ft_segment(e);
	draw_exit_logo_int_values(e, 5, posx + (15 * e->lt.coeff), posy - (25 * e->lt.coeff));
	ft_segment(e);
	draw_exit_logo_int_values(e, 6, posx + (40 * e->lt.coeff), posy - (25 * e->lt.coeff));
	ft_segment(e);
	draw_exit_logo_int_values(e, 7, posx + (40 * e->lt.coeff), posy - (25 * e->lt.coeff));
	ft_segment(e);
}
