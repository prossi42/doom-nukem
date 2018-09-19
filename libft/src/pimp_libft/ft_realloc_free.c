/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 03:02:40 by prossi            #+#    #+#             */
/*   Updated: 2017/05/27 03:12:14 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pimp_libft/my_libft.h"

char		*ft_realloc_free(char *init, int len)
{
	char		*end;
	int			i;

	i = 0;
	end = ft_strnew(len + ft_strlen(init));
	while (init[i])
	{
		end[i] = init[i];
		i++;
	}
	end[i] = '\0';
	ft_strdel(&init);
	return (end);
}
