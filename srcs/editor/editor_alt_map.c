/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_alt_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:43:36 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/09 13:23:10 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	draw_editor_alt_map_canvas_init_values(t_main *m, int option)
{
	int		x;
	int		y;

	y = -1;
	if (option == 0)
	{
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.x_arc = 30;
		m->graph.bs.y_arc = 30;
		m->graph.bs.width = 20;
		m->graph.bs.height = 20;
		if (m->editor.ed_alt_map.onclick == 7)
			ft_full_ellipse(&m->graph, 0, 0);
		else
			ft_ellipse(&m->graph, 0, 0);
		m->graph.bs.color = m->editor.ed_alt_map.valid_button_color;
		m->graph.bs.xi = 19;
		m->graph.bs.xf = m->graph.bs.xi + 10;
		m->graph.bs.yi = 29;
		m->graph.bs.yf = m->graph.bs.yi + 15;
		ft_segment(&m->graph);
		m->graph.bs.xf = m->graph.bs.xi + 10;
		m->graph.bs.yf = m->graph.bs.yi - 25;
		ft_segment(&m->graph);
		m->graph.bs.xi = 20;
		m->graph.bs.xf = m->graph.bs.xi + 10;
		m->graph.bs.yi = 29;
		m->graph.bs.yf = m->graph.bs.yi + 15;
		ft_segment(&m->graph);
		m->graph.bs.xf = m->graph.bs.xi + 10;
		m->graph.bs.yf = m->graph.bs.yi - 25;
		ft_segment(&m->graph);
	}
	else if (option == 1)
	{
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.x_arc = 390;
		m->graph.bs.y_arc = 30;
		m->graph.bs.width = 20;
		m->graph.bs.height = 20;
		if (m->editor.ed_alt_map.onclick == 8)
			ft_full_ellipse(&m->graph, 0, 0);
		else
			ft_ellipse(&m->graph, 0, 0);
		m->graph.bs.color = m->editor.ed_alt_map.cross_button_color;
		m->graph.bs.xi = 400;
		m->graph.bs.xf = m->graph.bs.xi - 20;
		m->graph.bs.yi = 20;
		m->graph.bs.yf = m->graph.bs.yi + 20;
		ft_segment(&m->graph);
		m->graph.bs.xi = 401;
		m->graph.bs.xf = m->graph.bs.xi - 20;
		m->graph.bs.yi = 20;
		m->graph.bs.yf = m->graph.bs.yi + 20;
		ft_segment(&m->graph);
		m->graph.bs.xi = 380;
		m->graph.bs.xf = m->graph.bs.xi + 20;
		m->graph.bs.yi = 20;
		m->graph.bs.yf = m->graph.bs.yi + 20;
		ft_segment(&m->graph);
		m->graph.bs.xi = 381;
		m->graph.bs.xf = m->graph.bs.xi + 20;
		m->graph.bs.yi = 20;
		m->graph.bs.yf = m->graph.bs.yi + 20;
		ft_segment(&m->graph);
	}
	else if (option == 2)
	{
		if (m->editor.ed_alt_map.focus_one == 0)
			m->graph.lt.couleur = 0x000000;
		else
			m->graph.lt.couleur = 0xFF0000;
		m->graph.bs.x_arc = 390;
		m->graph.bs.y_arc = 305;
		m->graph.bs.width = 19;
		m->graph.bs.height = 19;
		ft_full_ellipse(&m->graph, 0, 0);
		m->graph.lt.couleur = 0xFF0000;
		m->graph.bs.x_arc = 390;
		m->graph.bs.y_arc = 305;
		m->graph.bs.width = 20;
		m->graph.bs.height = 20;
		ft_ellipse(&m->graph, 0, 0);
		m->graph.bs.color = 0xFF0000;
		m->graph.lt.posx = 380;
		m->graph.lt.posy = 319;
		m->graph.lt.coeff = 0.5;
		awklm_string_put("1", &m->graph);
	}
	else if (option == 3)
	{
		if (m->editor.ed_alt_map.focus_two == 0)
			m->graph.lt.couleur = 0x000000;
		else
			m->graph.lt.couleur = 0x0000FF;
		m->graph.bs.x_arc = 30;
		m->graph.bs.y_arc = 305;
		m->graph.bs.width = 19;
		m->graph.bs.height = 19;
		ft_full_ellipse(&m->graph, 0, 0);
		m->graph.lt.couleur = 0x0000FF;
		m->graph.bs.x_arc = 30;
		m->graph.bs.y_arc = 305;
		m->graph.bs.width = 20;
		m->graph.bs.height = 20;
		ft_ellipse(&m->graph, 0, 0);
		m->graph.bs.color = 0x0000FF;
		m->graph.lt.posx = 24;
		m->graph.lt.posy = 319;
		m->graph.lt.coeff = 0.5;
		awklm_string_put("2", &m->graph);
	}
	else if (option == 4)
	{
		while (++y < 10)
		{
			x = -1;
			while (++x < 10)
			{
				m->graph.bs.color = 0xFFFFFF;
				m->graph.lt.posx = 97 + (x * 23);
				m->graph.lt.posy = 73 + (y * 23);
				m->graph.bs.width = 23;
				m->graph.bs.height = 23;
				m->graph.lt.coeff = 1;
				empty_box(&m->graph);
			}
		}
	}
	else if (option == 5)
	{
		while (++y < 10)
		{
			x = -1;
			while (++x < 10)
			{
				if (x == m->editor.ed_alt_map.box_nb_width_one && y == m->editor.ed_alt_map.box_nb_height_one)
				{
					m->graph.bs.color = 0xFF0000;
					m->graph.lt.posx = 97 + (x * 23);
					m->graph.lt.posy = 73 + (y * 23);
					m->graph.bs.width = 23;
					m->graph.bs.height = 23;
					m->graph.lt.coeff = 1;
					full_box(&m->graph);
				}
			}
		}
	}
	else if (option == 6)
	{
		while (++y < 10)
		{
			x = -1;
			while (++x < 10)
			{
				if (x == m->editor.ed_alt_map.box_nb_width_two && y == m->editor.ed_alt_map.box_nb_height_two)
				{
					m->graph.bs.color = 0x0000FF;
					m->graph.lt.posx = 97 + (x * 23);
					m->graph.lt.posy = 73 + (y * 23);
					m->graph.bs.width = 23;
					m->graph.bs.height = 23;
					m->graph.lt.coeff = 1;
					full_box(&m->graph);
				}
			}
		}
	}
}

