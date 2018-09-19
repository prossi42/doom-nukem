/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ellipse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:30:45 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 12:28:31 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_ellipse_sd(t_stuff *e, int piece, int option)
{
	e->bs.x = e->bs.width;
	e->bs.y = 0;
	e->bs.sigma = (2 * e->bs.a2) + (e->bs.b2 * (1 - (2 * e->bs.width)));
	while (e->bs.a2 * e->bs.y <= e->bs.b2 * e->bs.x)
	{
		if (piece == 0 || piece == 2)
		{
			select_part_width(e, e->bs.x, e->bs.y, option);
			select_part_width_sd(e, e->bs.x, e->bs.y, option);
		}
		if (e->bs.sigma >= 0)
		{
			e->bs.sigma += e->bs.fb2 * (1 - e->bs.x);
			e->bs.x--;
		}
		e->bs.sigma += e->bs.a2 * ((4 * e->bs.y) + 6);
		e->bs.y++;
	}
}

void	ft_ellipse(t_stuff *e, int piece, int option)
{
	e->bs.a2 = e->bs.width * e->bs.width;
	e->bs.b2 = e->bs.height * e->bs.height;
	e->bs.fa2 = 4 * e->bs.a2;
	e->bs.fb2 = 4 * e->bs.b2;
	e->bs.x = 0;
	e->bs.y = e->bs.height;
	e->bs.sigma = (2 * e->bs.b2) + (e->bs.a2 * (1 - (2 * e->bs.height)));
	while (e->bs.b2 * e->bs.x <= e->bs.a2 * e->bs.y)
	{
		if (piece == 0 || piece == 1)
		{
			select_part_height(e, e->bs.x, e->bs.y, option);
			select_part_height_sd(e, e->bs.x, e->bs.y, option);
		}
		if (e->bs.sigma >= 0)
		{
			e->bs.sigma += e->bs.fa2 * (1 - e->bs.y);
			e->bs.y--;
		}
		e->bs.sigma += e->bs.b2 * ((4 * e->bs.x) + 6);
		e->bs.x++;
	}
	ft_ellipse_sd(e, piece, option);
}
