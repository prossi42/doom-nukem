/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colons.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:24:24 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 11:24:25 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_value_colons(t_graph *e, int option)
{
	if (option == 0)
	{
		e->bs.x_arc = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.ray_arc = 5 * e->lt.coeff;
	}
	if (option == 1)
	{
		e->bs.x_arc = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (37.5 * e->lt.coeff);
		e->bs.ray_arc = 5 * e->lt.coeff;
	}
}

void	colons(t_graph *e)
{
	ft_init_value_colons(e, 0);
	ft_arc(e, 9);
	while (--e->bs.ray_arc > 0)
		ft_arc(e, 9);
	ft_init_value_colons(e, 1);
	ft_arc(e, 9);
	while (--e->bs.ray_arc > 0)
		ft_arc(e, 9);
}
