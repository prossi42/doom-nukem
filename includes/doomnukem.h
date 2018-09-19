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

typedef struct		s_env
{
	Display			*display_struct;
	Screen			*screen_struct;
	int				scr_height;
	int				scr_width;
}					t_env;

typedef struct		s_main
{
	t_env			env;
}					t_main;

int		get_env(t_main *main, int option);


#endif
