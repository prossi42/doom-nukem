/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_directional_arrows.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 19:25:47 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/04 01:14:40 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	init_value_draw_arrow_fh(t_graph *e, int option)
{
	if (option == 9)
	{
		e->bs.xi = e->lt.posx + (e->bs.width / 4);
		e->bs.yi = e->lt.posy - (e->bs.height / 2);
		e->bs.xf = e->bs.xi + (e->bs.width / 2);
		e->bs.yf = e->bs.yi;
	}
	else if (option == 10)
	{
		e->bs.xi = e->bs.xf;
		e->bs.yi = e->bs.yf;
		e->bs.xf = e->bs.xi - (e->bs.width / 4);
		e->bs.yf = e->bs.yi - (e->bs.height / 4);
	}
	else
	{
		init_value_draw_arrow_fh(e, 9);
		e->bs.xi = e->bs.xf;
		e->bs.yi = e->bs.yf;
		e->bs.xf = e->bs.xi - (e->bs.width / 4);
		e->bs.yf = e->bs.yi + (e->bs.height / 4);
	}
}

void	init_value_draw_arrow_td(t_graph *e, int option)
{
	if (option == 6)
	{
		e->bs.xi = e->lt.posx + (e->bs.width * 0.75);
		e->bs.yi = e->lt.posy - (e->bs.height / 2);
		e->bs.xf = e->bs.xi - (e->bs.width / 2);
		e->bs.yf = e->bs.yi;
	}
	else if (option == 7)
	{
		e->bs.xi = e->bs.xf;
		e->bs.yi = e->bs.yf;
		e->bs.xf = e->bs.xi + (e->bs.width / 4);
		e->bs.yf = e->bs.yi + (e->bs.height / 4);
	}
	else if (option == 8)
	{
		init_value_draw_arrow_td(e, 6);
		e->bs.xi = e->bs.xf;
		e->bs.yi = e->bs.yf;
		e->bs.xf = e->bs.xi + (e->bs.width / 4);
		e->bs.yf = e->bs.yi - (e->bs.height / 4);
	}
	else
		init_value_draw_arrow_fh(e, option);
}

void	init_value_draw_arrow_sd(t_graph *e, int option)
{
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + (e->bs.width / 2);
		e->bs.yi = e->lt.posy - (e->bs.height * 0.75);
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi + (e->bs.height / 2);
	}
	else if (option == 4)
	{
		e->bs.xi = e->bs.xf;
		e->bs.yi = e->bs.yf;
		e->bs.xf = e->bs.xi - (e->bs.width / 4);
		e->bs.yf = e->bs.yi - (e->bs.height / 4);
	}
	else if (option == 5)
	{
		init_value_draw_arrow_sd(e, 3);
		e->bs.xi = e->bs.xf;
		e->bs.yi = e->bs.yf;
		e->bs.xf = e->bs.xi + (e->bs.width / 4);
		e->bs.yf = e->bs.yi - (e->bs.height / 4);
	}
	else
		init_value_draw_arrow_td(e, option);
}

void	init_value_draw_arrow(t_graph *e, int option)
{
	e->bs.color = 0x000000;
	if (option == 0)
	{
		e->bs.xi = e->lt.posx + (e->bs.width / 2);
		e->bs.yi = e->lt.posy - (e->bs.height / 4);
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (e->bs.height / 2);
	}
	else if (option == 1)
	{
		e->bs.xi = e->bs.xf;
		e->bs.yi = e->bs.yf;
		e->bs.xf = e->bs.xi - (e->bs.width / 4);
		e->bs.yf = e->bs.yi + (e->bs.height / 4);
	}
	else if (option == 2)
	{
		init_value_draw_arrow(e, 0);
		e->bs.xi = e->bs.xf;
		e->bs.yi = e->bs.yf;
		e->bs.xf = e->bs.xi + (e->bs.width / 4);
		e->bs.yf = e->bs.yi + (e->bs.height / 4);
	}
	else
		init_value_draw_arrow_sd(e, option);
}

void	draw_arrow_sd(t_graph *e, int option)
{
	if (option == 2)
	{
		init_value_draw_arrow(e, 6);
		ft_segment(e);
		init_value_draw_arrow(e, 7);
		ft_segment(e);
		init_value_draw_arrow(e, 8);
		ft_segment(e);
	}
	else
	{
		init_value_draw_arrow(e, 9);
		ft_segment(e);
		init_value_draw_arrow(e, 10);
		ft_segment(e);
		init_value_draw_arrow(e, 11);
		ft_segment(e);
	}
}

void	draw_arrow(t_graph *e, int option)
{
	if (option == 0)
	{
		init_value_draw_arrow(e, 0);
		ft_segment(e);
		init_value_draw_arrow(e, 1);
		ft_segment(e);
		init_value_draw_arrow(e, 2);
		ft_segment(e);
	}
	else if (option == 1)
	{
		init_value_draw_arrow(e, 3);
		ft_segment(e);
		init_value_draw_arrow(e, 4);
		ft_segment(e);
		init_value_draw_arrow(e, 5);
		ft_segment(e);
	}
	else
		draw_arrow_sd(e, option);

}

void	init_value_dir_arrows(t_graph *e, int option)
{
	e->bs.color = 0xFFFFFF;
	if (option == 0)
	{
		e->bs.width = 50 * e->lt.coeff;
		e->bs.height = e->bs.width;
	}
	else if (option == 1)
	{
		e->lt.posy += (e->bs.width + (10 * e->lt.coeff));
	}
	else if (option == 2)
	{
		e->lt.posx -= (e->bs.width + (10 * e->lt.coeff));
	}
	else if (option == 3)
	{
		e->lt.posx += 2 * (e->bs.width + (10 * e->lt.coeff));
	}
}

void	draw_directional_arrows(t_graph *e, int posx, int posy)
{
	e->lt.posx = posx;
	e->lt.posy = posy;
	init_value_dir_arrows(e, 0);
	full_box(e);
	draw_arrow(e, 0);
	init_value_dir_arrows(e, 1);
	full_box(e);
	draw_arrow(e, 1);
	init_value_dir_arrows(e, 2);
	full_box(e);
	draw_arrow(e, 2);
	init_value_dir_arrows(e, 3);
	full_box(e);
	draw_arrow(e, 3);
}
