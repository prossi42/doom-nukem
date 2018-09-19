/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 03:51:51 by prossi            #+#    #+#             */
/*   Updated: 2017/05/31 07:31:32 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pimp_libft/my_libft.h"

char		*ft_strjoin_free(char *s1, char *s2, int option)
{
	char		*str;
	size_t		len1;
	size_t		len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(str = ft_strnew(len1 + len2)))
		return (NULL);
	if (!(str = ft_strcpy(str, s1)))
		return (NULL);
	if (!(str = ft_strcat(str, s2)))
		return (NULL);
	if (option == 1 || option == 3)
		ft_strdel(&s1);
	if (option == 2 || option == 3)
		ft_strdel(&s2);
	return (str);
}
