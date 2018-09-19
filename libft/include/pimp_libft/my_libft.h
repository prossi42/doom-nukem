/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 11:14:38 by prossi            #+#    #+#             */
/*   Updated: 2018/09/19 17:24:17 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_LIBFT_H
# define MY_LIBFT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../off_libft/libft.h"
# include "../graph_libft/graph_libft.h"

# define BUFF_SIZE 0xfffff

int			ft_openfile(char *file);
char		*ft_readfile(int fd);
int			ft_closefile(int fd);
int			get_next_line(const int fd, char **line);
char		*ft_realloc_free(char *init, int len);
char		*ft_strjoin_free(char *s1, char *s2, int option);
int			**ft_tabint(int x, int y);

#endif
