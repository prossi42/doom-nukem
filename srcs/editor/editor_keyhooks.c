/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_keyhooks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 13:55:35 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/19 02:52:21 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	editor_keyhooks_reset_values(t_main *m)
{
	m->editor.new_map_settings = 0;
}

int		editor_keyhooks(int keycode, t_main *m)
{
	if (keycode == 53)
	{
		editor_keyhooks_reset_values(m);
		// mlx_destroy_image(m->mlx.mlx_ptr, m->graph.i.mlx->img);
		mlx_clear_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
		mlx_destroy_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
		mlx_launching_windows(m);
	}
	return(0);
}
