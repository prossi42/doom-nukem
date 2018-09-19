/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:09:12 by prossi            #+#    #+#             */
/*   Updated: 2017/02/27 12:56:49 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/off_libft/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char*)big);
	i = 0;
	j = 0;
	while (big[j] && j < len)
	{
		if (big[j] == little[i])
			i++;
		else
		{
			j = j - i;
			i = 0;
		}
		if (little[i] == '\0')
			return ((char*)&(big[j - i + 1]));
		j++;
	}
	return (NULL);
}
