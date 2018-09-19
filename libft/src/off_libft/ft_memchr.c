/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 14:42:26 by prossi            #+#    #+#             */
/*   Updated: 2017/02/27 12:49:21 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/off_libft/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_byte	*src;
	t_byte	uncharc;
	size_t	i;

	src = (t_byte *)s;
	i = 0;
	uncharc = (t_byte)c;
	while (n--)
	{
		if (src[i] == uncharc)
			return (src + i);
		i++;
	}
	return (NULL);
}
