/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:05:26 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/05 19:26:18 by Awklm            ###   ########.fr       */
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
		if (m->env.lang_value == -1)
			choose_language_mode(m, keycode, 1);
		else
			if (m->env.resize_mode == 1)
				resize_mode(m, keycode, 1);

	}
	else if (keycode == 36)
	{
		if (m->env.lang_value == -1)
			choose_language_mode(m, keycode, 2);
		else
			if (m->env.resize_mode == 1)
				resize_mode(m, keycode, 2);
	}
	return(0);
}
