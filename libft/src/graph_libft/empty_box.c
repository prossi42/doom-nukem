/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_box.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:23:26 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 11:23:50 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_value_empty_box_sd(t_graph *e, int option)
{
	if (option == 2)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (e->bs.height * e->lt.coeff);
		e->bs.xf = e->bs.xi + (e->bs.width * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	else if (option == 3)
	{
		e->bs.xi = e->lt.posx + (e->bs.width * e->lt.coeff);
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (e->bs.height * e->lt.coeff);
	}
}

void	ft_init_value_empty_box(t_graph *e, int option)
{
	if (option == 0)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi + (e->bs.width * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	else if (option == 1)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (e->bs.height * e->lt.coeff);
	}
	ft_init_value_empty_box_sd(e, option);
}

void	empty_box(t_graph *e)
{
	ft_init_value_empty_box(e, 0);
	ft_segment(e);
	ft_init_value_empty_box(e, 1);
	ft_segment(e);
	ft_init_value_empty_box(e, 2);
	ft_segment(e);
	ft_init_value_empty_box(e, 3);
	ft_segment(e);
}
