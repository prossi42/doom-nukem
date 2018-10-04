/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five->c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 13:44:08 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 10:42:40 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_value_five_td(t_graph *e, int option)
{
	if (option == 6)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff) + 2;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
}

void	ft_init_value_five_sd(t_graph *e, int option)
{
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + 2;
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff);
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (25 * e->lt.coeff);
	}
	if (option == 4)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 5)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff) + 1;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	ft_init_value_five_td(e, option);
}

void	ft_init_value_five(t_graph *e, int option)
{
	if (option == 0)
	{
		e->bs.x_arc = e->lt.posx;
		e->bs.y_arc = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.width = 25 * e->lt.coeff;
		e->bs.height = 12.5 * e->lt.coeff;
	}
	if (option == 1)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff);
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (25 * e->lt.coeff);
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx + 1;
		e->bs.yi = e->lt.posy - (25 * e->lt.coeff);
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (25 * e->lt.coeff);
	}
	ft_init_value_five_sd(e, option);
}

void	five(t_graph *e)
{
	ft_init_value_five(e, 0);
	ft_ellipse(e, 1, 4);
	ft_ellipse(e, 1, 6);
	ft_ellipse(e, 2, 2);
	e->bs.y_arc--;
	ft_ellipse(e, 1, 4);
	ft_ellipse(e, 1, 6);
	ft_ellipse(e, 2, 2);
	e->bs.y_arc--;
	ft_ellipse(e, 1, 4);
	ft_ellipse(e, 1, 6);
	ft_ellipse(e, 2, 2);
	ft_init_value_five(e, 1);
	ft_segment(e);
	ft_init_value_five(e, 2);
	ft_segment(e);
	ft_init_value_five(e, 3);
	ft_segment(e);
	ft_init_value_five(e, 4);
	ft_segment(e);
	ft_init_value_five(e, 5);
	ft_segment(e);
	ft_init_value_five(e, 6);
	ft_segment(e);
}
