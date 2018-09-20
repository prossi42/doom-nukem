/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:05:54 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/20 11:17:23 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		struct_init_mlxstuff(t_main *m)
{
	m->mlx.mlx_ptr = NULL;
	m->mlx.mlx_ptr = NULL;
	return(0);
}

int		struct_init_env(t_main *m)
{
	m->env.display_struct = NULL;
	m->env.screen_struct = NULL;
	m->env.scr_height = 0;
	m->env.scr_height = 0;
	m->env.resize_mode = 0;
	return(0);
}

int		struct_init_main(t_main *m)
{
	(void)m;
	return(0);
}

int		struct_init(t_main *m)
{
	if (struct_init_main(m) == -1)
		return(-1);
	if (struct_init_env(m) == -1)
		return(-1);
	if (struct_init_mlxstuff(m) == -1)
		return(-1);
	return (0);
}
