/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eight.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 17:12:48 by prossi            #+#    #+#             */
/*   Updated: 2018/03/06 17:20:08 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_value_eight(t_graph *e, int option)
{
	if (option == 0)
	{
		e->bs.x_arc = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (37.5 * e->lt.coeff);
		e->bs.ray_arc = 13 * e->lt.coeff;
	}
	if (option == 1)
	{
		e->bs.x_arc = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.ray_arc = 13 * e->lt.coeff;
	}
}

void	eight(t_graph *e)
{
	ft_init_value_eight(e, 0);
	ft_arc(e, 9);
	e->bs.ray_arc--;
	ft_arc(e, 9);
	e->bs.ray_arc--;
	ft_arc(e, 9);
	ft_init_value_eight(e, 1);
	ft_arc(e, 9);
	e->bs.ray_arc--;
	ft_arc(e, 9);
	e->bs.ray_arc--;
	ft_arc(e, 9);
}
