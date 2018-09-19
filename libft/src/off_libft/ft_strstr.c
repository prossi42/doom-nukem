/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 12:33:21 by prossi            #+#    #+#             */
/*   Updated: 2017/02/27 12:57:30 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../../include/off_libft/libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(big) == 0 && ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (big[i] == little[j] && little[j] != '\0')
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big + (i - j));
		i = i - j;
		i++;
	}
	return (NULL);
}
