/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_language_mode.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 21:58:59 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/06 13:27:53 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	end_choose_language_mode(t_main *m)
{

	if (m->env.lang.select_lang == 0)
	{
		xml_parser("config/lang/lang/english", &m->env.xml_struct, 4, 0);
		m->env.lang_value = 0;
		set_struct_lang_en(m);
	}
	else
	{
		xml_parser("config/lang/lang/french", &m->env.xml_struct, 4, 0);
		m->env.lang_value = 1;
		set_struct_lang_fr(m);
	}
	mlx_destroy_image(m->mlx.mlx_ptr, m->graph.i.mlx->img);
	mlx_clear_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
	mlx_destroy_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
	mlx_create_windows(m);
}

void	choose_language_hook(t_main *m, int keycode)
{
	int		tmp;
	tmp = m->env.lang.select_lang;
	if (keycode == 126)
	{
		if (m->env.lang.select_lang == 1)
			m->env.lang.select_lang = 0;
	}
	else if (keycode == 125)
	{
		if (m->env.lang.select_lang == 0)
			m->env.lang.select_lang = 1;
	}
	if (m->env.lang.select_lang != tmp)
	{
		mlx_destroy_image(m->mlx.mlx_ptr, m->graph.i.mlx->img);
		mlx_clear_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
		mlx_destroy_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
		mlx_create_windows(m);
	}
}

void	draw_choose_language_sd(t_main *m)
{
	choose_language_mode_init_values(m, 4);
	awklm_string_put("English", &m->graph);
	choose_language_mode_init_values(m, 5);
	awklm_string_put("Francais", &m->graph);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 0, 0);
}

void	draw_choose_language(t_main *m)
{
	choose_language_mode_init_values(m, 0);
	if (m->graph.i.n_img == 0)
		mlx_img(&m->graph, 0, 0, m->mlx.mlx_ptr);
	else
		fill_img(&m->graph.i.mlx, &m->graph.i, m->mlx.mlx_ptr);
	choose_language_mode_init_values(m, 1);
	awklm_string_put(m->env.lang.set_language, &m->graph);
	if (m->env.lang.select_lang == 0)
	{
		choose_language_mode_init_values(m, 2);
		full_box(&m->graph);
		choose_language_mode_init_values(m, 3);
		empty_box(&m->graph);
	}
	else
	{
		choose_language_mode_init_values(m, 3);
		full_box(&m->graph);
		choose_language_mode_init_values(m, 2);
		empty_box(&m->graph);
	}
	draw_choose_language_sd(m);
}

void	choose_language_mode(t_main *m, int keycode, int option)
{
	if (option == 0)
		draw_choose_language(m);
	else if (option == 1)
		choose_language_hook(m, keycode);
	else if (option == 2)
		end_choose_language_mode(m);
}