void	draw_editor_alt_map_canvas(t_main *m)
{
	if (m->editor.ed_alt_map.onclick == 7)
		m->editor.ed_alt_map.valid_button_color = 0x3D2F2F;
	else
		m->editor.ed_alt_map.valid_button_color = 0xFFFFFF;
	if (m->editor.ed_alt_map.onclick == 8)
		m->editor.ed_alt_map.cross_button_color = 0x3D2F2F;
	else
		m->editor.ed_alt_map.cross_button_color = 0xFFFFFF;
	draw_editor_alt_map_canvas_init_values(m, 0);
	draw_editor_alt_map_canvas_init_values(m, 1);
	draw_editor_alt_map_canvas_init_values(m, 2);
	draw_editor_alt_map_canvas_init_values(m, 3);
	draw_editor_alt_map_canvas_init_values(m, 4);
	if (m->editor.ed_alt_map.focus_one == 2)
		draw_editor_alt_map_canvas_init_values(m, 5);
	if (m->editor.ed_alt_map.focus_two == 2)
		draw_editor_alt_map_canvas_init_values(m, 6);
}

void	draw_editor_alt_map_floors_init_values(t_main *m, int option)
{
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (option == 0)
	{
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.x_arc = 30;
		m->graph.bs.y_arc = 30;
		m->graph.bs.width = 20;
		m->graph.bs.height = 20;
		if (m->editor.ed_alt_map.onclick == 3)
			ft_full_ellipse(&m->graph, 0, 0);
		else
			ft_ellipse(&m->graph, 0, 0);
		m->graph.bs.color = m->editor.ed_alt_map.valid_button_color;
		m->graph.bs.xi = 19;
		m->graph.bs.xf = m->graph.bs.xi + 10;
		m->graph.bs.yi = 29;
		m->graph.bs.yf = m->graph.bs.yi + 15;
		ft_segment(&m->graph);
		m->graph.bs.xf = m->graph.bs.xi + 10;
		m->graph.bs.yf = m->graph.bs.yi - 25;
		ft_segment(&m->graph);
		m->graph.bs.xi = 20;
		m->graph.bs.xf = m->graph.bs.xi + 10;
		m->graph.bs.yi = 29;
		m->graph.bs.yf = m->graph.bs.yi + 15;
		ft_segment(&m->graph);
		m->graph.bs.xf = m->graph.bs.xi + 10;
		m->graph.bs.yf = m->graph.bs.yi - 25;
		ft_segment(&m->graph);
	}
	else if (option == 1)
	{
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.x_arc = 390;
		m->graph.bs.y_arc = 30;
		m->graph.bs.width = 20;
		m->graph.bs.height = 20;
		if (m->editor.ed_alt_map.onclick == 4)
			ft_full_ellipse(&m->graph, 0, 0);
		else
			ft_ellipse(&m->graph, 0, 0);
		m->graph.bs.color = m->editor.ed_alt_map.cross_button_color;
		m->graph.bs.xi = 400;
		m->graph.bs.xf = m->graph.bs.xi - 20;
		m->graph.bs.yi = 20;
		m->graph.bs.yf = m->graph.bs.yi + 20;
		ft_segment(&m->graph);
		m->graph.bs.xi = 401;
		m->graph.bs.xf = m->graph.bs.xi - 20;
		m->graph.bs.yi = 20;
		m->graph.bs.yf = m->graph.bs.yi + 20;
		ft_segment(&m->graph);
		m->graph.bs.xi = 380;
		m->graph.bs.xf = m->graph.bs.xi + 20;
		m->graph.bs.yi = 20;
		m->graph.bs.yf = m->graph.bs.yi + 20;
		ft_segment(&m->graph);
		m->graph.bs.xi = 381;
		m->graph.bs.xf = m->graph.bs.xi + 20;
		m->graph.bs.yi = 20;
		m->graph.bs.yf = m->graph.bs.yi + 20;
		ft_segment(&m->graph);
	}
	else if (option == 2)
	{
		m->graph.lt.couleur = 0x000000;
		m->graph.bs.x_arc = 390;
		m->graph.bs.y_arc = 305;
		m->graph.bs.width = 19;
		m->graph.bs.height = 19;
		ft_full_ellipse(&m->graph, 0, 0);
		m->graph.lt.couleur = 0xFFFFFF;
		m->graph.bs.x_arc = 390;
		m->graph.bs.y_arc = 305;
		m->graph.bs.width = 20;
		m->graph.bs.height = 20;
		ft_ellipse(&m->graph, 0, 0);
		m->graph.bs.color = 0xFFFFFF;
		m->graph.lt.posx = 384;
		m->graph.lt.posy = 319;
		m->graph.lt.coeff = 0.5;
		awklm_string_put(ft_itoa(m->editor.ed_alt_map.current_floor), &m->graph);
	}
	else if (option == 3)
	{
		m->graph.bs.xi = 388;
		m->graph.bs.xf = 372;
		m->graph.bs.yi = 265;
		m->graph.bs.yf = 250;
		ft_segment(&m->graph);
		m->graph.bs.xf = 380;
		ft_segment(&m->graph);
		m->graph.bs.yf = 220;
		ft_segment(&m->graph);
		m->graph.bs.xf = 396;
		ft_segment(&m->graph);
		m->graph.bs.yf = 250;
		ft_segment(&m->graph);
		m->graph.bs.xf = 404;
		ft_segment(&m->graph);
		m->graph.bs.xf = 388;
		m->graph.bs.yf = 265;
		ft_segment(&m->graph);
	}
	else if (option == 4)
	{
		m->graph.lt.coeff = 1;
		m->graph.lt.posx = 380;
		m->graph.lt.posy = 250;
		m->graph.bs.width = 16;
		m->graph.bs.height = 30;
		full_box(&m->graph);
		while (++i <= 32)
		{
			m->graph.bs.xi = 388;
			m->graph.bs.xf = 372 + i;
			m->graph.bs.yi = 265;
			m->graph.bs.yf = 250;
			ft_segment(&m->graph);
		}
	}
	else if (option == 5)
	{
		m->graph.lt.coeff = 1;
		m->graph.lt.posx = 380;
		m->graph.lt.posy = 200;
		m->graph.bs.width = 16;
		m->graph.bs.height = 30;
		full_box(&m->graph);
		while (++i <= 32)
		{
			m->graph.bs.xi = 388;
			m->graph.bs.xf = 372 + i;
			m->graph.bs.yi = 155;
			m->graph.bs.yf = 170;
			ft_segment(&m->graph);
		}
	}
	else if (option == 6)
	{
		m->graph.bs.xi = 380;
		m->graph.bs.xf = 380;
		m->graph.bs.yi = 200;
		m->graph.bs.yf = 170;
		ft_segment(&m->graph);
		m->graph.bs.xf = 372;
		ft_segment(&m->graph);
		m->graph.bs.xf = 388;
		m->graph.bs.yf = 155;
		ft_segment(&m->graph);
		m->graph.bs.xf = 404;
		m->graph.bs.yf = 170;
		ft_segment(&m->graph);
		m->graph.bs.xf = 396;
		ft_segment(&m->graph);
		m->graph.bs.yf = 200;
		ft_segment(&m->graph);
		m->graph.bs.xf = 380;
		ft_segment(&m->graph);
	}
	else if (option == 7)
	{
		while (++i <= m->editor.ed_alt_map.current_floor)
		{
			m->graph.bs.xi = 50;
			m->graph.bs.xf = m->graph.bs.xi + 100;
			m->graph.bs.yi = 250 - (i * 10);
			m->graph.bs.yf = m->graph.bs.yi + 50;
			ft_segment(&m->graph);
			m->graph.bs.xf += 180;
			ft_segment(&m->graph);
			m->graph.bs.xf -= 100;
			m->graph.bs.yf -= 50;
			ft_segment(&m->graph);
			m->graph.bs.xf = 50;
			ft_segment(&m->graph);
			while (++j < 180)
			{
				m->graph.bs.xi = 50 + j;
				m->graph.bs.xf = m->graph.bs.xi + 100;
				m->graph.bs.yi = 250 - (m->editor.ed_alt_map.current_floor * 10);
				m->graph.bs.yf = m->graph.bs.yi + 50;
				ft_segment(&m->graph);
			}
		}
		while (i++ < m->editor.ed_map.current_map_floor)
		{
			m->graph.bs.xi = 50;
			m->graph.bs.xf = m->graph.bs.xi + 100;
			m->graph.bs.yi = 150 - (i * 10);
			m->graph.bs.yf = m->graph.bs.yi + 50;
			ft_segment(&m->graph);
			m->graph.bs.xf += 180;
			ft_segment(&m->graph);
			m->graph.bs.xf -= 100;
			m->graph.bs.yf -= 50;
			ft_segment(&m->graph);
			m->graph.bs.xf = 50;
			ft_segment(&m->graph);
		}
	}
}

