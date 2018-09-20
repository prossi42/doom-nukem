/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 22:19:28 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/20 17:10:22 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		get_screen_size(t_main *m)
{
	
}

int		get_env(t_main *m, int option)
{
	if (option == 0)
	{
		if (!(m->env.display_struct = XOpenDisplay(NULL)))
			return(-1);
		if (!(m->env.screen_struct = DefaultScreenOfDisplay(m->env.display_struct)))
			return(-1);
		m->env.scr_width = m->env.screen_struct->width - 50;
		m->env.scr_height = m->env.screen_struct->height - 50;
	}
	return(0);
}
