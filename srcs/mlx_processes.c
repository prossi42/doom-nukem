/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_processes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 08:57:53 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/15 23:31:27 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	mlx_launching_editor(t_main *m)
{
	editor(m);
	mlx_hook(m->mlx.win_ptr, 2, (1L << 0), editor_keyhooks, m);
	mlx_hook(m->mlx.win_ptr, 6, (1L << 6), editor_mouse_move_hook, m);
}

void	mlx_launching_windows(t_main *m)
{
	m->mlx.win_ptr = mlx_new_window(m->mlx.mlx_ptr, m->env.scr_width, m->env.scr_height,\
			"Doom-Nukem");
	if (m->env.language_mode == -1)
		choose_language_mode(m, 0, 0);
	else
	{
		if (m->env.resize_mode == 1)
			resize_mode(m, 0, 0);
		else
		{
			if (m->env.awklm_prod_mode == 0)
				awklm_productions_mode(m, 0);
			else
			{
				if (m->env.main_menu_mode == -2 || m->env.main_menu_mode == -1)
					main_menu_mode(m, 0, 0);
			}
		}
	}
	mlx_hook(m->mlx.win_ptr, 2, (1L << 0), main_keyhooks, m);
}

void	mlx_processes(t_main *m)
{
	m->mlx.mlx_ptr = mlx_init();
	mlx_launching_windows(m);
	// mlx_hook(win_ptr, 17, (1L << 17), (int(*)())cleanexit, e);
	// mlx_hook(win_ptr, 3, (1L << 1), release, e);
	// mlx_hook(win_ptr, 4, (1L << 2), mouse_hook, e);
	// mlx_hook(win_ptr, 6, (1L << 6), mouse_move, e);
	mlx_loop(m->mlx.mlx_ptr);
}
