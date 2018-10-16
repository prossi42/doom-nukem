/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_menu_mode.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:44:41 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/12 19:07:36 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	end_main_menu(t_main *m)
{
	int		tmp;

	tmp = m->env.main_menu_mode;
	m->env.main_menu_mode = -1;
	mlx_clear_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
	if (tmp == 2)
		mlx_launching_editor(m);
}

void	main_menu_hook(t_main *m, int keycode)
{
	int		tmp;

	tmp = m->env.main_menu_mode;
	if (keycode == 126)
	{
		if (m->env.main_menu_mode != 0)
			m->env.main_menu_mode--;
	}
	else if (keycode == 125)
	{
		if (m->env.main_menu_mode != 4)
			m->env.main_menu_mode++;
	}
	if (tmp != m->env.main_menu_mode)
		main_menu_mode(m, 0, 0);
}

void	write_main_menu_mode(t_main *m)
{
	if (m->env.language_mode == 0)
	{
		main_menu_write_init_values(m, 0);
		main_menu_write_init_values(m, 2);
		main_menu_write_init_values(m, 4);
		main_menu_write_init_values(m, 6);
		main_menu_write_init_values(m, 8);
	}
	else
	{
		main_menu_write_init_values(m, 1);
		main_menu_write_init_values(m, 3);
		main_menu_write_init_values(m, 5);
		main_menu_write_init_values(m, 7);
		main_menu_write_init_values(m, 9);
	}
}

void	draw_main_menu(t_main *m)
{
	if (m->env.main_menu_mode == -1 || m->env.main_menu_mode == -2)
	{
		main_menu_mode_init_values(m, 0);
		if (m->env.main_menu_mode == -2)
		{
			fill_img(&m->graph.i.mlx, &m->graph.i, m->mlx.mlx_ptr);
		}
		else
		{
			mlx_img(&m->graph, 3, 0, m->mlx.mlx_ptr);
		}
		img_one_color(&m->graph.i.mlx, 0x000000);
		main_menu_background_init_values(m, 0);
		main_menu_background_init_values(m, 1);
		main_menu_background_init_values(m, 2);
		m->env.main_menu_mode = 0;
	}
	main_menu_mode_init_values(m, 1);
	main_menu_mode_init_values(m, 2);
	main_menu_mode_init_values(m, 3);
	main_menu_mode_init_values(m, 4);
	main_menu_mode_init_values(m, 5);
	main_menu_mode_init_values(m, 6);
	write_main_menu_mode(m);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 0, 0);
}

void	main_menu_mode(t_main *m, int keycode, int option)
{
	if (option == 0)
		draw_main_menu(m);
	else if (option == 1)
		main_menu_hook(m, keycode);
	else
		end_main_menu(m);
}
