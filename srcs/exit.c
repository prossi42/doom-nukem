/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:12:09 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/20 09:20:11 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	escape_exit(t_main *m)
{
	// free(e->img.data);
	// mlx_destroy_image(e->img.mlx_ptr, e->img.win_ptr);
	// ntmleaks(e);
	mlx_clear_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
	mlx_destroy_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
	ft_memdel((void **)&m);
	exit(0);
}
