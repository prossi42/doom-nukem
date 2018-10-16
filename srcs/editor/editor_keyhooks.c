/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_keyhooks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 13:55:35 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/15 22:31:50 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		editor_keyhooks(int keycode, t_main *m)
{
	if (keycode == 53)
	{
		// mlx_destroy_image(m->mlx.mlx_ptr, m->graph.i.mlx->img);
		mlx_clear_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
		mlx_destroy_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
		mlx_launching_windows(m);
	}
	return(0);
}
