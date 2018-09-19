/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:24:36 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 11:24:37 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_value_dot_sd(t_stuff *e, int option)
{
	if (option == 3)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - 3;
		e->bs.xf = e->bs.xi + (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 4)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - 4;
		e->bs.xf = e->bs.xi + (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
}

void	ft_init_value_dot(t_stuff *e, int option)
{
	if (option == 0)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi + (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 1)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - 1;
		e->bs.xf = e->bs.xi + (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - 2;
		e->bs.xf = e->bs.xi + (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	ft_init_value_dot_sd(e, option);
}

void	dot(t_stuff *e)
{
	ft_init_value_dot(e, 0);
	ft_segment_letter(e);
	ft_init_value_dot(e, 1);
	ft_segment_letter(e);
	ft_init_value_dot(e, 2);
	ft_segment_letter(e);
	ft_init_value_dot(e, 3);
	ft_segment_letter(e);
	ft_init_value_dot(e, 4);
	ft_segment_letter(e);
}
