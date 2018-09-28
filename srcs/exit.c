/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:12:09 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/26 12:46:43 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	escape_exit(t_main *m)
{
	// free(e->img.data);
	// mlx_destroy_image(e->img.mlx_ptr, e->img.win_ptr);
	// ntmleaks(e);
	set_time(m, 1);
	xml_writer(&m->env.xml_struct, m->fd, m->env.path.config_file);
	mlx_clear_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
	mlx_destroy_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
	ft_memdel((void **)&m);
	exit(0);
}

void	error_exit(int option, t_main *m)
{
	if (option > 0)
	{
		ft_strdel(&m->env.path.path);
		ft_strdel(&m->env.path.data_path);
		ft_strdel(&m->env.path.config_path);
		ft_strdel(&m->env.path.config_file);
	}
	if (option > -1)
		exit(-1);
	escape_exit(m);
}
