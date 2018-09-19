/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 10:10:39 by prossi            #+#    #+#             */
/*   Updated: 2017/02/27 12:49:43 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/off_libft/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	t_byte	*a;
	t_byte	*b;
	size_t	i;

	i = 0;
	a = (t_byte *)src;
	b = (t_byte *)dst;
	if (n == 0)
		return (dst);
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dst);
}
