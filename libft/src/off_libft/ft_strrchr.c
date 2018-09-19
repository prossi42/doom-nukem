/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:31:53 by prossi            #+#    #+#             */
/*   Updated: 2017/02/27 12:57:07 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../../include/off_libft/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	charc;

	charc = (char)c;
	i = ft_strlen(s);
	if (charc == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == charc)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
