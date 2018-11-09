/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:53:04 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/09 16:51:18 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	editor_img_picker(t_main *m)
{
	mlx_img(&m->graph, 3, 5, m->mlx.mlx_ptr);
	if (m->editor.img_picker == 1)
		img_one_color(&m->graph.i.mlx, 0x3D2F2F);
	color_img_edges(&m->graph, 1, 0xFFFFFF);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 0, 700);
	m->editor.img_picker = 0;
}

void	editor_tools_picker(t_main *m)
{
	mlx_img(&m->graph, 3, 3, m->mlx.mlx_ptr);
	if (m->editor.tools_picker == 1)
		img_one_color(&m->graph.i.mlx, 0x3D2F2F);
	color_img_edges(&m->graph, 1, 0xFFFFFF);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 1500, 0);
	m->editor.tools_picker = 0;
}

void	editor_init_imgs(t_main *m)
{
	if (m->editor.editor == -1)
	{
		m->graph.i.img_x = 1500;
		m->graph.i.img_y = 700;
		mlx_img(&m->graph, 1, 0, m->mlx.mlx_ptr);
		editor_main_map(m);
		//
		m->graph.i.img_x = 420;
		m->graph.i.img_y = 335;
		mlx_img(&m->graph, 1, 0, m->mlx.mlx_ptr);
		editor_alt_map(m);
		//
		m->graph.i.img_x = 420;
		m->graph.i.img_y = 965;
		mlx_img(&m->graph, 1, 0, m->mlx.mlx_ptr);
		editor_tools_picker(m);
		//
		m->graph.i.img_x = 420;
		m->graph.i.img_y = 70;
		mlx_img(&m->graph, 1, 0, m->mlx.mlx_ptr);
		editor_menu(m);
		//
		m->graph.i.img_x = 1080;
		m->graph.i.img_y = 335;
		mlx_img(&m->graph, 1, 0, m->mlx.mlx_ptr);
		editor_img_picker(m);
		//
		m->graph.i.img_x = 500;
		m->graph.i.img_y = 800;
		mlx_img(&m->graph, 1, 0, m->mlx.mlx_ptr);
		editor_new_map_settings(m);
		m->graph.i.img_x = 500;
		m->graph.i.img_y = 400;
		mlx_img(&m->graph, 1, 0, m->mlx.mlx_ptr);
		editor_exit_warnings(m);
	}
	m->editor.editor = 0;
}

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
		editor_new_map_settings(m);
		editor_exit_warnings(m);
	}
}
