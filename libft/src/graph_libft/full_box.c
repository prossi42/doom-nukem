/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_box.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:31:13 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 11:31:14 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_value_full_box(t_stuff *e, int option)
{
	if (option == 0)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi + (e->bs.width * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 1)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi--;
		e->bs.xf = e->bs.xi + (e->bs.width * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
}

void	full_box(t_stuff *e)
{
	ft_init_value_full_box(e, 0);
	ft_segment_letter(e);
	while (e->lt.posy - e->bs.yi < e->bs.height * e->lt.coeff)
	{
		ft_init_value_full_box(e, 1);
		ft_segment_letter(e);
	}
}
