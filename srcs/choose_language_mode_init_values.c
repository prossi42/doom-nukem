/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_language_mode_init_values.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 22:50:55 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/10 01:19:04 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	choose_language_mode_init_values_sd(t_main *m, int option)
{
	if (option == 2)
	{
		m->graph.bs.color = 0xFF0000;
		m->graph.lt.posx = (m->graph.i.mlx->img_x / 2.5);
		m->graph.lt.posy = (m->graph.i.mlx->img_y / 5) * 3;
		m->graph.bs.width = (m->graph.i.mlx->img_x / 2.5) * 0.5;
		m->graph.bs.height = m->graph.i.mlx->img_y / 5;
		m->graph.lt.coeff = 1;
	}
	else if (option == 3)
	{
		m->graph.bs.color = 0xFF0000;
		m->graph.lt.posx = (m->graph.i.mlx->img_x / 2.5);
		m->graph.lt.posy = (m->graph.i.mlx->img_y / 5) * 4.5;
		m->graph.bs.width = (m->graph.i.mlx->img_x / 2.5) * 0.5;
		m->graph.bs.height = m->graph.i.mlx->img_y / 5;
		m->graph.lt.coeff = 1;
	}
	else if (option == 4)
	{
		if (m->env.lang.select_lang == 0)
		{
			m->graph.bs.color = 0x000000;
			m->graph.lt.couleur = 0x000000;
		}
		else
		{
			m->graph.bs.color = 0xFF0000;
			m->graph.lt.couleur = 0xFF0000;
		}
		m->graph.lt.coeff = 0.80;
		m->graph.lt.space = 40;
		m->graph.lt.posx = (m->graph.i.mlx->img_x / 2.25);
		m->graph.lt.posy = (m->graph.i.mlx->img_y / 5) * 2.6;
	}
	else if (option == 5)
	{
		if (m->env.lang.select_lang == 0)
		{
			m->graph.bs.color = 0xFF0000;
			m->graph.lt.couleur = 0xFF0000;
		}
		else
		{
			m->graph.bs.color = 0x000000;
			m->graph.lt.couleur = 0x000000;
		}
		m->graph.lt.coeff = 0.8;
		m->graph.lt.space = 40;
		m->graph.lt.posx = (m->graph.i.mlx->img_x / 2.30);
		m->graph.lt.posy = (m->graph.i.mlx->img_y / 5) * 4.10;
	}
}

void	choose_language_mode_init_values(t_main *m, int option)
{
	if (option == 0)
	{
		m->graph.i.img_x = m->env.scr_width;
		m->graph.i.img_y = m->env.scr_height;
	}
	else if (option == 1)
	{
		m->graph.lt.couleur = 0xFF0000;
		m->graph.bs.color = 0xFF0000;
		m->graph.lt.posx = m->graph.i.mlx->img_x / 3.05;
		m->graph.lt.posy = 200;
		m->graph.lt.coeff = 1;
		m->graph.lt.space = 40;
	}
	else
		choose_language_mode_init_values_sd(m, option);
}
