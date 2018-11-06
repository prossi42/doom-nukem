/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_new_map_settings.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 02:12:45 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/02 14:26:15 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	editor_new_map_settings_init_values_french(t_main *m, int option)
{
	int		i;

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
		i = 70;
		while (i < 75)
		{
			m->graph.bs.xi = 0;
			m->graph.bs.yi = i;
			m->graph.bs.xf = m->graph.i.mlx->img_x;
			m->graph.bs.yf = m->graph.bs.yi;
			ft_segment(&m->graph);
			i++;
		}
	}
	else if (option == 2)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 224;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_new_map_name, &m->graph);
	}
	else if (option == 4)
	{
		m->graph.lt.posx = 125;
		m->graph.lt.posy = 230;
		m->graph.bs.color = m->editor.ed_n_map.name_background_color;
		m->graph.bs.width = 250;
		m->graph.bs.height = 50;
		m->graph.lt.coeff = 1;
		full_box(&m->graph);
		m->graph.bs.color = 0xFFFFFF;
		empty_box(&m->graph);
	}
	else if (option == 5)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 183;
		m->graph.lt.posy = 300;
		awklm_string_put(m->env.lang.editor_new_map_width, &m->graph);
	}
	else if (option == 7)
	{
		m->graph.lt.posx = 125;
		m->graph.lt.posy = 380;
		m->graph.bs.color = m->editor.ed_n_map.width_background_color;
		m->graph.bs.width = 250;
		m->graph.bs.height = 50;
		m->graph.lt.coeff = 1;
		full_box(&m->graph);
		m->graph.bs.color = 0xFFFFFF;
		empty_box(&m->graph);
	}
	else if (option == 8)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 174;
		m->graph.lt.posy = 450;
		awklm_string_put(m->env.lang.editor_new_map_height, &m->graph);
	}
	else if (option == 10)
	{
		m->graph.lt.posx = 125;
		m->graph.lt.posy = 530;
		m->graph.bs.color = m->editor.ed_n_map.height_background_color;
		m->graph.bs.width = 250;
		m->graph.bs.height = 50;
		m->graph.lt.coeff = 1;
		full_box(&m->graph);
		m->graph.bs.color = 0xFFFFFF;
		empty_box(&m->graph);
	}
	else if (option == 11)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 193;
		m->graph.lt.posy = 600;
		awklm_string_put(m->env.lang.editor_new_map_floors, &m->graph);
	}
	else if (option == 13)
	{
		m->graph.lt.posx = 125;
		m->graph.lt.posy = 680;
		m->graph.bs.color = m->editor.ed_n_map.floors_background_color;
		m->graph.bs.width = 250;
		m->graph.bs.height = 50;
		m->graph.lt.coeff = 1;
		full_box(&m->graph);
		m->graph.bs.color = 0xFFFFFF;
		empty_box(&m->graph);
	}
	else if (option == 14)
	{
		m->graph.lt.coeff = 1;
		m->graph.lt.posx = 60;
		m->graph.lt.posy = 770;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.bs.width = 160;
		m->graph.bs.height = 50;
		if (m->editor.ed_n_map.onclick != 5)
		{
			empty_box(&m->graph);
			m->editor.ed_n_map.ok_color = 0xFFFFFF;
		}
		else
		{
			full_box(&m->graph);
			m->editor.ed_n_map.ok_color = 0x3D2F2F;
		}
	}
	else if (option == 15)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = m->editor.ed_n_map.ok_color;
		m->graph.bs.color = m->editor.ed_n_map.ok_color;
		m->graph.lt.posx = 121;
		m->graph.lt.posy = 760;
		awklm_string_put(m->env.lang.editor_new_map_ok, &m->graph);
	}
	else if (option == 16)
	{
		m->graph.lt.coeff = 1;
		m->graph.lt.posx = 280;
		m->graph.lt.posy = 770;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.bs.width = 160;
		m->graph.bs.height = 50;
		if (m->editor.ed_n_map.onclick != 6)
		{
			empty_box(&m->graph);
			m->editor.ed_n_map.exit_color = 0xFFFFFF;
		}
		else
		{
			full_box(&m->graph);
			m->editor.ed_n_map.exit_color = 0x3D2F2F;
		}
	}
	else if (option == 17)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = m->editor.ed_n_map.exit_color;
		m->graph.bs.color = m->editor.ed_n_map.exit_color;
		m->graph.lt.posx = 294;
		m->graph.lt.posy = 760;
		awklm_string_put(m->env.lang.editor_new_map_exit, &m->graph);
	}
}

