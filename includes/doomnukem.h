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

# define _XOPEN_SOURCE 500

# define BUFF_SIZE 0xfffff

typedef struct		s_mlxstuff
{
	void			*mlx_ptr;
	void			*win_ptr;
}					t_mlxstuff;

typedef struct		s_env
{
	Display			*display_struct;
	Screen			*screen_struct;
	int				scr_height;
	int				scr_width;
	int				resize_mode;
	t_xml			xml_struct;
}					t_env;

typedef struct		s_main
{
	t_env			env;
	t_mlxstuff		mlx;
	char			*r_buffer;
	int				fd;
}					t_main;

int					get_env(t_main *main);
void				mlx_processes(t_main *m);
int					keyhooks(int keycode, t_main *m);
void				escape_exit(t_main *m);
int					struct_init(t_main *m);
void				error_exit(int option, t_main *m);
void				mlx_create_windows(t_main *m);



#endif
