/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xx.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:09:28 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 14:04:25 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_x_sd(t_graph *e, int option)
{
	if (option == 4)
	{
		e->bs.xi = e->lt.posx;
		e->bs.xf = e->lt.posx + (25 * e->lt.coeff) - 2;
		e->bs.yi = e->lt.posy;
		e->bs.yf = e->lt.posy - (50 * e->lt.coeff);
	}
	if (option == 5)
	{
		e->bs.xi = e->lt.posx + 1;
		e->bs.xf = e->lt.posx + (25 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy;
		e->bs.yf = e->lt.posy - (50 * e->lt.coeff);
	}
	if (option == 6)
	{
		e->bs.xi = e->lt.posx + 2;
		e->bs.xf = e->lt.posx + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy;
		e->bs.yf = e->lt.posy - (50 * e->lt.coeff);
	}
}

void	ft_init_segment_x(t_graph *e, int option)
{
	if (option == 1)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (25 * e->lt.coeff) - 2;
		e->bs.yf = e->lt.posy;
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx + 1;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (25 * e->lt.coeff) - 1;
		e->bs.yf = e->lt.posy;
	}
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + 2;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (25 * e->lt.coeff);
		e->bs.yf = e->lt.posy;
	}
	ft_init_segment_x_sd(e, option);
}

void	x(t_graph *e)
{
	ft_init_segment_x(e, 1);
	ft_segment_letter(e);
	ft_init_segment_x(e, 2);
	ft_segment_letter(e);
	ft_init_segment_x(e, 3);
	ft_segment_letter(e);
	ft_init_segment_x(e, 4);
	ft_segment_letter(e);
	ft_init_segment_x(e, 5);
	ft_segment_letter(e);
	ft_init_segment_x(e, 6);
	ft_segment_letter(e);
}
