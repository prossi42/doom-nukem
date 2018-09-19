/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:00:43 by prossi            #+#    #+#             */
/*   Updated: 2018/04/23 12:38:22 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_c(t_stuff *e, int option)
{
	if (option == 1)
	{
		e->bs.x_arc = e->lt.posx + (25 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (25 * e->lt.coeff);
		e->bs.width = 25 * e->lt.coeff;
		e->bs.height = 25 * e->lt.coeff;
	}
}

void	c(t_stuff *e)
{
	ft_init_segment_c(e, 1);
	ft_ellipse(e, 2, 1);
	ft_ellipse(e, 1, 3);
	ft_ellipse(e, 1, 5);
	e->bs.width--;
	e->bs.height--;
	ft_ellipse(e, 2, 1);
	ft_ellipse(e, 1, 3);
	ft_ellipse(e, 1, 5);
	e->bs.width--;
	e->bs.height--;
	ft_ellipse(e, 2, 1);
	ft_ellipse(e, 1, 3);
	ft_ellipse(e, 1, 5);
}