void	draw_editor_alt_map_floors(t_main *m)
{
	if (m->editor.ed_alt_map.onclick == 3)
		m->editor.ed_alt_map.valid_button_color = 0x3D2F2F;
	else
		m->editor.ed_alt_map.valid_button_color = 0xFFFFFF;
	if (m->editor.ed_alt_map.onclick == 4)
		m->editor.ed_alt_map.cross_button_color = 0x3D2F2F;
	else
		m->editor.ed_alt_map.cross_button_color = 0xFFFFFF;
	draw_editor_alt_map_floors_init_values(m, 0);
	draw_editor_alt_map_floors_init_values(m, 1);
	draw_editor_alt_map_floors_init_values(m, 2);
	if (m->editor.ed_alt_map.onclick == 5)
		draw_editor_alt_map_floors_init_values(m, 4);
	else
		draw_editor_alt_map_floors_init_values(m, 3);
	if (m->editor.ed_alt_map.onclick == 6)
		draw_editor_alt_map_floors_init_values(m, 5);
	else
		draw_editor_alt_map_floors_init_values(m, 6);
	draw_editor_alt_map_floors_init_values(m, 7);
}

void	write_editor_alt_map_menu_french(t_main *m)
{
	m->graph.lt.coeff = 0.50;
	m->graph.lt.posx = 154;
	m->graph.lt.posy = 113;
	m->graph.lt.couleur = m->editor.ed_alt_map.floors_color;
	m->graph.bs.color = m->editor.ed_alt_map.floors_color;
	awklm_string_put(m->env.lang.editor_alt_map_floors, &m->graph);
	m->graph.lt.posx = 144;
	m->graph.lt.posy = 248;
	m->graph.lt.couleur = m->editor.ed_alt_map.canvas_color;
	m->graph.bs.color = m->editor.ed_alt_map.canvas_color;
	awklm_string_put(m->env.lang.editor_alt_map_canvas, &m->graph);
}

