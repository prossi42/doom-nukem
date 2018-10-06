/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize_mode_init_values.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 22:44:33 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/05 19:14:49 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	resize_mode_init_values_sd(t_main *m, int option)
{
	if (option == 2)
	{
		m->graph.lt.couleur = 0xFF0000;
		m->graph.bs.color = 0xFF0000;
		if (m->env.lang_value == 0)
			m->graph.lt.posx = m->graph.i.mlx->img_x / 2 - 325;
		else
			m->graph.lt.posx = m->graph.i.mlx->img_x / 2 - 520;
		m->graph.lt.posy = m->graph.i.mlx->img_y / 3;
		m->graph.lt.coeff = 0.40;
		m->graph.lt.space = 40;
	}
	else if (option == 3)
	{
		if (m->env.lang_value == 0)
			m->graph.lt.posx = m->graph.i.mlx->img_x / 2 - 210;
		else
			m->graph.lt.posx = m->graph.i.mlx->img_x / 2 - 400;
		m->graph.lt.posy = (m->graph.i.mlx->img_y / 3) * 2;
	}
}

void	resize_mode_init_values(t_main *m, int option)
{
	if (option == 0)
	{
		m->graph.i.img_x = m->env.scr_width;
		m->graph.i.img_y = m->env.scr_height;
	}
	else if (option == 1)
	{
		m->graph.lt.coeff = 1;
		if (m->env.lang_value == 0)
		{
			m->graph.lt.posx = m->graph.i.mlx->img_x / 5;
			m->graph.lt.posy = m->graph.i.mlx->img_y - (m->graph.i.mlx->img_y / 4);
			m->graph.bs.width = m->graph.i.mlx->img_x / 1.6;
			m->graph.bs.height = m->graph.i.mlx->img_y / 2;
		}
		else
		{
			m->graph.lt.posx = m->graph.i.mlx->img_x / 12;
			m->graph.lt.posy = m->graph.i.mlx->img_y - (m->graph.i.mlx->img_y / 4);
			m->graph.bs.width = m->graph.i.mlx->img_x / 1.22;
			m->graph.bs.height = m->graph.i.mlx->img_y / 2;
		}
	}
	else
		resize_mode_init_values_sd(m, option);
}
