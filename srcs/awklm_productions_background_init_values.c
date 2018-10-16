/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awklm_productions_background_init_values.c         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:02:14 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/09 09:40:05 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	awklm_productions_background_init_values_sd(t_main *m, int option)
{
	if (option == 3)
	{
		m->graph.lt.couleur = 0xD3D3D3;
		m->graph.bs.width = m->graph.i.img_x / 3;
		m->graph.bs.height = m->graph.i.img_y / 2.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 4)
	{
		m->graph.lt.couleur = 0xCECECE;
		m->graph.bs.width = m->graph.i.img_x / 3;
		m->graph.bs.height = m->graph.i.img_y / 3;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 5)
	{
		m->graph.lt.couleur = 0xC0C0C0;
		m->graph.bs.width = m->graph.i.img_x / 3.5;
		m->graph.bs.height = m->graph.i.img_y / 3;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 6)
	{
		m->graph.lt.couleur = 0xA9A9A9;
		m->graph.bs.width = m->graph.i.img_x / 3.5;
		m->graph.bs.height = m->graph.i.img_y / 3.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 7)
	{
		m->graph.lt.couleur = 0x9E9E9E;
		m->graph.bs.width = m->graph.i.img_x / 4;
		m->graph.bs.height = m->graph.i.img_y / 3.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 8)
	{
		m->graph.lt.couleur = 0x8F8F8F;
		m->graph.bs.width = m->graph.i.img_x / 4;
		m->graph.bs.height = m->graph.i.img_y / 4;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 9)
	{
		m->graph.lt.couleur = 0x808080;
		m->graph.bs.width = m->graph.i.img_x / 4.5;
		m->graph.bs.height = m->graph.i.img_y / 4;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 10)
	{
		m->graph.lt.couleur = 0x798081;
		m->graph.bs.width = m->graph.i.img_x / 4.5;
		m->graph.bs.height = m->graph.i.img_y / 4.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 10)
	{
		m->graph.lt.couleur = 0x696969;
		m->graph.bs.width = m->graph.i.img_x / 5;
		m->graph.bs.height = m->graph.i.img_y / 4.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 11)
	{
		m->graph.lt.couleur = 0x778899;
		m->graph.bs.width = m->graph.i.img_x / 5;
		m->graph.bs.height = m->graph.i.img_y / 5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 12)
	{
		m->graph.lt.couleur = 0x708090;
		m->graph.bs.width = m->graph.i.img_x / 5.5;
		m->graph.bs.height = m->graph.i.img_y / 5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 13)
	{
		m->graph.lt.couleur = 0x5A5E6B;
		m->graph.bs.width = m->graph.i.img_x / 5.5;
		m->graph.bs.height = m->graph.i.img_y / 5.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 13)
	{
		m->graph.lt.couleur = 0x2F4F4F;
		m->graph.bs.width = m->graph.i.img_x / 6;
		m->graph.bs.height = m->graph.i.img_y / 5.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 14)
	{
		m->graph.lt.couleur = 0x303030;
		m->graph.bs.width = m->graph.i.img_x / 6;
		m->graph.bs.height = m->graph.i.img_y / 6;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 15)
	{
		m->graph.lt.couleur = 0x2D241E;
		m->graph.bs.width = m->graph.i.img_x / 6.5;
		m->graph.bs.height = m->graph.i.img_y / 6;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 16)
	{
		m->graph.lt.couleur = 0x130E0A;
		m->graph.bs.width = m->graph.i.img_x / 6.5;
		m->graph.bs.height = m->graph.i.img_y / 6.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 17)
	{
		m->graph.lt.couleur = 0x000010;
		m->graph.bs.width = m->graph.i.img_x / 7;
		m->graph.bs.height = m->graph.i.img_y / 6.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 18)
	{
		m->graph.lt.couleur = 0x000000;
		m->graph.bs.width = m->graph.i.img_x / 7;
		m->graph.bs.height = m->graph.i.img_y / 7;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 19)
	{
		m->graph.lt.couleur = 0x000010;
		m->graph.bs.width = m->graph.i.img_x / 7.5;
		m->graph.bs.height = m->graph.i.img_y / 7;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 20)
	{
		m->graph.lt.couleur = 0x130E0A;
		m->graph.bs.width = m->graph.i.img_x / 7.5;
		m->graph.bs.height = m->graph.i.img_y / 7.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 21)
	{
		m->graph.lt.couleur = 0x2D241E;
		m->graph.bs.width = m->graph.i.img_x / 8;
		m->graph.bs.height = m->graph.i.img_y / 7.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 22)
	{
		m->graph.lt.couleur = 0x303030;
		m->graph.bs.width = m->graph.i.img_x / 8;
		m->graph.bs.height = m->graph.i.img_y / 8;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 23)
	{
		m->graph.lt.couleur = 0x2F4F4F;
		m->graph.bs.width = m->graph.i.img_x / 8.5;
		m->graph.bs.height = m->graph.i.img_y / 8;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 24)
	{
		m->graph.lt.couleur = 0x5A5E6B;
		m->graph.bs.width = m->graph.i.img_x / 8.5;
		m->graph.bs.height = m->graph.i.img_y / 8.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 25)
	{
		m->graph.lt.couleur = 0x708090;
		m->graph.bs.width = m->graph.i.img_x / 9;
		m->graph.bs.height = m->graph.i.img_y / 8.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 26)
	{
		m->graph.lt.couleur = 0x778899;
		m->graph.bs.width = m->graph.i.img_x / 9;
		m->graph.bs.height = m->graph.i.img_y / 9;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 27)
	{
		m->graph.lt.couleur = 0x696969;
		m->graph.bs.width = m->graph.i.img_x / 9.5;
		m->graph.bs.height = m->graph.i.img_y / 9;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 28)
	{
		m->graph.lt.couleur = 0x798081;
		m->graph.bs.width = m->graph.i.img_x / 9.5;
		m->graph.bs.height = m->graph.i.img_y / 9.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 29)
	{
		m->graph.lt.couleur = 0x808080;
		m->graph.bs.width = m->graph.i.img_x / 10;
		m->graph.bs.height = m->graph.i.img_y / 9.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 30)
	{
		m->graph.lt.couleur = 0x8F8F8F;
		m->graph.bs.width = m->graph.i.img_x / 10;
		m->graph.bs.height = m->graph.i.img_y / 10;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 31)
	{
		m->graph.lt.couleur = 0x9E9E9E;
		m->graph.bs.width = m->graph.i.img_x / 10.5;
		m->graph.bs.height = m->graph.i.img_y / 10;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 32)
	{
		m->graph.lt.couleur = 0xA9A9A9;
		m->graph.bs.width = m->graph.i.img_x / 10.5;
		m->graph.bs.height = m->graph.i.img_y / 10.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 33)
	{
		m->graph.lt.couleur = 0xC0C0C0;
		m->graph.bs.width = m->graph.i.img_x / 11;
		m->graph.bs.height = m->graph.i.img_y / 10.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 34)
	{
		m->graph.lt.couleur = 0xCECECE;
		m->graph.bs.width = m->graph.i.img_x / 11;
		m->graph.bs.height = m->graph.i.img_y / 11;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 35)
	{
		m->graph.lt.couleur = 0xD3D3D3;
		m->graph.bs.width = m->graph.i.img_x / 11.5;
		m->graph.bs.height = m->graph.i.img_y / 11;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 36)
	{
		m->graph.lt.couleur = 0xDCDCDC;
		m->graph.bs.width = m->graph.i.img_x / 11.5;
		m->graph.bs.height = m->graph.i.img_y / 11.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 37)
	{
		m->graph.lt.couleur = 0xEFEFEF;
		m->graph.bs.width = m->graph.i.img_x / 12;
		m->graph.bs.height = m->graph.i.img_y / 11.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 38)
	{
		m->graph.lt.couleur = 0xF5F5F5;
		m->graph.bs.width = m->graph.i.img_x / 12;
		m->graph.bs.height = m->graph.i.img_y / 12;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 39)
	{
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.width = m->graph.i.img_x / 12.5;
		m->graph.bs.height = m->graph.i.img_y / 12;
		ft_full_ellipse(&m->graph, 0, 0);
	}
}

void	awklm_productions_background_init_values(t_main *m, int option)
{
	if (option > 2)
		awklm_productions_background_init_values_sd(m, option);
 	else if (option == 0)
	{
		m->graph.lt.couleur = 0xF5F5F5;
		m->graph.bs.x_arc = m->graph.i.img_x / 2;
		m->graph.bs.y_arc = m->graph.i.img_y / 2;
		m->graph.bs.width = m->graph.i.img_x / 2;
		m->graph.bs.height = m->graph.i.img_y / 2;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 1)
	{
		m->graph.lt.couleur = 0xEFEFEF;
		m->graph.bs.width = m->graph.i.img_x / 2.5;
		m->graph.bs.height = m->graph.i.img_y / 2;
		ft_full_ellipse(&m->graph, 0, 0);
	}
	else if (option == 2)
	{
		m->graph.lt.couleur = 0xDCDCDC;
		m->graph.bs.width = m->graph.i.img_x / 2.5;
		m->graph.bs.height = m->graph.i.img_y / 2.5;
		ft_full_ellipse(&m->graph, 0, 0);
	}
}
