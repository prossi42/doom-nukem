/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_exit_warnings.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 23:01:20 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/07 21:21:10 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	editor_exit_warnings_init_values_french(t_main *m, int option)
{
	if (option == 0)
	{
		m->graph.lt.coeff = 1;
		m->graph.lt.posx = 60;
		m->graph.lt.posy = 370;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.bs.width = 160;
		m->graph.bs.height = 50;
		if (m->editor.ed_ex_warn.onclick != 1)
		{
			empty_box(&m->graph);
			m->editor.ed_ex_warn.no_color = 0xFFFFFF;
		}
		else
		{
			full_box(&m->graph);
			m->editor.ed_ex_warn.no_color = 0x3D2F2F;
		}
	}
	else if (option == 1)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = m->editor.ed_ex_warn.no_color;
		m->graph.bs.color = m->editor.ed_ex_warn.no_color;
		m->graph.lt.posx = 114;
		m->graph.lt.posy = 360;
		awklm_string_put(m->env.lang.editor_exit_warnings_yes, &m->graph);
	}
	else if (option == 2)
	{
		m->graph.lt.coeff = 1;
		m->graph.lt.posx = 280;
		m->graph.lt.posy = 370;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.bs.width = 160;
		m->graph.bs.height = 50;
		if (m->editor.ed_ex_warn.onclick != 2)
		{
			empty_box(&m->graph);
			m->editor.ed_ex_warn.no_color = 0xFFFFFF;
		}
		else
		{
			full_box(&m->graph);
			m->editor.ed_ex_warn.no_color = 0x3D2F2F;
		}
	}
	else if (option == 3)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = m->editor.ed_ex_warn.no_color;
		m->graph.bs.color = m->editor.ed_ex_warn.no_color;
		m->graph.lt.posx = 334;
		m->graph.lt.posy = 360;
		awklm_string_put(m->env.lang.editor_exit_warnings_no, &m->graph);
	}
	else if (option == 4)
	{
		m->graph.lt.coeff = 0.40;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 69;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_save_current_map, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 133;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_save_current_map2, &m->graph);
	}
	else if (option == 5)
	{
		m->graph.lt.coeff = 0.40;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 45;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_error_map_dir, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 117;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_error_map_dir2, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 165;
		m->graph.lt.posy = 250;
		awklm_string_put(m->env.lang.editor_exit_retry, &m->graph);
	}
	else if (option == 6)
	{
		m->graph.lt.coeff = 0.40;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 82;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_already_exist, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 165;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_already_exist2, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 157;
		m->graph.lt.posy = 250;
		awklm_string_put(m->env.lang.editor_exit_change_it_fem, &m->graph);
	}
	else if (option == 7)
	{
		m->graph.lt.coeff = 0.40;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 93;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_bad_width, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 84;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_bad_width2, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 157;
		m->graph.lt.posy = 250;
		awklm_string_put(m->env.lang.editor_exit_change_it_fem, &m->graph);
	}
	else if (option == 8)
	{
		m->graph.lt.coeff = 0.40;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 85;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_bad_height, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 84;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_bad_height2, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 157;
		m->graph.lt.posy = 250;
		awklm_string_put(m->env.lang.editor_exit_change_it_fem, &m->graph);
	}
	else if (option == 9)
	{
		m->graph.lt.coeff = 0.40;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 69;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_bad_floor, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 117;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_bad_floor2, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 157;
		m->graph.lt.posy = 250;
		awklm_string_put(m->env.lang.editor_exit_change_it, &m->graph);
	}
	else if (option == 10)
	{
		m->graph.lt.coeff = 0.40;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 45;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_error_map_creat, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 109;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_error_map_creat2, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 165;
		m->graph.lt.posy = 250;
		awklm_string_put(m->env.lang.editor_exit_retry, &m->graph);
	}
}

