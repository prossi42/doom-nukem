/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:31:49 by prossi            #+#    #+#             */
/*   Updated: 2018/10/08 22:48:07 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_value_minus_sd(t_graph *e, int option)
{
	if (option == 3)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff) - 3;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 4)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff) - 4;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
}

void	ft_init_value_minus(t_graph *e, int option)
{
	if (option == 0)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 1)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff) - 1;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff) - 2;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	ft_init_value_minus_sd(e, option);
}

void	minus(t_graph *e)
{
	ft_init_value_minus(e, 0);
	ft_segment(e);
	ft_init_value_minus(e, 1);
	ft_segment(e);
	ft_init_value_minus(e, 2);
	ft_segment(e);
	ft_init_value_minus(e, 3);
	ft_segment(e);
	ft_init_value_minus(e, 4);
	ft_segment(e);
}
