/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 11:27:40 by prossi            #+#    #+#             */
/*   Updated: 2017/06/19 22:01:59 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pimp_libft/my_libft.h"

char		*ft_strjoin_free(char *s1, char *s2, int option)
{
	char		*str;
	size_t		len1;
	size_t		len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * (len1 + len2))))
		return (NULL);
	if (!(str = ft_strcpy(str, s1)))
		return (NULL);
	if (!(str = ft_strcat(str, s2)))
		return (NULL);
	if (option == 2)
		free(s2);
	return (str);
}

char		*ft_realloc(char *stock, int len)
{
	char			*newstock;
	int				i;

	i = 0;
	newstock = ft_strnew(len + ft_strlen(stock));
	while (stock[i])
	{
		newstock[i] = stock[i];
		i++;
	}
	ft_strdel(&stock);
	return (newstock);
}

int			ft_overtake(char **overtake, char **tmp, char **line)
{
	int			i;
	char		*tmp2;

	i = 0;
	while ((*overtake)[i])
	{
		if ((*overtake)[i] == '\n')
		{
			*line = ft_strsub(*overtake, 0, i);
			tmp2 = ft_strsub(*overtake, i + 1, (ft_strlen(*overtake) - i));
			ft_strdel(overtake);
			*overtake = tmp2;
			return (1);
		}
		i++;
	}
	*tmp = ft_realloc(*tmp, ft_strlen(*overtake));
	*tmp = ft_strjoin_free(*overtake, *tmp, 2);
	ft_strdel(overtake);
	return (0);
}

int			ft_tmp(char **overtake, char **tmp, char **line)
{
	int			j;

	j = 0;
	while ((*tmp)[j])
	{
		if ((*tmp)[j] == '\n')
		{
			*line = ft_strsub(*tmp, 0, j);
			if ((*tmp)[j + 1] != '\0')
				*overtake = ft_strsub(*tmp, j + 1, (ft_strlen(*tmp) - j));
			ft_strdel(tmp);
			return (1);
		}
		j++;
		if ((*tmp)[j] == '\0')
		{
			*line = ft_strsub(*tmp, 0, j);
			ft_strdel(tmp);
			return (1);
		}
	}
	ft_strdel(tmp);
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
	static char		*overtake = NULL;
	int				ret;

	ret = 0;
	if (fd < 0 || !line || read(fd, buf, 0) == -1)
		return (-1);
	tmp = ft_strnew(BUFF_SIZE);
	*line = NULL;
	if (overtake)
		if (ft_overtake(&overtake, &tmp, line))
			return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		tmp = ft_realloc(tmp, ft_strlen(buf));
		tmp = ft_strcat(tmp, buf);
		if (ft_strchr(tmp, '\n'))
			break ;
	}
	if (ft_tmp(&overtake, &tmp, line))
		return (1);
	ft_strdel(&tmp);
	return (0);
}