void	editor_new_map_settings_init_values_english(t_main *m, int option)
{
	int		i;

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
		i = 70;
		while (i < 75)
		{
			m->graph.bs.xi = 0;
			m->graph.bs.yi = i;
			m->graph.bs.xf = m->graph.i.mlx->img_x;
			m->graph.bs.yf = m->graph.bs.yi;
			ft_segment(&m->graph);
			i++;
		}
	}
	else if (option == 2)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 213;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_new_map_name, &m->graph);
	}
	else if (option == 5)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 203;
		m->graph.lt.posy = 300;
		awklm_string_put(m->env.lang.editor_new_map_width, &m->graph);
	}
	else if (option == 8)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 193;
		m->graph.lt.posy = 450;
		awklm_string_put(m->env.lang.editor_new_map_height, &m->graph);
	}
	else if (option == 11)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 193;
		m->graph.lt.posy = 600;
		awklm_string_put(m->env.lang.editor_new_map_floors, &m->graph);
	}
	else if (option == 14)
	{
		m->graph.lt.coeff = 1;
		m->graph.lt.posx = 60;
		m->graph.lt.posy = 770;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.bs.width = 160;
		m->graph.bs.height = 50;
		if (m->editor.ed_n_map.onclick != 5)
		{
			empty_box(&m->graph);
			m->editor.ed_n_map.ok_color = 0xFFFFFF;
		}
		else
		{
			full_box(&m->graph);
			m->editor.ed_n_map.ok_color = 0x3D2F2F;
		}
	}
	else if (option == 15)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = m->editor.ed_n_map.ok_color;
		m->graph.bs.color = m->editor.ed_n_map.ok_color;
		m->graph.lt.posx = 121;
		m->graph.lt.posy = 760;
		awklm_string_put(m->env.lang.editor_new_map_ok, &m->graph);
	}
	else if (option == 16)
	{
		m->graph.lt.coeff = 1;
		m->graph.lt.posx = 280;
		m->graph.lt.posy = 770;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.bs.width = 160;
		m->graph.bs.height = 50;
		if (m->editor.ed_n_map.onclick != 6)
		{
			empty_box(&m->graph);
			m->editor.ed_n_map.exit_color = 0xFFFFFF;
		}
		else
		{
			full_box(&m->graph);
			m->editor.ed_n_map.exit_color = 0x3D2F2F;
		}
	}
	else if (option == 17)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = m->editor.ed_n_map.exit_color;
		m->graph.bs.color = m->editor.ed_n_map.exit_color;
		m->graph.lt.posx = 323;
		m->graph.lt.posy = 760;
		awklm_string_put(m->env.lang.editor_new_map_exit, &m->graph);
	}
}

void	draw_editor_new_map_settings(t_main *m)
{
	img_one_color(&m->graph.i.mlx, 0x3D2F2F);
	color_img_edges(&m->graph, 5, 0xFFFFFF);
	if (m->env.language_mode == 0)
	{
		editor_new_map_settings_init_values_english(m, 0);
		editor_new_map_settings_init_values_english(m, 1);
		editor_new_map_settings_init_values_english(m, 2);
		editor_new_map_settings_init_values_french(m, 4);
		editor_new_map_settings_init_values_english(m, 5);
		editor_new_map_settings_init_values_french(m, 7);
		editor_new_map_settings_init_values_english(m, 8);
		editor_new_map_settings_init_values_french(m, 10);
		editor_new_map_settings_init_values_english(m, 11);
		editor_new_map_settings_init_values_french(m, 13);
		editor_new_map_settings_init_values_english(m, 14);
		editor_new_map_settings_init_values_english(m, 15);
		editor_new_map_settings_init_values_english(m, 16);
		editor_new_map_settings_init_values_english(m, 17);
	}
	else
	{
		editor_new_map_settings_init_values_french(m, 0);
		editor_new_map_settings_init_values_french(m, 1);
		editor_new_map_settings_init_values_french(m, 2);
		editor_new_map_settings_init_values_french(m, 4);
		editor_new_map_settings_init_values_french(m, 5);
		editor_new_map_settings_init_values_french(m, 7);
		editor_new_map_settings_init_values_french(m, 8);
		editor_new_map_settings_init_values_french(m, 10);
		editor_new_map_settings_init_values_french(m, 11);
		editor_new_map_settings_init_values_french(m, 13);
		editor_new_map_settings_init_values_french(m, 14);
		editor_new_map_settings_init_values_french(m, 15);
		editor_new_map_settings_init_values_french(m, 16);
		editor_new_map_settings_init_values_french(m, 17);}
}

