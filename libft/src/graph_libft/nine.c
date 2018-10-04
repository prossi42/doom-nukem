/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nine->c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:31:57 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 13:30:36 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_value_nine_sd(t_graph *e, int option)
{
	if (option == 2)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy - (37.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi - (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (37.5 * e->lt.coeff);
	}
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff) - 2;
		e->bs.yi = e->lt.posy - (37.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi - (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (37.5 * e->lt.coeff);
	}
}

void	ft_init_value_nine(t_graph *e, int option)
{
	if (option == 0)
	{
		e->bs.x_arc = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (37.5 * e->lt.coeff);
		e->bs.ray_arc = 12.5 * e->lt.coeff;
	}
	if (option == 1)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (37.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi - (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (37.5 * e->lt.coeff);
	}
	ft_init_value_nine_sd(e, option);
}

void	nine(t_graph *e)
{
	ft_init_value_nine(e, 0);
	ft_arc(e, 9);
	e->bs.ray_arc--;
	ft_arc(e, 9);
	e->bs.ray_arc--;
	ft_arc(e, 9);
	ft_init_value_nine(e, 1);
	ft_segment(e);
	ft_init_value_nine(e, 2);
	ft_segment(e);
	ft_init_value_nine(e, 3);
	ft_segment(e);
}
