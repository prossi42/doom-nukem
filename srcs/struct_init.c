/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:05:54 by awk-lm            #+#    #+#             */
/*   Updated: 2018/11/06 01:41:17 by Awklm            ###   ########.fr       */
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
	m->env.lang.new_game = NULL;
	m->env.lang.load_game = NULL;
	m->env.lang.editor = NULL;
	m->env.lang.stats = NULL;
	m->env.lang.settings = NULL;
	m->env.lang.editor_new_map_settings = NULL;
	m->env.lang.editor_new_map_name = NULL;
	m->env.lang.editor_new_map_width = NULL;
	m->env.lang.editor_new_map_height = NULL;
	m->env.lang.editor_new_map_floors = NULL;
	m->env.lang.editor_new_map_ok = NULL;
	m->env.lang.editor_new_map_exit = NULL;
	m->env.lang.editor_exit_warnings_yes = NULL;
	m->env.lang.editor_exit_warnings_no = NULL;
	m->env.lang.editor_exit_save_current_map = NULL;
	m->env.lang.editor_exit_save_current_map2 = NULL;
	m->env.lang.editor_exit_error_map_dir = NULL;
	m->env.lang.editor_exit_error_map_dir2 = NULL;
	m->env.lang.editor_exit_retry = NULL;
	m->env.lang.editor_exit_already_exist = NULL;
	m->env.lang.editor_exit_already_exist2 = NULL;
	m->env.lang.editor_exit_change_it = NULL;
	m->env.lang.editor_exit_change_it_fem = NULL;
	m->env.lang.editor_exit_bad_width = NULL;
	m->env.lang.editor_exit_bad_width2 = NULL;
	m->env.lang.editor_exit_bad_height = NULL;
	m->env.lang.editor_exit_bad_height2 = NULL;
	m->env.lang.editor_exit_bad_floor = NULL;
	m->env.lang.editor_exit_bad_floor2 = NULL;
	m->env.lang.editor_exit_error_map_creat = NULL;
	m->env.lang.editor_exit_error_map_creat2 = NULL;
	return(0);
}

int		struct_init_env_files_images(t_main *m)
{
	m->env.file.images.awklm_logo = NULL;
	return(0);
}

int		struct_init_env_files_config(t_main *m)
{
	m->env.file.config.config_file = NULL;
	return(0);
}

int		struct_init_env_files(t_main *m)
{
	struct_init_env_files_images(m);
	struct_init_env_files_config(m);
	return(0);
}

int		struct_init_env_paths(t_main *m)
{
	m->env.path.path = NULL;
	m->env.path.data_path = NULL;
	m->env.path.config_path = NULL;
	m->env.path.images_path = NULL;
	m->env.path.maps_path = NULL;
	return(0);
}

int		struct_init_env(t_main *m)
{
	struct_init_env_lang(m);
	struct_init_env_paths(m);
	struct_init_env_files(m);
	m->env.scr_height = 0;
	m->env.scr_height = 0;
	m->env.resize_mode = 0;
	m->env.config_struct.n_root = 0;
	m->env.config_struct.n_child = 0;
	m->env.config_struct.n_schild = 0;
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

int		struct_init_editor_map(t_main *m)
{
	m->editor.ed_map.nb_loop = 0;
	m->editor.ed_map.maps_names = NULL;
	m->editor.ed_map.nb_maps = -1;
	m->editor.ed_map.current_map_name = NULL;
	m->editor.ed_map.current_map_width = 0;
	m->editor.ed_map.current_map_height = 0;
	m->editor.ed_map.current_map_floor = 0;
	m->editor.ed_map.map = NULL;
	return(0);
}

int		struct_init_editor_new_map(t_main *m)
{
	m->editor.ed_n_map.xmin = 710;
	m->editor.ed_n_map.xmax = 1210;
	m->editor.ed_n_map.ymin = 100;
	m->editor.ed_n_map.ymax = 900;
	m->editor.ed_n_map.onclick = 0;
	m->editor.ed_n_map.write = 0;
	m->editor.ed_n_map.n_map_name = ft_strnew(10);
	m->editor.ed_n_map.index_name = 0;
	m->editor.ed_n_map.n_map_width = ft_strnew(3);
	m->editor.ed_n_map.index_width = 0;
	m->editor.ed_n_map.n_map_height = ft_strnew(3);
	m->editor.ed_n_map.index_height = 0;
	m->editor.ed_n_map.n_map_floors = ft_strnew(1);
	m->editor.ed_n_map.index_floors = 0;
	return(0);
}

int		struct_init_editor_exit_warnings(t_main *m)
{
	m->editor.ed_ex_warn.xmin = 710;
	m->editor.ed_ex_warn.xmax = 1210;
	m->editor.ed_ex_warn.ymin = 320;
	m->editor.ed_ex_warn.ymax = 720;
	m->editor.ed_ex_warn.onclick = 0;
	return(0);
}

int		struct_init_editor_alt_map(t_main *m)
{
	m->editor.ed_alt_map.mode = 0;
	m->editor.ed_alt_map.xmin = 1080;
	m->editor.ed_alt_map.xmax = 1500;
	m->editor.ed_alt_map.ymin = 700;
	m->editor.ed_alt_map.ymax = 1035;
	m->editor.ed_alt_map.onclick = 0;
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
	m->editor.new_map_settings = 0;
	m->editor.exit_warnings = 0;
	m->editor.map = 0;
	struct_init_editor_menu(m);
	struct_init_editor_new_map(m);
	struct_init_editor_exit_warnings(m);
	struct_init_editor_map(m);
	struct_init_editor_alt_map(m);
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
