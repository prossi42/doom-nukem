/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:05:26 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/25 17:12:32 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	screen_sizing_hook(t_main *m, int keycode, int option)
{
	char	*tmp;

	tmp = NULL;
	if (option == 0)
	{
		if (m->env.resize_mode == 0 && keycode == 65513)
			m->env.resize_mode = 1;
		else if (m->env.resize_mode == 1 && keycode == 65293)
			m->env.resize_mode = 2;
		else if (m->env.resize_mode == 2 && keycode == 65513)
			m->env.resize_mode = 3;
		else if (m->env.resize_mode == 3 && keycode == 65293)
		{
			m->env.resize_mode = 0;
			tmp = ft_strcat_lin("config/screen/width/", ft_itoa(m->env.scr_width));
			xml_parser(tmp, &m->env.xml_struct, 4, 0);
			ft_strdel(&tmp);
			tmp = ft_strcat_lin("config/screen/height/", ft_itoa(m->env.scr_height));
			xml_parser(tmp, &m->env.xml_struct, 4, 0);
			ft_strdel(&tmp);
			xml_writer(&m->env.xml_struct, m->fd, m->env.path.config_file);
		}
	}
	else if (option == 1)
	{
		if (keycode == 65362)
			m->env.scr_height -= 10;
		else if (keycode == 65364)
			m->env.scr_height += 10;
		else if (keycode == 65361)
			m->env.scr_width -= 10;
		else if (keycode == 65363)
			m->env.scr_width += 10;
		mlx_clear_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
		mlx_destroy_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
		mlx_create_windows(m);
	}
}

int		keyhooks(int keycode, t_main *m)
{
	(void)m;
	if (keycode == 65307)
		escape_exit(m);
	if (keycode == 65513 || keycode == 65293)
		screen_sizing_hook(m, keycode, 0);
	if (keycode == 65361 || keycode == 65362 || keycode == 65363 || keycode == 65364)
	{
		if (m->env.resize_mode == 2)
			screen_sizing_hook(m, keycode, 1);
	}
	// printf("Valeur du keycode : [%d]\n", keycode);
	return(0);
}
