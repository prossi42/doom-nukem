/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:05:54 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/05 19:41:14 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		struct_init_mlxstuff(t_main *m)
{
	m->mlx.mlx_ptr = NULL;
	m->mlx.mlx_ptr = NULL;
	m->mlx.n_img = 0;
	return(0);
}

int		struct_init_env_lang(t_main *m)
{
	m->env.lang.set_screen_size_a = NULL;
	m->env.lang.set_screen_size_b = NULL;
	m->env.lang.set_language = NULL;
	m->env.lang.select_lang = 0;
	return(0);
}

int		struct_init_env(t_main *m)
{
	struct_init_env_lang(m);
	m->env.scr_height = 0;
	m->env.scr_height = 0;
	m->env.resize_mode = 0;
	m->env.xml_struct.n_root = 0;
	m->env.xml_struct.n_child = 0;
	m->env.xml_struct.n_schild = 0;
	m->env.path.path = NULL;
	m->env.path.data_path = NULL;
	m->env.path.config_path = NULL;
	m->env.path.config_file = NULL;
	m->env.time.launch_time = 0;
	m->env.time.exit_time = 0;
	m->env.lang_value = 0;
	return(0);
}

int		struct_init_main(t_main *m)
{
	m->fd = 0;
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