void	editor_exit_warnings_init_values_english(t_main *m, int option)
{
	if (option == 0)
	{
		m->graph.lt.coeff = 1;
		m->graph.lt.posx = 60;
		m->graph.lt.posy = 370;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.bs.width = 160;
		m->graph.bs.height = 50;
		if (m->editor.ed_ex_warn.onclick != 1)
		{
			empty_box(&m->graph);
			m->editor.ed_ex_warn.no_color = 0xFFFFFF;
		}
		else
		{
			full_box(&m->graph);
			m->editor.ed_ex_warn.no_color = 0x3D2F2F;
		}
	}
	else if (option == 1)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = m->editor.ed_ex_warn.no_color;
		m->graph.bs.color = m->editor.ed_ex_warn.no_color;
		m->graph.lt.posx = 114;
		m->graph.lt.posy = 360;
		awklm_string_put(m->env.lang.editor_exit_warnings_yes, &m->graph);
	}
	else if (option == 2)
	{
		m->graph.lt.coeff = 1;
		m->graph.lt.posx = 280;
		m->graph.lt.posy = 370;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.bs.width = 160;
		m->graph.bs.height = 50;
		if (m->editor.ed_ex_warn.onclick != 2)
		{
			empty_box(&m->graph);
			m->editor.ed_ex_warn.no_color = 0xFFFFFF;
		}
		else
		{
			full_box(&m->graph);
			m->editor.ed_ex_warn.no_color = 0x3D2F2F;
		}
	}
	else if (option == 3)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = m->editor.ed_ex_warn.no_color;
		m->graph.bs.color = m->editor.ed_ex_warn.no_color;
		m->graph.lt.posx = 344;
		m->graph.lt.posy = 360;
		awklm_string_put(m->env.lang.editor_exit_warnings_no, &m->graph);
	}
	else if (option == 4)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 64;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_save_current_map, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 104;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_save_current_map2, &m->graph);
	}
	else if (option == 5)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 64;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_error_map_dir, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 64;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_error_map_dir2, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 183;
		m->graph.lt.posy = 250;
		awklm_string_put(m->env.lang.editor_exit_retry, &m->graph);
	}
	else if (option == 6)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 124;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_already_exist, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 124;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_already_exist2, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 144;
		m->graph.lt.posy = 250;
		awklm_string_put(m->env.lang.editor_exit_change_it, &m->graph);
	}
	else if (option == 7)
	{
		// The width must be at least 3
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 84;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_bad_width, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 94;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_bad_width2, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 144;
		m->graph.lt.posy = 250;
		awklm_string_put(m->env.lang.editor_exit_change_it, &m->graph);
	}
	else if (option == 8)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 74;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_bad_height, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 94;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_bad_height2, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 144;
		m->graph.lt.posy = 250;
		awklm_string_put(m->env.lang.editor_exit_change_it, &m->graph);
	}
	else if (option == 9)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 54;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_bad_floor, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 124;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_bad_floor2, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 144;
		m->graph.lt.posy = 250;
		awklm_string_put(m->env.lang.editor_exit_change_it, &m->graph);
	}
	else if (option == 10)
	{
		m->graph.lt.coeff = 0.50;
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 64;
		m->graph.lt.posy = 150;
		awklm_string_put(m->env.lang.editor_exit_error_map_creat, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 54;
		m->graph.lt.posy = 200;
		awklm_string_put(m->env.lang.editor_exit_error_map_creat2, &m->graph);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 184;
		m->graph.lt.posy = 250;
		awklm_string_put(m->env.lang.editor_exit_retry, &m->graph);
	}
}

void	draw_editor_exit_warnings(t_main *m)
{
	img_one_color(&m->graph.i.mlx, 0x3D2F2F);
	color_img_edges(&m->graph, 5, 0xFFFFFF);
	if (m->env.language_mode == 0)
	{
		editor_exit_warnings_init_values_english(m, 0);
		editor_exit_warnings_init_values_english(m, 1);
		editor_exit_warnings_init_values_english(m, 2);
		editor_exit_warnings_init_values_english(m, 3);
		if (m->editor.map == 1)
			editor_exit_warnings_init_values_english(m, 4);
		else if (m->editor.map == -1)
			editor_exit_warnings_init_values_english(m, 5);
		else if (m->editor.map == 2)
			editor_exit_warnings_init_values_english(m, 6);
		else if (m->editor.map == 3)
			editor_exit_warnings_init_values_english(m, 7);
		else if (m->editor.map == 4)
			editor_exit_warnings_init_values_english(m, 8);
		else if (m->editor.map == 5)
			editor_exit_warnings_init_values_english(m, 9);
		else if (m->editor.map == 6)
			editor_exit_warnings_init_values_english(m, 10);
	}
	else
	{
		editor_exit_warnings_init_values_french(m, 0);
		editor_exit_warnings_init_values_french(m, 1);
		editor_exit_warnings_init_values_french(m, 2);
		editor_exit_warnings_init_values_french(m, 3);
		if (m->editor.map == 1)
			editor_exit_warnings_init_values_french(m, 4);
		else if (m->editor.map == -1)
			editor_exit_warnings_init_values_french(m, 5);
		else if (m->editor.map == 2)
			editor_exit_warnings_init_values_french(m, 6);
		else if (m->editor.map == 3)
			editor_exit_warnings_init_values_french(m, 7);
		else if (m->editor.map == 4)
			editor_exit_warnings_init_values_french(m, 8);
		else if (m->editor.map == 5)
			editor_exit_warnings_init_values_french(m, 9);
		else if (m->editor.map == 6)
			editor_exit_warnings_init_values_french(m, 10);
	}
}

void	editor_exit_warnings(t_main *m)
{
	if (m->editor.exit_warnings == 1)
	{
		mlx_img(&m->graph, 3, 7, m->mlx.mlx_ptr);
		draw_editor_exit_warnings(m);
		mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
			m->graph.i.mlx->img, 710, 320);
	}
}
