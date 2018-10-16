/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_new_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 15:17:54 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/15 22:54:18 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	draw_new_file_init_values(t_graph *e, int option, int posx, int posy)
{
	e->bs.xi = posx;
	e->bs.yi = posy;
	if (option == 0)
	{
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	else if (option == 1)
	{
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi + (12.5 * e->lt.coeff);
	}
	else if (option == 2)
	{
		e->bs.xf = e->bs.xi;
		e->bs.yf = posy - (25 * e->lt.coeff);
	}
	else if (option == 3)
	{
		e->bs.xf = e->bs.xi + (30 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	else if (option == 4)
	{
		e->bs.xf = e->bs.xi + (10 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (10 * e->lt.coeff);
	}
	else if (option == 5)
	{
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi + (10 * e->lt.coeff);
	}
	else if (option == 6)
	{
		e->bs.xf = e->bs.xi + (10 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	else if (option == 7)
	{
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi + (40 * e->lt.coeff);
	}
	else if (option == 8)
	{
		e->bs.xf = e->bs.xi - (40 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
}

void	draw_new_file(t_graph *e, int posx, int posy, int color)
{
	e->bs.color = color;
	draw_new_file_init_values(e, 0, posx, posy - (12.5 * e->lt.coeff));
	ft_segment(e);
	draw_new_file_init_values(e, 1, posx + (6.25 * e->lt.coeff), posy - (18.75 * e->lt.coeff));
	ft_segment(e);
	draw_new_file_init_values(e, 2, posx, posy - (25 * e->lt.coeff));
	ft_segment(e);
	draw_new_file_init_values(e, 3, posx, posy - (50 * e->lt.coeff));
	ft_segment(e);
	draw_new_file_init_values(e, 4, posx + (30 * e->lt.coeff), posy - (50 * e->lt.coeff));
	ft_segment(e);
	draw_new_file_init_values(e, 5, posx + (30 * e->lt.coeff), posy - (50 * e->lt.coeff));
	ft_segment(e);
	draw_new_file_init_values(e, 6, posx + (30 * e->lt.coeff), posy - (40 * e->lt.coeff));
	ft_segment(e);
	draw_new_file_init_values(e, 7, posx + (40 * e->lt.coeff), posy - (40 * e->lt.coeff));
	ft_segment(e);
	draw_new_file_init_values(e, 8, posx + (40 * e->lt.coeff), posy);
	ft_segment(e);
}
