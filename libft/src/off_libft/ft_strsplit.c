/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 13:30:19 by prossi            #+#    #+#             */
/*   Updated: 2017/02/27 12:57:20 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/off_libft/libft.h"
#include <stdlib.h>

static int			ft_countwords(char const *s, char c)
{
	int				i;
	int				nbw;

	i = 0;
	nbw = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			nbw++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (nbw);
}

static char			*ft_newstr(const char *s, char c, int i)
{
	char			*str;
	int				j;

	j = i;
	while (s[j] && s[j] != c)
		j++;
	str = (char *)malloc(sizeof(char) * (j - i) + 1);
	j = 0;
	while (s[i] && s[i] != c)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**tab;
	int				i;
	int				j;
	int				nbw;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	nbw = ft_countwords(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * nbw + 1)))
		return (NULL);
	while (j < nbw && s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		tab[j++] = ft_newstr(s, c, i);
		while (s[i] && s[i] != c)
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
