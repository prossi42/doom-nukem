/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yy.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:09:50 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 14:20:07 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_y_td(t_graph *e, int option)
{
	if (option == 7)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (12.5 * e->lt.coeff) + 1;
		e->bs.yf = e->lt.posy - (25 * e->lt.coeff);
	}
	if (option == 8)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.yf = e->lt.posy - (25 * e->lt.coeff);
	}
	if (option == 9)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff) - 2;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (12.5 * e->lt.coeff) - 1;
		e->bs.yf = e->lt.posy - (25 * e->lt.coeff);
	}
}

void	ft_init_segment_y_sd(t_graph *e, int option)
{
	if (option == 4)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (12.5 * e->lt.coeff) - 1;
		e->bs.yf = e->lt.posy - (25 * e->lt.coeff);
	}
	if (option == 5)
	{
		e->bs.xi = e->lt.posx + 1;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.yf = e->lt.posy - (25 * e->lt.coeff);
	}
	if (option == 6)
	{
		e->bs.xi = e->lt.posx + 2;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (12.5 * e->lt.coeff) + 1;
		e->bs.yf = e->lt.posy - (25 * e->lt.coeff);
	}
	ft_init_segment_y_td(e, option);
}

void	ft_init_segment_y(t_graph *e, int option)
{
	if (option == 1)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->lt.posy - (25 * e->lt.coeff);
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->lt.posy - (25 * e->lt.coeff);
	}
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff) + 1;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->lt.posy - (25 * e->lt.coeff);
	}
	ft_init_segment_y_sd(e, option);
}

void	y(t_graph *e)
{
	ft_init_segment_y(e, 1);
	ft_segment(e);
	ft_init_segment_y(e, 2);
	ft_segment(e);
	ft_init_segment_y(e, 3);
	ft_segment(e);
	ft_init_segment_y(e, 4);
	ft_segment(e);
	ft_init_segment_y(e, 5);
	ft_segment(e);
	ft_init_segment_y(e, 6);
	ft_segment(e);
	ft_init_segment_y(e, 7);
	ft_segment(e);
	ft_init_segment_y(e, 8);
	ft_segment(e);
	ft_init_segment_y(e, 9);
	ft_segment(e);
}
