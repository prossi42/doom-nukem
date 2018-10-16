/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awklm_productions_mode.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:27:47 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/12 19:01:17 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	end_awklm_productions_mode(t_main *m)
{
	mlx_destroy_image(m->mlx.mlx_ptr, m->graph.i.mlx->img);
	mlx_clear_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
	mlx_destroy_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
	m->env.awklm_prod_mode = 2;
	mlx_launching_windows(m);
}

void	draw_awklm_productions_background_sd(t_main *m)
{
	awklm_productions_background_init_values(m, 15);
	awklm_productions_background_init_values(m, 16);
	awklm_productions_background_init_values(m, 17);
	awklm_productions_background_init_values(m, 18);
	awklm_productions_background_init_values(m, 19);
	awklm_productions_background_init_values(m, 20);
	awklm_productions_background_init_values(m, 21);
	awklm_productions_background_init_values(m, 22);
	awklm_productions_background_init_values(m, 23);
	awklm_productions_background_init_values(m, 24);
	awklm_productions_background_init_values(m, 25);
	awklm_productions_background_init_values(m, 26);
	awklm_productions_background_init_values(m, 27);
	awklm_productions_background_init_values(m, 28);
	awklm_productions_background_init_values(m, 29);
	awklm_productions_background_init_values(m, 30);
	awklm_productions_background_init_values(m, 31);
	awklm_productions_background_init_values(m, 32);
	awklm_productions_background_init_values(m, 33);
	awklm_productions_background_init_values(m, 34);
	awklm_productions_background_init_values(m, 35);
	awklm_productions_background_init_values(m, 36);
	awklm_productions_background_init_values(m, 37);
	awklm_productions_background_init_values(m, 38);
	awklm_productions_background_init_values(m, 39);
}

void	draw_awklm_productions_background(t_main *m)
{
	img_one_color(&m->graph.i.mlx, 0xFFFFFF);
	awklm_productions_background_init_values(m, 0);
	awklm_productions_background_init_values(m, 1);
	awklm_productions_background_init_values(m, 2);
	awklm_productions_background_init_values(m, 3);
	awklm_productions_background_init_values(m, 4);
	awklm_productions_background_init_values(m, 5);
	awklm_productions_background_init_values(m, 6);
	awklm_productions_background_init_values(m, 7);
	awklm_productions_background_init_values(m, 8);
	awklm_productions_background_init_values(m, 9);
	awklm_productions_background_init_values(m, 10);
	awklm_productions_background_init_values(m, 11);
	awklm_productions_background_init_values(m, 12);
	awklm_productions_background_init_values(m, 13);
	awklm_productions_background_init_values(m, 14);
	draw_awklm_productions_background_sd(m);
}

void	draw_awklm_productions(t_main *m)
{
	int		width;
	int		height;

	width = 0;
	height = 0;
	m->graph.i.img_x = m->env.scr_width;
	m->graph.i.img_y = m->env.scr_height;
	if (m->graph.i.n_img == 0)
		mlx_img(&m->graph, 0, 0, m->mlx.mlx_ptr);
	else
		fill_img(&m->graph.i.mlx, &m->graph.i, m->mlx.mlx_ptr);
	draw_awklm_productions_background(m);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, 0, 0);
	m->graph.i.mlx->img = mlx_xpm_file_to_image(m->mlx.mlx_ptr, "/Users/Awklm/Projects/doom-nukem/data/images/logo.xpm", &width, &height);
	mlx_put_image_to_window(m->mlx.mlx_ptr, m->mlx.win_ptr, \
		m->graph.i.mlx->img, (m->env.scr_width / 2) - 57.5, (m->env.scr_height / 2) - 66);
	m->env.awklm_prod_mode = 1;
}

void	awklm_productions_mode(t_main *m, int option)
{
	if (option == 0)
		draw_awklm_productions(m);
	else
		end_awklm_productions_mode(m);
}