void	write_editor_alt_map_menu_english(t_main *m)
{
	m->graph.lt.coeff = 0.50;
	m->graph.lt.posx = 154;
	m->graph.lt.posy = 113;
	m->graph.lt.couleur = m->editor.ed_alt_map.floors_color;
	m->graph.bs.color = m->editor.ed_alt_map.floors_color;
	awklm_string_put(m->env.lang.editor_alt_map_floors, &m->graph);
	m->graph.lt.posx = 154;
	m->graph.lt.posy = 248;
	m->graph.lt.couleur = m->editor.ed_alt_map.canvas_color;
	m->graph.bs.color = m->editor.ed_alt_map.canvas_color;
	awklm_string_put(m->env.lang.editor_alt_map_canvas, &m->graph);
}

void	write_editor_alt_map_menu(t_main *m)
{
	if (m->editor.ed_alt_map.onclick == 1)
		m->editor.ed_alt_map.floors_color = 0x3D2F2F;
	else
		m->editor.ed_alt_map.floors_color = 0xFFFFFF;
	if (m->editor.ed_alt_map.onclick == 2)
		m->editor.ed_alt_map.canvas_color = 0x3D2F2F;
	else
		m->editor.ed_alt_map.canvas_color = 0xFFFFFF;
	if (m->env.language_mode == 0)
		write_editor_alt_map_menu_english(m);
	else
		write_editor_alt_map_menu_french(m);
}

