/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nn.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:05:14 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 13:38:00 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_n_td(t_graph *e, int option)
{
	if (option == 7)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff) - 1;
		e->bs.yf = e->bs.yi + (50 * e->lt.coeff);
	}
	if (option == 8)
	{
		e->bs.xi = e->lt.posx + 1;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff) - 1;
		e->bs.yf = e->bs.yi + (50 * e->lt.coeff);
	}
	if (option == 9)
	{
		e->bs.xi = e->lt.posx + 2;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff) - 2;
		e->bs.yf = e->bs.yi + (50 * e->lt.coeff) - 1;
	}
}

void	ft_init_segment_n_sd(t_graph *e, int option)
{
	if (option == 4)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff);
		e->bs.xf = e->bs.xi;
		e->bs.yi = e->lt.posy;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 5)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff) - 1;
		e->bs.xf = e->bs.xi;
		e->bs.yi = e->lt.posy;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 6)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff) - 2;
		e->bs.xf = e->bs.xi;
		e->bs.yi = e->lt.posy;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	ft_init_segment_n_td(e, option);
}

void	ft_init_segment_n(t_graph *e, int option)
{
	if (option == 1)
	{
		e->bs.xi = e->lt.posx;
		e->bs.xf = e->bs.xi;
		e->bs.yi = e->lt.posy;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx + 1;
		e->bs.xf = e->bs.xi;
		e->bs.yi = e->lt.posy;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + 2;
		e->bs.xf = e->bs.xi;
		e->bs.yi = e->lt.posy;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	ft_init_segment_n_sd(e, option);
}

void	n(t_graph *e)
{
	ft_init_segment_n(e, 1);
	ft_segment(e);
	ft_init_segment_n(e, 2);
	ft_segment(e);
	ft_init_segment_n(e, 3);
	ft_segment(e);
	ft_init_segment_n(e, 4);
	ft_segment(e);
	ft_init_segment_n(e, 5);
	ft_segment(e);
	ft_init_segment_n(e, 6);
	ft_segment(e);
	ft_init_segment_n(e, 7);
	ft_segment(e);
	ft_init_segment_n(e, 8);
	ft_segment(e);
	ft_init_segment_n(e, 9);
	ft_segment(e);
}
