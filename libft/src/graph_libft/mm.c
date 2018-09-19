/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mm.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 14:04:57 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 13:39:46 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_segment_m_fh(t_stuff *e, int option)
{
	if (option == 10)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->bs.xi - (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (25 * e->lt.coeff);
	}
	if (option == 11)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->bs.xi - (12.5 * e->lt.coeff) + 1;
		e->bs.yf = e->bs.yi + (25 * e->lt.coeff) - 1;
	}
	if (option == 12)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff) - 2;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->bs.xi - (12.5 * e->lt.coeff) + 2;
		e->bs.yf = e->bs.yi + (25 * e->lt.coeff) - 2;
	}
}

void	ft_init_segment_m_td(t_stuff *e, int option)
{
	if (option == 7)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (25 * e->lt.coeff);
	}
	if (option == 8)
	{
		e->bs.xi = e->lt.posx + 1;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff) - 1;
		e->bs.yf = e->bs.yi + (25 * e->lt.coeff) - 1;
	}
	if (option == 9)
	{
		e->bs.xi = e->lt.posx + 2;
		e->bs.yi = e->lt.posy - (50 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (12.5 * e->lt.coeff) - 2;
		e->bs.yf = e->bs.yi + (25 * e->lt.coeff) - 2;
	}
	ft_init_segment_m_fh(e, option);
}

void	ft_init_segment_m_sd(t_stuff *e, int option)
{
	if (option == 4)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff);
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->lt.posy - (50 * e->lt.coeff);
	}
	if (option == 5)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->lt.posy - (50 * e->lt.coeff);
	}
	if (option == 6)
	{
		e->bs.xi = e->lt.posx + (25 * e->lt.coeff) - 2;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->lt.posy - (50 * e->lt.coeff);
	}
	ft_init_segment_m_td(e, option);
}

void	ft_init_segment_m(t_stuff *e, int option)
{
	if (option == 1)
	{
		e->bs.xi = e->lt.posx;
		e->bs.xf = e->bs.xi;
		e->bs.yi = e->lt.posy;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx + 1;
		e->bs.xf = e->bs.xi;
		e->bs.yi = e->lt.posy;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + 2;
		e->bs.xf = e->bs.xi;
		e->bs.yi = e->lt.posy;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	ft_init_segment_m_sd(e, option);
}

void	m(t_stuff *e)
{
	ft_init_segment_m(e, 1);
	ft_segment_letter(e);
	ft_init_segment_m(e, 2);
	ft_segment_letter(e);
	ft_init_segment_m(e, 3);
	ft_segment_letter(e);
	ft_init_segment_m(e, 4);
	ft_segment_letter(e);
	ft_init_segment_m(e, 5);
	ft_segment_letter(e);
	ft_init_segment_m(e, 6);
	ft_segment_letter(e);
	ft_init_segment_m(e, 7);
	ft_segment_letter(e);
	ft_init_segment_m(e, 8);
	ft_segment_letter(e);
	ft_init_segment_m(e, 9);
	ft_segment_letter(e);
	ft_init_segment_m(e, 10);
	ft_segment_letter(e);
	ft_init_segment_m(e, 11);
	ft_segment_letter(e);
	ft_init_segment_m(e, 12);
	ft_segment_letter(e);
}
