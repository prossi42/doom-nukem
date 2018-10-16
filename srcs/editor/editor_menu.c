/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_menu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 22:57:55 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/16 16:10:02 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	editor_menu_init_values(t_main *m, int option)
{
	if (option == 0)
		m->graph.lt.coeff = 1;
	else if (option == 1)
	{
		m->graph.bs.width = m->graph.i.mlx->img_x - 1;
		m->graph.bs.height = m->graph.i.mlx->img_y - 1;
		m->graph.lt.posx = 0;
		m->graph.lt.posy = m->graph.i.mlx->img_y - 1;
		m->graph.bs.color = 0xFFFFFF;
	}
	else if (option == 2)
	{
		m->graph.bs.width = 59;
		m->graph.bs.height = m->graph.i.mlx->img_y - 1;
		m->graph.lt.posx = 0;
		m->graph.lt.posy = m->graph.i.mlx->img_y - 1;
		m->graph.bs.color = 0xFFFFFF;
	}
	else if (option == 3)
	{
		m->graph.bs.width = 59;
		m->graph.bs.height = m->graph.i.mlx->img_y - 1;
		m->graph.lt.posx = 60;
		m->graph.lt.posy = m->graph.i.mlx->img_y - 1;
		m->graph.bs.color = 0xFFFFFF;
	}
	else if (option == 4)
	{
		m->graph.bs.width = 60;
		m->graph.bs.height = m->graph.i.mlx->img_y - 1;
		m->graph.lt.posx = 120;
		m->graph.lt.posy = m->graph.i.mlx->img_y - 1;
		m->graph.bs.color = 0xFFFFFF;
	}
	else if (option == 5)
	{
		m->graph.bs.width = 60;
		m->graph.bs.height = m->graph.i.mlx->img_y - 1;
		m->graph.lt.posx = 180;
		m->graph.lt.posy = m->graph.i.mlx->img_y - 1;
		m->graph.bs.color = 0xFFFFFF;
	}
	else if (option == 6)
	{
		if (m->editor.ed_menu.onclick == 0)
			m->editor.ed_menu.new_file_color = 0xFFFFFF;
		else if (m->editor.ed_menu.onclick == 1)
			m->editor.ed_menu.new_file_color = 0x3D2F2F;
	}
	else if (option == 7)
	{
		m->graph.bs.width = 60;
		m->graph.bs.height = m->graph.i.mlx->img_y - 1;
		m->graph.lt.posx = 0;
		m->graph.lt.posy = m->graph.i.mlx->img_y - 1;
		m->graph.bs.color = 0xFFFFFF;
	}
	else if (option == 8)
	{
		if (m->editor.ed_menu.onclick == 0)
			m->editor.ed_menu.del_file_color = 0xFFFFFF;
		else if (m->editor.ed_menu.onclick == 2)
			m->editor.ed_menu.del_file_color = 0x3D2F2F;
	}
	else if (option == 9)
	{
		m->graph.bs.width = 60 - 1;
		m->graph.bs.height = m->graph.i.mlx->img_y - 1;
		m->graph.lt.posx = 60;
		m->graph.lt.posy = m->graph.i.mlx->img_y - 1;
		m->graph.bs.color = 0xFFFFFF;
	}
	else if (option == 10)
	{
		m->graph.lt.coeff = 0.8;
		if (m->editor.ed_menu.onclick == 0)
			m->editor.ed_menu.save_file_color = 0xFFFFFF;
		else if (m->editor.ed_menu.onclick == 3)
			m->editor.ed_menu.save_file_color = 0x3D2F2F;
	}
	else if (option == 11)
	{
		m->graph.lt.coeff = 1;
		m->graph.bs.width = 60;
		m->graph.bs.height = m->graph.i.mlx->img_y - 1;
		m->graph.lt.posx = 119;
		m->graph.lt.posy = m->graph.i.mlx->img_y - 1;
		m->graph.bs.color = 0xFFFFFF;
	}
	else if (option == 12)
	{
		m->graph.lt.coeff = 0.8;
		if (m->editor.ed_menu.onclick == 0)
			m->editor.ed_menu.load_file_color = 0xFFFFFF;
		else if (m->editor.ed_menu.onclick == 4)
			m->editor.ed_menu.load_file_color = 0x3D2F2F;
	}
	else if (option == 13)
	{
		m->graph.lt.coeff = 1;
		m->graph.bs.width = 60;
		m->graph.bs.height = m->graph.i.mlx->img_y - 1;
		m->graph.lt.posx = 179;
		m->graph.lt.posy = m->graph.i.mlx->img_y - 1;
		m->graph.bs.color = 0xFFFFFF;
	}
}

void	draw_editor_menu(t_main *m)
{
	editor_menu_init_values(m, 0);
	img_one_color(&m->graph.i.mlx, 0x3D2F2F);
	editor_menu_init_values(m, 1);
	empty_box(&m->graph);
	if (m->editor.ed_menu.onclick != 0)
	{
		if (m->editor.ed_menu.onclick == 1)
			editor_menu_init_values(m, 2);
		else if (m->editor.ed_menu.onclick == 2)
			editor_menu_init_values(m, 3);
		else if (m->editor.ed_menu.onclick == 3)
			editor_menu_init_values(m, 4);
		else if (m->editor.ed_menu.onclick == 4)
			editor_menu_init_values(m, 5);
		full_box(&m->graph);
	}
	editor_menu_init_values(m, 6);
	draw_new_file(&m->graph, 10, m->graph.i.mlx->img_y - 10, m->editor.ed_menu.new_file_color);
	editor_menu_init_values(m, 7);
	empty_box(&m->graph);
	editor_menu_init_values(m, 8);
	draw_del_file(&m->graph, 70, m->graph.i.mlx->img_y - 10, m->editor.ed_menu.del_file_color);
	editor_menu_init_values(m, 9);
	empty_box(&m->graph);
	editor_menu_init_values(m, 10);
	draw_save_logo(&m->graph, 132, m->graph.i.mlx->img_y - 10, m->editor.ed_menu.save_file_color);
	editor_menu_init_values(m, 11);
	empty_box(&m->graph);
	editor_menu_init_values(m, 12);
	draw_load_logo(&m->graph, 192, m->graph.i.mlx->img_y - 10, m->editor.ed_menu.load_file_color);
	editor_menu_init_values(m, 13);
	empty_box(&m->graph);
}

void	editor_menu(t_main *m)
{
	mlx_img(&m->graph, 3, 4, m->mlx.mlx_ptr);
	if (m->editor.menu == 1)
		draw_editor_menu(m);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 1500, 965);
	m->editor.menu = 0;
}
