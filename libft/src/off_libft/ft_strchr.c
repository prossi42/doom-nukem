/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:03:45 by prossi            #+#    #+#             */
/*   Updated: 2017/02/27 12:52:20 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../../include/off_libft/libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	charc;

	charc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == charc)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (charc == '\0')
		return ((char *)s + i);
	return (NULL);
}
