/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 14:58:48 by prossi            #+#    #+#             */
/*   Updated: 2017/02/27 12:16:04 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/off_libft/libft.h"

int		ft_countw(char const *s, char c)
{
	int		i;
	int		j;
	int		nbw;

	i = 0;
	j = 0;
	nbw = 0;
	while (s[i])
	{
		while (s[i] != c && s[i + 1])
		{
			if (j == 0)
				nbw++;
			j++;
			i++;
		}
		if (j > 0)
		{
			j = 0;
			i--;
		}
		i++;
	}
	return (nbw);
}
