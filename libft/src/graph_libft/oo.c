/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oo.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:05:28 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 09:43:42 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_o(t_graph *e, int option)
{
	if (option == 1)
	{
		e->bs.x_arc = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (25 * e->lt.coeff);
		e->bs.width = 12.5 * e->lt.coeff;
		e->bs.height = 25 * e->lt.coeff;
	}
}

void	o(t_graph *e)
{
	ft_init_segment_o(e, 1);
	ft_ellipse(e, 0, 0);
	e->bs.height--;
	e->bs.width--;
	ft_ellipse(e, 0, 0);
	e->bs.height--;
	e->bs.width--;
	ft_ellipse(e, 0, 0);
}
