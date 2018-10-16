/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_menu_background_init_values.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:22:01 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/12 08:59:37 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	main_menu_background_init_values(t_main *m, int option)
{
	if (option == 0)
	{
		m->graph.lt.couleur = 0x800000;
		m->graph.bs.x_arc = 0;
		m->graph.bs.y_arc = 0;
		m->graph.bs.width = m->graph.i.img_x / 4;
		m->graph.bs.height = m->graph.i.img_y / 2;
		ft_full_ellipse(&m->graph, 0, 0);
		m->graph.lt.couleur = 0x800000;
		m->graph.bs.x_arc = m->graph.i.img_x;
		m->graph.bs.y_arc = m->graph.i.img_y;
		m->graph.bs.width = m->graph.i.img_x / 4;
		m->graph.bs.height = m->graph.i.img_y / 2;
		ft_full_ellipse(&m->graph, 0, 0);
		m->graph.lt.couleur = 0x800000;
		m->graph.bs.x_arc = 0;
		m->graph.bs.y_arc = m->graph.i.img_y;
		m->graph.bs.width = m->graph.i.img_x / 4;
		m->graph.bs.height = m->graph.i.img_y / 2;
		ft_full_ellipse(&m->graph, 0, 0);
		m->graph.lt.couleur = 0x800000;
		m->graph.bs.x_arc = m->graph.i.img_x;
		m->graph.bs.y_arc = 0;
		m->graph.bs.width = m->graph.i.img_x / 4;
		m->graph.bs.height = m->graph.i.img_y / 2;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 1)
	{
		m->graph.lt.couleur = 0x3D2F2F;
		m->graph.bs.x_arc = 0;
		m->graph.bs.y_arc = 0;
		m->graph.bs.width = m->graph.i.img_x / 6;
		m->graph.bs.height = m->graph.i.img_y / 3;
		ft_full_ellipse(&m->graph, 0, 0);
		m->graph.lt.couleur = 0x3D2F2F;
		m->graph.bs.x_arc = m->graph.i.img_x;
		m->graph.bs.y_arc = m->graph.i.img_y;
		m->graph.bs.width = m->graph.i.img_x / 6;
		m->graph.bs.height = m->graph.i.img_y / 3;
		ft_full_ellipse(&m->graph, 0, 0);
		m->graph.lt.couleur = 0x3D2F2F;
		m->graph.bs.x_arc = 0;
		m->graph.bs.y_arc = m->graph.i.img_y;
		m->graph.bs.width = m->graph.i.img_x / 6;
		m->graph.bs.height = m->graph.i.img_y / 3;
		ft_full_ellipse(&m->graph, 0, 0);
		m->graph.lt.couleur = 0x3D2F2F;
		m->graph.bs.x_arc = m->graph.i.img_x;
		m->graph.bs.y_arc = 0;
		m->graph.bs.width = m->graph.i.img_x / 6;
		m->graph.bs.height = m->graph.i.img_y / 3;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 2)
	{
		m->graph.lt.couleur = 0x000000;
		m->graph.bs.x_arc = 0;
		m->graph.bs.y_arc = 0;
		m->graph.bs.width = m->graph.i.img_x / 8;
		m->graph.bs.height = m->graph.i.img_y / 4;
		ft_full_ellipse(&m->graph, 0, 0);
		m->graph.lt.couleur = 0x000000;
		m->graph.bs.x_arc = m->graph.i.img_x;
		m->graph.bs.y_arc = m->graph.i.img_y;
		m->graph.bs.width = m->graph.i.img_x / 8;
		m->graph.bs.height = m->graph.i.img_y / 4;
		ft_full_ellipse(&m->graph, 0, 0);
		m->graph.lt.couleur = 0x000000;
		m->graph.bs.x_arc = 0;
		m->graph.bs.y_arc = m->graph.i.img_y;
		m->graph.bs.width = m->graph.i.img_x / 8;
		m->graph.bs.height = m->graph.i.img_y / 4;
		ft_full_ellipse(&m->graph, 0, 0);
		m->graph.lt.couleur = 0x000000;
		m->graph.bs.x_arc = m->graph.i.img_x;
		m->graph.bs.y_arc = 0;
		m->graph.bs.width = m->graph.i.img_x / 8;
		m->graph.bs.height = m->graph.i.img_y / 4;
		ft_full_ellipse(&m->graph, 0, 0);
	}
}
