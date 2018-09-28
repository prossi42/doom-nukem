/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_value_two.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 14:12:05 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 14:12:26 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_value_two_fih(t_graph *e, int option)
{
	if (option == 12)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - 1;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 13)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - 2;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
}

void	ft_init_value_two_fh(t_graph *e, int option)
{
	if (option == 9)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - 1;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff) - 1;
		e->bs.yf = e->bs.yi - (37.5 * e->lt.coeff) + 1;
	}
	if (option == 10)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - 2;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff) - 2;
		e->bs.yf = e->bs.yi - (37.5 * e->lt.coeff) + 2;
	}
	if (option == 11)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	ft_init_value_two_fih(e, option);
}

void	ft_init_value_two_td(t_graph *e, int option)
{
	if (option == 6)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - 2;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 7)
	{
		e->bs.x_arc = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (37.5 * e->lt.coeff);
		e->bs.ray_arc = 12.5 * e->lt.coeff;
	}
	if (option == 8)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (37.5 * e->lt.coeff);
	}
	ft_init_value_two_fh(e, option);
}

void	ft_init_value_two_sd(t_graph *e, int option)
{
	if (option == 3)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - 2;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff) - 2;
		e->bs.yf = e->bs.yi - (25 * e->lt.coeff) + 2;
	}
	if (option == 4)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 5)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - 1;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	ft_init_value_two_td(e, option);
}

void	ft_init_value_two(t_graph *e, int option)
{
	if (option == 0)
	{
		e->bs.x_arc = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (25 * e->lt.coeff);
		e->bs.width = 12.5 * e->lt.coeff;
		e->bs.height = 25 * e->lt.coeff;
	}
	if (option == 1)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (25 * e->lt.coeff);
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - 1;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff) - 1;
		e->bs.yf = e->bs.yi - (25 * e->lt.coeff) + 1;
	}
	ft_init_value_two_sd(e, option);
}
