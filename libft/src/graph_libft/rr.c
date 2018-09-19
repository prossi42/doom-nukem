/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:07:30 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 13:42:23 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_r_td(t_stuff *e, int option)
{
	if (option == 7)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff) - 2;
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (25 * e->lt.coeff);
	}
}

void	ft_init_segment_r_sd(t_stuff *e, int option)
{
	if (option == 4)
	{
		e->bs.x_arc = e->lt.posx;
		e->bs.y_arc = e->lt.posy - (37.5 * e->lt.coeff);
		e->bs.width = 25 * e->lt.coeff;
		e->bs.height = 12.5 * e->lt.coeff;
	}
	if (option == 5)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (25 * e->lt.coeff);
	}
	if (option == 6)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (25 * e->lt.coeff);
	}
	ft_init_segment_r_td(e, option);
}

void	ft_init_segment_r(t_stuff *e, int option)
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
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + 2;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	ft_init_segment_r_sd(e, option);
}

void	r_sd(t_stuff *e)
{
	e->bs.height--;
	e->bs.width--;
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 4);
	ft_ellipse(e, 1, 6);
	e->bs.height--;
	e->bs.width--;
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 4);
	ft_ellipse(e, 1, 6);
	ft_init_segment_r(e, 5);
	ft_segment_letter(e);
	ft_init_segment_r(e, 6);
	ft_segment_letter(e);
	ft_init_segment_r(e, 7);
	ft_segment_letter(e);
}

void	r(t_stuff *e)
{
	ft_init_segment_r(e, 1);
	ft_segment_letter(e);
	ft_init_segment_r(e, 2);
	ft_segment_letter(e);
	ft_init_segment_r(e, 3);
	ft_segment_letter(e);
	ft_init_segment_r(e, 4);
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 4);
	ft_ellipse(e, 1, 6);
	r_sd(e);
}
