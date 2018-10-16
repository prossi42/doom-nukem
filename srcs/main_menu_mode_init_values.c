/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_menu_mode_init_values.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:53:49 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/10 18:13:43 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	main_menu_mode_init_values(t_main *m, int option)
{
	int		y;
	int		i;

	y = m->graph.i.mlx->img_y / 7;
	i = 0;
	if (option == 0)
	{
		m->graph.i.img_x = m->env.scr_width;
		m->graph.i.img_y = m->env.scr_height;
	}
	else if (option == 1)
	{
		m->graph.lt.couleur = 0x800000;
		m->graph.bs.x_arc = m->graph.i.img_x / 2;
		m->graph.bs.y_arc = m->graph.i.img_y / 2;
		m->graph.bs.width = m->graph.i.img_x / 4;
		m->graph.bs.height = m->graph.i.img_y / 2;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 2)
	{
		m->graph.lt.couleur = 0x000000;
		m->graph.bs.x_arc = m->graph.i.img_x / 2;
		m->graph.bs.y_arc = y + (y / 2);
		m->graph.bs.width = (m->graph.i.img_x / 6);
		m->graph.bs.height = y / 3;
		ft_full_ellipse(&m->graph, 0, 0);
		if (m->env.main_menu_mode != 0)
		{
			while (i++ < 10)
			{
				if (i != 10)
					m->graph.lt.couleur = 0x3D2F2F;
				else
					m->graph.lt.couleur = 0x000000;
				m->graph.bs.y_arc -= 5;
				m->graph.bs.width = (m->graph.i.img_x / 6) - (i * 5);
				m->graph.bs.height = y / 3;
				ft_full_ellipse(&m->graph, 0, 0);
			}
		}
	}
	else if (option == 3)
	{
		m->graph.lt.couleur = 0x000000;
		m->graph.bs.x_arc = m->graph.i.img_x / 2;
		m->graph.bs.y_arc = (y * 2) + (y / 2);
		m->graph.bs.width = (m->graph.i.img_x / 6);
		m->graph.bs.height = y / 3;
		ft_full_ellipse(&m->graph, 0, 0);
		if (m->env.main_menu_mode != 1)
		{
			while (i++ < 10)
			{
				if (i != 10)
					m->graph.lt.couleur = 0x3D2F2F;
				else
					m->graph.lt.couleur = 0x000000;
				m->graph.bs.y_arc -= 5;
				m->graph.bs.width = (m->graph.i.img_x / 6) - (i * 5);
				m->graph.bs.height = y / 3;
				ft_full_ellipse(&m->graph, 0, 0);
			}
		}
	}
	else if (option == 4)
	{
		m->graph.lt.couleur = 0x000000;
		m->graph.bs.x_arc = m->graph.i.img_x / 2;
		m->graph.bs.y_arc = (y * 3) + (y / 2);
		m->graph.bs.width = (m->graph.i.img_x / 6);
		m->graph.bs.height = y / 3;
		ft_full_ellipse(&m->graph, 0, 0);
		if (m->env.main_menu_mode != 2)
		{
			while (i++ < 10)
			{
				if (i != 10)
					m->graph.lt.couleur = 0x3D2F2F;
				else
					m->graph.lt.couleur = 0x000000;
				m->graph.bs.y_arc -= 5;
				m->graph.bs.width = (m->graph.i.img_x / 6) - (i * 5);
				m->graph.bs.height = y / 3;
				ft_full_ellipse(&m->graph, 0, 0);
			}
		}
	}
	else if (option == 5)
	{
		m->graph.lt.couleur = 0x000000;
		m->graph.bs.x_arc = m->graph.i.img_x / 2;
		m->graph.bs.y_arc = (y * 4) + (y / 2);
		m->graph.bs.width = (m->graph.i.img_x / 6);
		m->graph.bs.height = y / 3;
		ft_full_ellipse(&m->graph, 0, 0);
		if (m->env.main_menu_mode != 3)
		{
			while (i++ < 10)
			{
				if (i != 10)
					m->graph.lt.couleur = 0x3D2F2F;
				else
					m->graph.lt.couleur = 0x000000;
				m->graph.bs.y_arc -= 5;
				m->graph.bs.width = (m->graph.i.img_x / 6) - (i * 5);
				m->graph.bs.height = y / 3;
				ft_full_ellipse(&m->graph, 0, 0);
			}
		}
	}
	else if (option == 6)
	{
		m->graph.lt.couleur = 0x000000;
		m->graph.bs.x_arc = m->graph.i.img_x / 2;
		m->graph.bs.y_arc = (y * 5) + (y / 2);
		m->graph.bs.width = (m->graph.i.img_x / 6);
		m->graph.bs.height = y / 3;
		ft_full_ellipse(&m->graph, 0, 0);
		if (m->env.main_menu_mode != 4)
		{
			while (i++ < 10)
			{
				if (i != 10)
					m->graph.lt.couleur = 0x3D2F2F;
				else
					m->graph.lt.couleur = 0x000000;
				m->graph.bs.y_arc -= 5;
				m->graph.bs.width = (m->graph.i.img_x / 6) - (i * 5);
				m->graph.bs.height = y / 3;
				ft_full_ellipse(&m->graph, 0, 0);
			}
		}
	}
}
