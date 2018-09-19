/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vv.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:08:48 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 14:59:52 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_v_sd(t_stuff *e, int option)
{
	if (option == 4)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.yf = e->lt.posy;
	}
	if (option == 5)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.yf = e->lt.posy - 1;
	}
	if (option == 6)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff) - 2;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.yf = e->lt.posy - 2;
	}
}

void	ft_init_segment_v(t_stuff *e, int option)
{
	if (option == 1)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff);
		e->bs.yf = e->lt.posy;
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx + 1;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (12.5 * e->lt.coeff) - 1;
		e->bs.yf = e->lt.posy - 1;
	}
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + 2;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.yf = e->lt.posy - 2;
	}
	ft_init_segment_v_sd(e, option);
}

void	v(t_stuff *e)
{
	ft_init_segment_v(e, 1);
	ft_segment_letter(e);
	ft_init_segment_v(e, 2);
	ft_segment_letter(e);
	ft_init_segment_v(e, 3);
	ft_segment_letter(e);
	ft_init_segment_v(e, 4);
	ft_segment_letter(e);
	ft_init_segment_v(e, 5);
	ft_segment_letter(e);
	ft_init_segment_v(e, 6);
	ft_segment_letter(e);
}
