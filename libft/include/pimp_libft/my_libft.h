/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 11:14:38 by prossi            #+#    #+#             */
/*   Updated: 2018/09/21 02:32:52 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_LIBFT_H
# define MY_LIBFT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../off_libft/libft.h"
# include "../graph_libft/graph_libft.h"

# define BUFF_SIZE 0xfffff

typedef struct				s_xmlsubchild
{
	struct s_xmlsubchild	*prev;
	char					*name;
	char					*content;
	int						n;
	struct s_xmlsubchild	*next;
}							t_xmlsubchild;

typedef struct				s_xmlchild
{
	struct s_xmlchild		*prev;
	t_xmlsubchild			*sc;
	char					*name;
	int						n;
	struct s_xmlchild		*next;
}							t_xmlchild;

typedef struct				s_xmlroot
{
	struct s_xmlroot		*prev;
	t_xmlchild				*c;
	char					*name;
	int						n;
	struct s_xmlroot		*next;
}							t_xmlroot;

typedef struct				s_xml
{
	t_xmlroot				*r;
	int						n_root;
	int						n_child;
	int						n_schild;
}							t_xml;

int			ft_openfile(char *file);
char		*ft_readfile(int fd);
int			ft_closefile(int fd);
int			get_next_line(const int fd, char **line);
char		*ft_realloc_free(char *init, int len);
char		*ft_strjoin_free(char *s1, char *s2, int option);
int			**ft_tabint(int x, int y);
char		*ft_strcat_lin(char *begin, char *end);
t_xml		xml_parser(char *buf);

#endif
