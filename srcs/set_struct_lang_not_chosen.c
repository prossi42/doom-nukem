/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_struct_lang_not_chosen.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 21:51:47 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/04 22:05:42 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		set_struct_lang_not_chosen(t_main *m)
{
	if (!(m->env.lang.set_language = ft_strdup("Language / Langue")))
		return(-1);
	return(0);
}
