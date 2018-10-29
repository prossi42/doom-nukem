#ifndef DOOMNUKEM_H
# define DOOMNUKEM_H

# include "my_libs.h"
# include "../mlx/mlx.h"
// # include <X11/Xlib.h>
# include <stdio.h>
# include <stdlib.h>
// # include <libssh/libssh.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <ifaddrs.h>
# include <dirent.h>
# include <errno.h>
# include <string.h>
# include <limits.h>
# include <time.h>

# define BUFF_SIZE 0xfffff

typedef struct		s_editor_menu
{
	int				xmin;
	int				xmax;
	int				ymin;
	int				ymax;
	int				onclick;
	int				new_file_color;
	int				del_file_color;
	int				save_file_color;
	int				load_file_color;
	int				exit_color;
	int				settings_color;
	int				back_settings_color;
}					t_editor_menu;

typedef	struct		s_editor
{
	int				editor;
	//
	int				menu;
	t_editor_menu	ed_menu;
	//
	int				tools_picker;
	int				alt_map;
	int				main_map;
	int				img_picker;
	int				new_map_settings;
}					t_editor;

typedef struct		s_lang
{
	char			*set_screen_size_a;
	char			*set_screen_size_b;
	char			*set_language;
	int				select_lang;
	char			*new_game;
	char			*load_game;
	char			*editor;
	char			*stats;
	char			*settings;
	char			*editor_new_map_settings;
	char			*editor_new_map_name;
}					t_lang;

typedef struct		s_paths
{
	char			*path;
	char			*data_path;
	char			*config_path;
	char			*config_file;
}					t_paths;

typedef struct		s_times
{
	time_t			launch_time;
	time_t			exit_time;
}					t_times;

typedef struct		s_mlxstuff
{
	void			*mlx_ptr;
	void			*win_ptr;
	int				n_img;
}					t_mlxstuff;

typedef struct		s_env
{
	int				scr_height;
	int				scr_width;
	int				resize_mode;
	t_xml			config_struct;
	t_xml			map_struct;
	t_paths			path;
	t_lang			lang;
	t_times			time;
	int				language_mode;
	int				awklm_prod_mode;
	int				main_menu_mode;
}					t_env;

typedef struct		s_main
{
	t_env			env;
	t_mlxstuff		mlx;
	int				fd;
	t_graph			graph;
	t_editor		editor;
}					t_main;

			// Environment
int					get_env(t_main *main);
int					set_env(t_main *m);
int					set_time(t_main *m, int option);
int					set_struct_lang_fr(t_main *m);
int					set_struct_lang_en(t_main *m);
int					set_struct_lang_not_chosen(t_main *m);

			// initialize
int					struct_init(t_main *m);

			// Minilibx
void				mlx_processes(t_main *m);
int					main_keyhooks(int keycode, t_main *m);
void				mlx_launching_windows(t_main *m);
void				mlx_launching_editor(t_main *m);

			// Modes
void				resize_mode(t_main *m, int keycode, int option);
void				resize_mode_init_values(t_main *m, int option);
void				choose_language_mode(t_main *m, int keycode, int option);
void				choose_language_mode_init_values(t_main *m, int option);
void				awklm_productions_mode(t_main *m, int option);
void				awklm_productions_background_init_values(t_main *m, int option);
void				main_menu_mode(t_main *m, int keycode, int option);
void				main_menu_mode_init_values(t_main *m, int option);
void				main_menu_background_init_values(t_main *m, int option);
void				main_menu_write_init_values(t_main *m, int option);

			// Editor
void				editor(t_main *m);
void				editor_menu(t_main *m);
int					editor_mouse_move_hook(int x, int y, t_main *m);
int					editor_keyhooks(int keycode, t_main *m);
void				editor_new_map_settings(t_main *m);
int					editor_mouse_click_hook(int button, int x, int y, t_main *m);

			// Exit
void				escape_exit(t_main *m);
void				error_exit(int option, t_main *m);



#endif
