/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_processes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 08:57:53 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/06 14:17:23 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	mlx_create_windows(t_main *m)
{
	m->mlx.win_ptr = mlx_new_window(m->mlx.mlx_ptr, m->env.scr_width, m->env.scr_height,\
			"Doom-Nukem");
	if (m->env.lang_value == -1)
		choose_language_mode(m, 0, 0);
	else
	{
		if (m->env.resize_mode == 1)
			resize_mode(m, 0, 0);
		else
		{
			awklm_production_mode(m, 0, 0);
		}
	}
	mlx_hook(m->mlx.win_ptr, 2, (1L << 0), keyhooks, m);
}

void	mlx_processes(t_main *m)
{
	m->mlx.mlx_ptr = mlx_init();
	mlx_create_windows(m);
	// mlx_hook(win_ptr, 17, (1L << 17), (int(*)())cleanexit, e);
	// mlx_hook(win_ptr, 3, (1L << 1), release, e);
	// mlx_hook(win_ptr, 4, (1L << 2), mouse_hook, e);
	// mlx_hook(win_ptr, 6, (1L << 6), mouse_move, e);
	mlx_loop(m->mlx.mlx_ptr);
}
