/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 11:30:47 by prossi            #+#    #+#             */
/*   Updated: 2018/09/21 00:42:08 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pimp_libft/my_libft.h"
#include <stdlib.h>

char	*ft_readfile(int fd)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];
	char	*tmp;

	if (!(tmp = ft_strnew(BUFF_SIZE)))
		return (NULL);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1)
		{
			ft_putendl("\nNothing to read\n");
			return(NULL);
		}
		buf[ret] = '\0';
		tmp = ft_strcat(tmp, buf);
		tmp = ft_realloc_free(tmp, ft_strlen(buf));
	}
	close(fd);
	return (tmp);
}
