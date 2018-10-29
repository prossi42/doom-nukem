/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_new_map_settings.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 02:12:45 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/29 08:06:05 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	editor_new_map_settings_init_values_french(t_main *m, int option)
{
	if (option == 0)
	{
		m->graph.lt.coeff = 0.35;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 50;
		m->graph.lt.posy = 50;
		awklm_string_put(m->env.lang.editor_new_map_settings, &m->graph);
	}
	else if (option == 1)
	{
		m->graph.bs.xi = 0;
		m->graph.bs.yi = 80;
		m->graph.bs.xf = m->graph.i.mlx->img_x;
		m->graph.bs.yf = m->graph.bs.yi;
		ft_segment(&m->graph);
	}
}

void	editor_new_map_settings_init_values_english(t_main *m, int option)
{
	if (option == 0)
	{
		// new map settings
		m->graph.lt.coeff = 0.64;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 50;
		m->graph.lt.posy = 50;
		awklm_string_put(m->env.lang.editor_new_map_settings, &m->graph);
	}
	else if (option == 1)
	{
		m->graph.bs.xi = 0;
		m->graph.bs.yi = 70;
		m->graph.bs.xf = m->graph.i.mlx->img_x;
		m->graph.bs.yf = m->graph.bs.yi;
		ft_segment(&m->graph);
	}
}

void	draw_editor_new_map_settings(t_main *m)
{
	img_one_color(&m->graph.i.mlx, 0x3D2F2F);
	color_img_edges(&m->graph, 1, 0xFFFFFF);
	if (m->env.language_mode == 0)
	{
		editor_new_map_settings_init_values_english(m, 0);
		editor_new_map_settings_init_values_english(m, 1);

	}
	else
	{
		editor_new_map_settings_init_values_french(m, 0);
		editor_new_map_settings_init_values_french(m, 1);
	}
}

void	editor_new_map_settings(t_main *m)
{
	if (m->editor.new_map_settings == 1)
	{
		mlx_img(&m->graph, 3, 6, m->mlx.mlx_ptr);
		draw_editor_new_map_settings(m);
		mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
			m->graph.i.mlx->img, 710, 100);
	}
}
