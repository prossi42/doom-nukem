/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:53:04 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/16 00:18:36 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	editor_img_picker(t_main *m)
{
	mlx_img(&m->graph, 3, 5, m->mlx.mlx_ptr);
	if (m->editor.img_picker == 1)
		img_one_color(&m->graph.i.mlx, 0x0000FF);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 0, 700);
	m->editor.img_picker = 0;
}

void	editor_tools_picker(t_main *m)
{
	mlx_img(&m->graph, 3, 3, m->mlx.mlx_ptr);
	if (m->editor.tools_picker == 1)
		img_one_color(&m->graph.i.mlx, 0x000000);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 1500, 350);
	m->editor.tools_picker = 0;
}

void	editor_alt_map(t_main *m)
{
	mlx_img(&m->graph, 3, 2, m->mlx.mlx_ptr);
	if (m->editor.alt_map == 1)
		img_one_color(&m->graph.i.mlx, 0xFF0000);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 1500, 0);
	m->editor.alt_map = 0;
}

void	editor_main_map(t_main *m)
{
	mlx_img(&m->graph, 3, 1, m->mlx.mlx_ptr);
	if (m->editor.main_map == 1)
		img_one_color(&m->graph.i.mlx, 0xFFFFFF);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 0, 0);
	m->editor.main_map = 0;
}

void	editor_init_imgs(t_main *m)
{
	if (m->editor.editor == -1)
	{
		m->graph.i.img_x = 1500;
		m->graph.i.img_y = 700;
		mlx_img(&m->graph, 1, 0, m->mlx.mlx_ptr);
		editor_main_map(m);
		m->graph.i.img_x = 420;
		m->graph.i.img_y = 350;
		mlx_img(&m->graph, 1, 0, m->mlx.mlx_ptr);
		editor_alt_map(m);
		m->graph.i.img_x = 420;
		m->graph.i.img_y = 615;
		mlx_img(&m->graph, 1, 0, m->mlx.mlx_ptr);
		editor_tools_picker(m);
		m->graph.i.img_x = 420;
		m->graph.i.img_y = 70;
		mlx_img(&m->graph, 1, 0, m->mlx.mlx_ptr);
		editor_menu(m);
		m->graph.i.img_x = 1500;
		m->graph.i.img_y = 340;
		mlx_img(&m->graph, 1, 0, m->mlx.mlx_ptr);
		editor_img_picker(m);
	}
	m->editor.editor = 0;
}

// void	editor_refresh_img(t_main *m, int option)

void	editor(t_main *m)
{
	if (m->editor.editor == -1)
		editor_init_imgs(m);
	else
	{
		editor_main_map(m);
		editor_alt_map(m);
		editor_tools_picker(m);
		editor_menu(m);
		editor_img_picker(m);
	}
}
