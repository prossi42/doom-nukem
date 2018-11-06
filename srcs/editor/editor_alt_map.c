/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_alt_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:43:36 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/06 02:17:07 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	draw_editor_alt_map_canvas(t_main *m)
{
	(void)m;
}

void	draw_editor_alt_map_floors(t_main *m)
{
	(void)m;
}

void	write_editor_alt_map_menu(t_main *m)
{
	if (m->editor.ed_alt_map.onclick == 1)
		m->editor.ed_alt_map.floors_color = 0x3D2F2F;
	else
		m->editor.ed_alt_map.floors_color = 0xFFFFFF;
	if (m->editor.ed_alt_map.onclick == 2)
		m->editor.ed_alt_map.canvas_color = 0x3D2F2F;
	else
		m->editor.ed_alt_map.canvas_color = 0xFFFFFF;
	//floors
	m->graph.lt.coeff = 0.50;
	m->graph.lt.posx = 154;
	m->graph.lt.posy = 113;
	m->graph.lt.couleur = m->editor.ed_alt_map.floors_color;
	m->graph.bs.color = m->editor.ed_alt_map.floors_color;
	awklm_string_put("Floors", &m->graph);
	//canvas
	m->graph.lt.coeff = 0.50;
	m->graph.lt.posx = 154;
	m->graph.lt.posy = 248;
	m->graph.lt.couleur = m->editor.ed_alt_map.canvas_color;
	m->graph.bs.color = m->editor.ed_alt_map.canvas_color;
	awklm_string_put("Canvas", &m->graph);
}

void	draw_editor_alt_map_menu(t_main *m)
{
	m->graph.lt.coeff = 1;
	m->graph.lt.posx = 50;
	m->graph.lt.posy = 135;
	m->graph.bs.color = 0xFFFFFF;
	m->graph.bs.width = 320;
	m->graph.bs.height = 70;
	if (m->editor.ed_alt_map.onclick == 1)
		full_box(&m->graph);
	else
		empty_box(&m->graph);
	m->graph.lt.posx = 50;
	m->graph.lt.posy = 270;
	if (m->editor.ed_alt_map.onclick == 2)
		full_box(&m->graph);
	else
		empty_box(&m->graph);
}

void	editor_alt_map(t_main *m)
{
	mlx_img(&m->graph, 3, 2, m->mlx.mlx_ptr);
	img_one_color(&m->graph.i.mlx, 0x3D2F2F);
	if (m->editor.alt_map == 1)
	{
		if (m->editor.ed_alt_map.mode == 0)
		{
			draw_editor_alt_map_menu(m);
			write_editor_alt_map_menu(m);
		}
		else if (m->editor.ed_alt_map.mode == 1)
			draw_editor_alt_map_floors(m);
		else if (m->editor.ed_alt_map.mode == 2)
			draw_editor_alt_map_canvas(m);
	}
	color_img_edges(&m->graph, 1, 0xFFFFFF);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 1080, 700);
}
