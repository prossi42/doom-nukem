/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_lin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:55:01 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/20 17:00:53 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pimp_libft/my_libft.h"

char		*ft_strcat_lin(char *begin, char *end)
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	j = -1;
	tmp = NULL;
	if (!(tmp = ft_strnew(ft_strlen(begin) + ft_strlen(end))))
		return(NULL);
	tmp = ft_strcpy(tmp, begin);
	while (tmp[++i])
		;
	while (end[++j])
	{
		tmp[i++] = end[j];
	}
	return(tmp);
}
