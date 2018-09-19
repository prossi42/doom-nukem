/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 10:58:38 by prossi            #+#    #+#             */
/*   Updated: 2017/02/27 12:55:10 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/off_libft/libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	t_size;
	size_t	i;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	t_size = size_dest + size_src;
	i = 0;
	while (src[i] && size_dest < size - 1 && size != 0)
		dest[size_dest++] = src[i++];
	dest[size_dest] = '\0';
	if (size < t_size - size_src)
		return (size + size_src);
	return (t_size);
}
