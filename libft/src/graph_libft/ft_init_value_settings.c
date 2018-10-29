/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_value_settings.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 13:55:15 by prossi            #+#    #+#             */
/*   Updated: 2018/10/17 18:41:46 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_init_value_settings_fih(t_graph *e, int option, int background_color)
{
	if (option == 12)
	{
		e->bs.x_arc = e->lt.posx + (10 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (10 * e->lt.coeff);
		e->bs.ray_arc = 7.5 * e->lt.coeff;
	}
	if (option == 13)
	{
		e->lt.couleur = background_color;
		e->bs.x_arc = e->lt.posx + (10 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (10 * e->lt.coeff);
		e->bs.ray_arc = 5 * e->lt.coeff;
	}
}

void	ft_init_value_settings_fh(t_graph *e, int option, int background_color)
{
	if (option == 9)
	{
		e->bs.xi = e->lt.posx + (2.5 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (20 * e->lt.coeff) + (2.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (20 * e->lt.coeff) - (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (20 * e->lt.coeff) - (5 * e->lt.coeff);
	}
	if (option == 10)
	{
		e->bs.xi = e->lt.posx + (2.5 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (20 * e->lt.coeff) + 1 + (2.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (20 * e->lt.coeff) - 1 - (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (20 * e->lt.coeff) - 1 - (5 * e->lt.coeff);
	}
	if (option == 11)
	{
		e->bs.xi = e->lt.posx + 1 + (2.5 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (20 * e->lt.coeff) + (2.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (20 * e->lt.coeff) - 1 - (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (20 * e->lt.coeff) - 1 - (5 * e->lt.coeff);
	}
	ft_init_value_settings_fih(e, option, background_color);
}

void	ft_init_value_settings_td(t_graph *e, int option, int background_color)
{
	if (option == 6)
	{
		e->bs.xi = e->lt.posx + (2.5 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (2.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (20 * e->lt.coeff) - (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (20 * e->lt.coeff) + (5 * e->lt.coeff);
	}
	if (option == 7)
	{
		e->bs.xi = e->lt.posx + (2.5 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (2.5 * e->lt.coeff) - 1;
		e->bs.xf = e->bs.xi + (20 * e->lt.coeff) - 1 - (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (20 * e->lt.coeff) + 1 + (5 * e->lt.coeff);
	}
	if (option == 8)
	{
		e->bs.xi = e->lt.posx + (2.5 * e->lt.coeff) + 1;
		e->bs.yi = e->lt.posy - (2.5 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (20 * e->lt.coeff) - 1 - (5 * e->lt.coeff);
		e->bs.yf = e->bs.yi - (20 * e->lt.coeff) + 1 + (5 * e->lt.coeff);
	}
	ft_init_value_settings_fh(e, option, background_color);
}

void	ft_init_value_settings_sd(t_graph *e, int option, int background_color)
{
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + (10 * e->lt.coeff);
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (20 * e->lt.coeff);
	}
	if (option == 4)
	{
		e->bs.xi = e->lt.posx + (10 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (20 * e->lt.coeff);
	}
	if (option == 5)
	{
		e->bs.xi = e->lt.posx + (10 * e->lt.coeff) + 1;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (20 * e->lt.coeff);
	}
	ft_init_value_settings_td(e, option, background_color);
}

void	ft_init_value_settings(t_graph *e, int option, int background_color)
{
	if (option == 0)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (10 * e->lt.coeff);
		e->bs.xf = e->bs.xi + (20 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 1)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (10 * e->lt.coeff) - 1;
		e->bs.xf = e->bs.xi + (20 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	if (option == 2)
	{
		e->bs.xi = e->lt.posx;
		e->bs.yi = e->lt.posy - (10 * e->lt.coeff) + 1;
		e->bs.xf = e->bs.xi + (20 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	ft_init_value_settings_sd(e, option, background_color);
}
