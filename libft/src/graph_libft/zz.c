/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:10:22 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 14:18:19 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_z_td(t_graph *e, int option)
{
	if (option == 7)
	{
		e->bs.xi = e->lt.posx;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy;
		e->bs.yf = e->bs.yi;
	}
	if (option == 8)
	{
		e->bs.xi = e->lt.posx;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy - 1;
		e->bs.yf = e->bs.yi;
	}
	if (option == 9)
	{
		e->bs.xi = e->lt.posx;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy - 2;
		e->bs.yf = e->bs.yi;
	}
}

void	ft_init_segment_z_sd(t_graph *e, int option)
{
	if (option == 4)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->lt.posx + (25 * e->lt.coeff) - 2;
		e->bs.yf = e->lt.posy - (50 * e->lt.coeff);
	}
	if (option == 5)
	{
		e->bs.xi = e->lt.posx + 1;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->lt.posx + (25 * e->lt.coeff) - 1;
		e->bs.yf = e->lt.posy - (50 * e->lt.coeff);
	}
	if (option == 6)
	{
		e->bs.xi = e->lt.posx + 2;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->lt.posx + (25 * e->lt.coeff);
		e->bs.yf = e->lt.posy - (50 * e->lt.coeff);
	}
	ft_init_segment_z_td(e, option);
}

void	ft_init_segment_z(t_graph *e, int option)
{
	if (option == 1)
	{
		e->bs.xi = e->lt.posx;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy + 1 - (50 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 3)
	{
		e->bs.xi = e->lt.posx;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy + 2 - (50 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	ft_init_segment_z_sd(e, option);
}

void	z(t_graph *e)
{
	ft_init_segment_z(e, 1);
	ft_segment(e);
	ft_init_segment_z(e, 2);
	ft_segment(e);
	ft_init_segment_z(e, 3);
	ft_segment(e);
	ft_init_segment_z(e, 4);
	ft_segment(e);
	ft_init_segment_z(e, 5);
	ft_segment(e);
	ft_init_segment_z(e, 6);
	ft_segment(e);
	ft_init_segment_z(e, 7);
	ft_segment(e);
	ft_init_segment_z(e, 8);
	ft_segment(e);
	ft_init_segment_z(e, 9);
	ft_segment(e);
}
