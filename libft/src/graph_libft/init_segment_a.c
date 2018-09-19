/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_segment_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:31:26 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 11:31:28 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_a_sd(t_stuff *e, int option)
{
	if (option == 0)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 1)
	{
		e->bs.xi = e->lt.posx + 1;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx + 2;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
}

void	ft_init_segment_a_td(t_stuff *e, int option)
{
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi - (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 4)
	{
		e->bs.xi = (e->lt.posx + 1) + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi - (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 5)
	{
		e->bs.xi = (e->lt.posx + 2) + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi - (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
}

void	ft_init_segment_a_fh(t_stuff *e, int option)
{
	if (option == 6)
	{
		e->bs.xi = e->lt.posx + (6.25 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 7)
	{
		e->bs.xi = (e->lt.posx + 1) + (6.25 * e->lt.coeff);
		e->bs.yi = (e->lt.posy - (25 * e->lt.coeff) + 1);
		e->bs.xf = (e->bs.xi + (12.5 * e->lt.coeff));
		e->bs.yf = e->bs.yi;
	}
	if (option == 8)
	{
		e->bs.xi = (e->lt.posx + 2) + (6.25 * e->lt.coeff);
		e->bs.yi = (e->lt.posy - (25 * e->lt.coeff) + 2);
		e->bs.xf = (e->bs.xi + (12.5 * e->lt.coeff));
		e->bs.yf = e->bs.yi;
	}
}

void	ft_init_segment_a(t_stuff *e, int option)
{
	ft_init_segment_a_sd(e, option);
	ft_init_segment_a_td(e, option);
	ft_init_segment_a_fh(e, option);
}
