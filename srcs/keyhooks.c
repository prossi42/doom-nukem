/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:05:26 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/01 19:28:37 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"



int		keyhooks(int keycode, t_main *m)
{
	printf("Keycode : [%d]\n", keycode);
	if (keycode == 53)
		escape_exit(m);
	else if (keycode == 123 || keycode == 124 || keycode == 125 || keycode == 126)
	{
		if (m->env.resize_mode == 1)
			resize_mode(m, keycode, 1);
	}
	else if (keycode == 36)
		if (m->env.resize_mode == 1)
			resize_mode(m, keycode, 2);
	// printf("Valeur du keycode : [%d]\n", keycode);
	return(0);
}
