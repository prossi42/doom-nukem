/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize_mode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 18:12:35 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/28 16:16:04 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	resize_mode_hook(t_main *m, int keycode)
{
	char	*tmp;

	tmp = NULL;
	if (keycode == 65362)
		m->env.scr_height -= 10;
	else if (keycode == 65364)
		m->env.scr_height += 10;
	else if (keycode == 65361)
		m->env.scr_width -= 10;
	else if (keycode == 65363)
		m->env.scr_width += 10;
	tmp = ft_strcat_lin("config/screen/width/", ft_itoa(m->env.scr_width));
	xml_parser(tmp, &m->env.xml_struct, 4, 0);
	ft_strdel(&tmp);
	tmp = ft_strcat_lin("config/screen/height/", ft_itoa(m->env.scr_height));
	xml_parser(tmp, &m->env.xml_struct, 4, 0);
	ft_strdel(&tmp);
	mlx_clear_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
	mlx_destroy_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
	mlx_create_windows(m);
}

void	draw_resize_on_window(t_main *m)
{
	// int		y;
	// int		x;

	// y = -1;
	m->graph.i.img_x = m->env.scr_width;
	m->graph.i.img_y = m->env.scr_height;
	mlx_img(&m->graph, 0, 0, m->mlx.mlx_ptr);
	// while (y++ < m->graph.i.img_y)
	// {
	// 	x = -1;
	// 	while (x++ < m->graph.i.img_x)
	// 	{
	// 		pixel_put_to_img(&m->graph.i.mlx, x, y, 0xFFFFFF);
	// 	}
	// }
	m->graph.bs.xi = 50;
	m->graph.bs.xf = 150;
	m->graph.bs.yi = 50;
	m->graph.bs.yf = 50;
	m->graph.lt.couleur = 0xFFFFFF;
	ft_segment_letter(&m->graph, &m->graph.i.mlx);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 0, 0);
}

void	resize_mode(t_main *m, int keycode, int option)
{
	if (option == 0)
		draw_resize_on_window(m);
	else if (option == 1)
		resize_mode_hook(m, keycode);
}