void	draw_editor_alt_map_menu(t_main *m)
{
	m->graph.lt.coeff = 1;
	m->graph.lt.posx = 50;
	m->graph.lt.posy = 135;
	m->graph.bs.color = 0xFFFFFF;
	m->graph.bs.width = 320;
	m->graph.bs.height = 70;
	if (m->editor.ed_alt_map.onclick == 1)
		full_box(&m->graph);
	else
		empty_box(&m->graph);
	m->graph.lt.posx = 50;
	m->graph.lt.posy = 270;
	if (m->editor.ed_alt_map.onclick == 2)
		full_box(&m->graph);
	else
		empty_box(&m->graph);
}

void	editor_alt_map(t_main *m)
{
	mlx_img(&m->graph, 3, 2, m->mlx.mlx_ptr);
	img_one_color(&m->graph.i.mlx, 0x3D2F2F);
	if (m->editor.alt_map == 1)
	{
		if (m->editor.ed_alt_map.mode == 0)
		{
			draw_editor_alt_map_menu(m);
			write_editor_alt_map_menu(m);
		}
		else if (m->editor.ed_alt_map.mode == 1)
			draw_editor_alt_map_floors(m);
		else if (m->editor.ed_alt_map.mode == 2)
			draw_editor_alt_map_canvas(m);
	}
	color_img_edges(&m->graph, 1, 0xFFFFFF);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 1080, 700);
}
