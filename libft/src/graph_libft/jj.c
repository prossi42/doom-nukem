/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jj.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:03:47 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 12:37:07 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_j_td(t_stuff *e, int option)
{
	if (option == 7)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff) + 2;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
}

void	ft_init_segment_j_sd(t_stuff *e, int option)
{
	if (option == 4)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff) + 1;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 5)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 6)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff) + 1;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	ft_init_segment_j_td(e, option);
}

void	ft_init_segment_j(t_stuff *e, int option)
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
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	ft_init_segment_j_sd(e, option);
}

void	j(t_stuff *e)
{
	ft_init_segment_j(e, 1);
	ft_ellipse(e, 2, 4);
	ft_ellipse(e, 1, 5);
	e->bs.width--;
	e->bs.height--;
	ft_ellipse(e, 2, 4);
	ft_ellipse(e, 1, 5);
	e->bs.width--;
	e->bs.height--;
	ft_ellipse(e, 2, 4);
	ft_ellipse(e, 1, 5);
	ft_init_segment_j(e, 2);
	ft_segment_letter(e);
	ft_init_segment_j(e, 3);
	ft_segment_letter(e);
	ft_init_segment_j(e, 4);
	ft_segment_letter(e);
	ft_init_segment_j(e, 5);
	ft_segment_letter(e);
	ft_init_segment_j(e, 6);
	ft_segment_letter(e);
	ft_init_segment_j(e, 7);
	ft_segment_letter(e);
}