void	write_editor_new_map_settings(t_main *m)
{
	int		len;

	m->graph.lt.coeff = 0.40;
	// m->graph.lt.posx = 125;
	// m->graph.lt.posy = 230;
	// m->graph.bs.width = 250;
	// m->graph.bs.height = 50;
	// (taille totale - taille du mot) / 2;
	len = ft_strlen(m->editor.ed_n_map.n_map_name) - 1;
	m->graph.lt.posx = 125 + ((250 - (len * (40 * m->graph.lt.coeff)) - (25 * m->graph.lt.coeff)) / 2);
	m->graph.lt.posy = 215;
	m->graph.lt.couleur = m->editor.ed_n_map.name_color;
	m->graph.bs.color = m->editor.ed_n_map.name_color;
	if (len == -1 && m->editor.ed_n_map.write == 1)
	{
		m->graph.bs.width = 80 * m->graph.lt.coeff;
		m->graph.bs.height = 20 * m->graph.lt.coeff;
		full_box(&m->graph);
	}
	awklm_string_put(m->editor.ed_n_map.n_map_name, &m->graph);
	// m->graph.lt.posx = 125;
	// m->graph.lt.posy = 380;
	len = ft_strlen(m->editor.ed_n_map.n_map_width) - 1;
	m->graph.lt.posx = 125 + ((250 - (len * (40 * m->graph.lt.coeff)) - (25 * m->graph.lt.coeff)) / 2);
	m->graph.lt.posy = 365;
	m->graph.lt.couleur = m->editor.ed_n_map.width_color;
	m->graph.bs.color = m->editor.ed_n_map.width_color;
	if (len == -1 && m->editor.ed_n_map.write == 2)
	{
		m->graph.bs.width = 80 * m->graph.lt.coeff;
		m->graph.bs.height = 20 * m->graph.lt.coeff;
		full_box(&m->graph);
	}
	awklm_string_put(m->editor.ed_n_map.n_map_width, &m->graph);
	// m->graph.lt.posx = 125;
	// m->graph.lt.posy = 530;
	len = ft_strlen(m->editor.ed_n_map.n_map_height) - 1;
	m->graph.lt.posx = 125 + ((250 - (len * (40 * m->graph.lt.coeff)) - (25 * m->graph.lt.coeff)) / 2);
	m->graph.lt.posy = 515;
	m->graph.lt.couleur = m->editor.ed_n_map.height_color;
	m->graph.bs.color = m->editor.ed_n_map.height_color;
	if (len == -1 && m->editor.ed_n_map.write == 3)
	{
		m->graph.bs.width = 80 * m->graph.lt.coeff;
		m->graph.bs.height = 20 * m->graph.lt.coeff;
		full_box(&m->graph);
	}
	awklm_string_put(m->editor.ed_n_map.n_map_height, &m->graph);
	// m->graph.lt.posx = 125;
	// m->graph.lt.posy = 680;
	len = ft_strlen(m->editor.ed_n_map.n_map_floors) - 1;
	m->graph.lt.posx = 125 + ((250 - (len * (40 * m->graph.lt.coeff)) - (25 * m->graph.lt.coeff)) / 2);
	m->graph.lt.posy = 665;
	m->graph.lt.couleur = m->editor.ed_n_map.floors_color;
	m->graph.bs.color = m->editor.ed_n_map.floors_color;
	if (len == -1 && m->editor.ed_n_map.write == 4)
	{
		m->graph.bs.width = 80 * m->graph.lt.coeff;
		m->graph.bs.height = 20 * m->graph.lt.coeff;
		full_box(&m->graph);
	}
	awklm_string_put(m->editor.ed_n_map.n_map_floors, &m->graph);
}

void	editor_new_map_settings_color(t_main *m)
{
	if (m->editor.ed_n_map.write == 1)
	{
		m->editor.ed_n_map.name_color = 0x3D2F2F;
		m->editor.ed_n_map.name_background_color = 0xFFFFFF;
	}
	else
	{
		m->editor.ed_n_map.name_color = 0xFFFFFF;
		m->editor.ed_n_map.name_background_color = 0x000000;
	}
	if (m->editor.ed_n_map.write == 2)
	{
		m->editor.ed_n_map.width_color = 0x3D2F2F;
		m->editor.ed_n_map.width_background_color = 0xFFFFFF;
	}
	else
	{
		m->editor.ed_n_map.width_color = 0xFFFFFF;
		m->editor.ed_n_map.width_background_color = 0x000000;
	}
	if (m->editor.ed_n_map.write == 3)
	{
		m->editor.ed_n_map.height_color = 0x3D2F2F;
		m->editor.ed_n_map.height_background_color = 0xFFFFFF;
	}
	else
	{
		m->editor.ed_n_map.height_color = 0xFFFFFF;
		m->editor.ed_n_map.height_background_color = 0x000000;
	}
	if (m->editor.ed_n_map.write == 4)
	{
		m->editor.ed_n_map.floors_color = 0x3D2F2F;
		m->editor.ed_n_map.floors_background_color = 0xFFFFFF;
	}
	else
	{
		m->editor.ed_n_map.floors_color = 0xFFFFFF;
		m->editor.ed_n_map.floors_background_color = 0x000000;
	}
}

void	editor_new_map_settings(t_main *m)
{
	if (m->editor.new_map_settings == 1)
	{
		mlx_img(&m->graph, 3, 6, m->mlx.mlx_ptr);
		editor_new_map_settings_color(m);
		draw_editor_new_map_settings(m);
		write_editor_new_map_settings(m);
		mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
			m->graph.i.mlx->img, 710, 100);
	}
}
