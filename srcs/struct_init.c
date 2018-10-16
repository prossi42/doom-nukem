/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:05:54 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/16 00:06:26 by Awklm            ###   ########.fr       */
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
	m->env.config_struct.n_root = 0;
	m->env.config_struct.n_child = 0;
	m->env.config_struct.n_schild = 0;
	m->env.path.path = NULL;
	m->env.path.data_path = NULL;
	m->env.path.config_path = NULL;
	m->env.path.config_file = NULL;
	m->env.time.launch_time = 0;
	m->env.time.exit_time = 0;
	m->env.language_mode = 0;
	m->env.awklm_prod_mode = 0;
	m->env.main_menu_mode = -2;
	return(0);
}

int		struct_init_main(t_main *m)
{
	m->fd = 0;
	return(0);
}
int		struct_init_editor_menu(t_main *m)
{
	m->editor.ed_menu.xmin = 1500;
	m->editor.ed_menu.xmax = 1920;
	m->editor.ed_menu.ymin = 965;
	m->editor.ed_menu.ymax = 1040;
	m->editor.ed_menu.onclick = 0;
	return(0);
}

int		struct_init_editor(t_main *m)
{
	m->editor.editor = -1;
	m->editor.main_map = 1;
	m->editor.alt_map = 1;
	m->editor.tools_picker = 1;
	m->editor.menu = 1;
	m->editor.img_picker = 1;
	struct_init_editor_menu(m);
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
	if (struct_init_editor(m) == -1)
		return(-1);
	return (0);
}
