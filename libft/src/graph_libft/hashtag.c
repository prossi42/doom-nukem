/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 16:02:25 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 13:11:15 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_value_hashtag_fh(t_graph *e, int option)
{
	if (option == 9)
	{
		e->bs.xi = e->lt.posx + (4 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (31.25 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 10)
	{
		e->bs.xi = e->lt.posx + (4 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (31.25 * e->lt.coeff) - 1;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 11)
	{
		e->bs.xi = e->lt.posx + (4 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (31.25 * e->lt.coeff) + 1;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
}

void	ft_init_value_hashtag_td(t_graph *e, int option)
{
	if (option == 6)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (18.75 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 7)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (18.75 * e->lt.coeff) - 1;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 8)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (18.75 * e->lt.coeff) + 1;
		e->bs.xf = e->bs.xi + (25 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	ft_init_value_hashtag_fh(e, option);
}

void	ft_init_value_hashtag_sd(t_graph *e, int option)
{
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + (18.75 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (25 * e->lt.coeff);
	}
	if (option == 4)
	{
		e->bs.xi = e->lt.posx + (18.75 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (25 * e->lt.coeff);
	}
	if (option == 5)
	{
		e->bs.xi = e->lt.posx + (18.75 * e->lt.coeff) + 1;
		e->bs.yi = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (25 * e->lt.coeff);
	}
	ft_init_value_hashtag_td(e, option);
}

void	ft_init_value_hashtag(t_graph *e, int option)
{
	if (option == 0)
	{
		e->bs.xi = e->lt.posx + (6.25 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (25 * e->lt.coeff);
	}
	if (option == 1)
	{
		e->bs.xi = e->lt.posx + (6.25 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (25 * e->lt.coeff);
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx + (6.25 * e->lt.coeff) + 1;
		e->bs.yi = e->lt.posy - (12.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (25 * e->lt.coeff);
	}
	ft_init_value_hashtag_sd(e, option);
}

void	hashtag(t_graph *e)
{
	ft_init_value_hashtag(e, 0);
	ft_segment(e);
	ft_init_value_hashtag(e, 1);
	ft_segment(e);
	ft_init_value_hashtag(e, 2);
	ft_segment(e);
	ft_init_value_hashtag(e, 3);
	ft_segment(e);
	ft_init_value_hashtag(e, 4);
	ft_segment(e);
	ft_init_value_hashtag(e, 5);
	ft_segment(e);
	ft_init_value_hashtag(e, 6);
	ft_segment(e);
	ft_init_value_hashtag(e, 7);
	ft_segment(e);
	ft_init_value_hashtag(e, 8);
	ft_segment(e);
	ft_init_value_hashtag(e, 9);
	ft_segment(e);
	ft_init_value_hashtag(e, 10);
	ft_segment(e);
	ft_init_value_hashtag(e, 11);
	ft_segment(e);
}
