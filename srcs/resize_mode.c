/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize_mode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 18:12:35 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/09 09:44:36 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	end_resize_mode(t_main *m)
{
	char	*tmp;

	tmp = NULL;
	tmp = ft_strcat_lin("config/screen/width/", ft_itoa(m->env.scr_width));
	xml_parser(tmp, &m->env.config_struct, 4, 0);
	ft_strdel(&tmp);
	tmp = ft_strcat_lin("config/screen/height/", ft_itoa(m->env.scr_height));
	xml_parser(tmp, &m->env.config_struct, 4, 0);
	ft_strdel(&tmp);
	tmp = ft_strcat_lin("config/screen/set/", "yes");
	xml_parser(tmp, &m->env.config_struct, 4, 0);
	mlx_destroy_image(m->mlx.mlx_ptr, m->graph.i.mlx->img);
	m->env.resize_mode = 0;
	mlx_launching_windows(m);
}

void	resize_mode_hook(t_main *m, int keycode)
{
	char	*tmp;

	tmp = NULL;
	if (keycode == 125 && m->env.scr_height > 720)
		m->env.scr_height -= 10;
	else if (keycode == 126)
		m->env.scr_height += 10;
	else if (keycode == 123 && m->env.scr_width > 1280)
		m->env.scr_width -= 10;
	else if (keycode == 124)
		m->env.scr_width += 10;
	mlx_destroy_image(m->mlx.mlx_ptr, m->graph.i.mlx->img);
	mlx_clear_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
	mlx_destroy_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
	mlx_launching_windows(m);
}

void	write_resize_info(t_main *m)
{
	resize_mode_init_values(m, 2);
	awklm_string_put(m->env.lang.set_screen_size_a, &m->graph);
	resize_mode_init_values(m, 3);
	awklm_string_put(m->env.lang.set_screen_size_b, &m->graph);
}

void	draw_resize_on_window(t_main *m)
{
	resize_mode_init_values(m, 0);
	if (m->graph.i.n_img == 0)
		mlx_img(&m->graph, 0, 0, m->mlx.mlx_ptr);
	else
		fill_img(&m->graph.i.mlx, &m->graph.i, m->mlx.mlx_ptr);
	draw_resize(&m->graph, 0xFFFFFF);
	resize_mode_init_values(m, 1);
	empty_box(&m->graph);
	draw_directional_arrows(&m->graph, (m->graph.i.img_x / 2) - 30, (m->graph.i.img_y / 2) - 20);
	write_resize_info(m);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 0, 0);
}

void	resize_mode(t_main *m, int keycode, int option)
{
	if (option == 0)
		draw_resize_on_window(m);
	else if (option == 1)
		resize_mode_hook(m, keycode);
	else if (option == 2)
		end_resize_mode(m);
}
