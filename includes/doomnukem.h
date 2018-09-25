#ifndef DOOMNUKEM_H
# define DOOMNUKEM_H
# include "my_libs.h"
# include "../minilibx/minilibx_linux/includes/mlx.h"
# include <X11/Xlib.h>
# include <stdio.h>
# include <stdlib.h>
# include <libssh/libssh.h>
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
}					t_times;

typedef struct		s_mlxstuff
{
	void			*mlx_ptr;
	void			*win_ptr;
}					t_mlxstuff;

typedef struct		s_env
{
	int				scr_height;
	int				scr_width;
	int				resize_mode;
	t_xml			xml_struct;
	t_paths			path;
	t_times			time;
}					t_env;

typedef struct		s_main
{
	t_env			env;
	t_mlxstuff		mlx;
	int				fd;
}					t_main;

int					get_env(t_main *main);
int					set_env(t_main *m);
void				mlx_processes(t_main *m);
int					keyhooks(int keycode, t_main *m);
void				escape_exit(t_main *m);
int					struct_init(t_main *m);
void				error_exit(int option, t_main *m);
void				mlx_create_windows(t_main *m);



#endif
