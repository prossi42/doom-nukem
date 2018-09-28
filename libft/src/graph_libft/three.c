/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three->c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 09:23:26 by prossi            #+#    #+#             */
/*   Updated: 2018/03/06 12:29:23 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_value_three(t_graph *e, int option)
{
	if (option == 0)
	{
		e->bs.x_arc = e->lt.posx;
		e->bs.y_arc = e->lt.posy - (37.5 * e->lt.coeff);
		e->bs.width = 25 * e->lt.coeff;
		e->bs.height = 12.5 * e->lt.coeff;
	}
	if (option == 1)
	{
		e->bs.x_arc = e->lt.posx;
		e->bs.y_arc = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.width = 25 * e->lt.coeff;
		e->bs.height = 12.5 * e->lt.coeff;
	}
}

void	three(t_graph *e)
{
	ft_init_value_three(e, 0);
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 4);
	ft_ellipse(e, 1, 6);
	e->bs.y_arc++;
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 4);
	ft_ellipse(e, 1, 6);
	e->bs.y_arc++;
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 4);
	ft_ellipse(e, 1, 6);
	ft_init_value_three(e, 1);
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 4);
	ft_ellipse(e, 1, 6);
	e->bs.y_arc--;
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 4);
	ft_ellipse(e, 1, 6);
	e->bs.y_arc--;
	ft_ellipse(e, 2, 2);
	ft_ellipse(e, 1, 4);
	ft_ellipse(e, 1, 6);
}
