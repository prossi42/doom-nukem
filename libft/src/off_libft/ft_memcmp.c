/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:26:13 by prossi            #+#    #+#             */
/*   Updated: 2017/02/27 12:49:31 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/off_libft/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	t_byte	*str1;
	t_byte	*str2;
	size_t	i;

	str1 = (t_byte *)s1;
	str2 = (t_byte *)s2;
	i = 0;
	if (str1 == str2 || n == 0)
		return (0);
	while (n--)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
