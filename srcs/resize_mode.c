/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize_mode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 18:12:35 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/04 02:06:50 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	end_resize_mode(t_main *m)
{
	char	*tmp;

	tmp = NULL;
	tmp = ft_strcat_lin("config/screen/width/", ft_itoa(m->env.scr_width));
	xml_parser(tmp, &m->env.xml_struct, 4, 0);
	ft_strdel(&tmp);
	tmp = ft_strcat_lin("config/screen/height/", ft_itoa(m->env.scr_height));
	xml_parser(tmp, &m->env.xml_struct, 4, 0);
	ft_strdel(&tmp);
	tmp = ft_strcat_lin("config/screen/set/", "yes");
	xml_parser(tmp, &m->env.xml_struct, 4, 0);
	mlx_destroy_image(m->mlx.mlx_ptr, m->graph.i.mlx->img);
	m->env.resize_mode = 0;
	mlx_create_windows(m);
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
	mlx_create_windows(m);
}

void	write_resize_info(t_main *m)
{
	m->graph.lt.couleur = 0xFF0000;
	m->graph.bs.color = 0xFF0000;
	if (m->env.lang_value == 0)
		m->graph.lt.posx = m->graph.i.mlx->img_x / 2 - 325;
	else
		m->graph.lt.posx = m->graph.i.mlx->img_x / 2 - 520;
	m->graph.lt.posy = m->graph.i.mlx->img_y / 3;
	m->graph.lt.coeff = 0.40;
	m->graph.lt.space = 40;
	awklm_string_put(m->env.lang.set_screen_size_a, &m->graph);
	if (m->env.lang_value == 0)
		m->graph.lt.posx = m->graph.i.mlx->img_x / 2 - 210;
	else
		m->graph.lt.posx = m->graph.i.mlx->img_x / 2 - 400;
	m->graph.lt.posy = (m->graph.i.mlx->img_y / 3) * 2;
	awklm_string_put(m->env.lang.set_screen_size_b, &m->graph);
}

void	draw_resize_on_window(t_main *m)
{
	m->graph.i.img_x = m->env.scr_width;
	m->graph.i.img_y = m->env.scr_height;
	if (m->graph.i.n_img == 0)
		mlx_img(&m->graph, 0, 0, m->mlx.mlx_ptr);
	else
		fill_img(&m->graph.i.mlx, &m->graph.i, m->mlx.mlx_ptr);
	draw_resize(&m->graph, 0xFFFFFF);
	m->graph.lt.coeff = 1;
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
