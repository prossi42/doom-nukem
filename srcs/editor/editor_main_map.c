/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_main_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:26:08 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/09 16:51:40 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	editor_main_map(t_main *m)
{
	mlx_img(&m->graph, 3, 1, m->mlx.mlx_ptr);
	img_one_color(&m->graph.i.mlx, 0x3D2F2F);
	color_img_edges(&m->graph, 1, 0xFFFFFF);
	if (m->editor.main_map == 1)
	{
		if (m->editor.ed_alt_map.focus_one == 2 && m->editor.ed_alt_map.focus_two == 2)
		{
			//si deux focus
			(void)m;
		}
		else
		{
			// si 1 focus
			(void)m;
		}
	}
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 0, 0);
	m->editor.main_map = 0;
}
