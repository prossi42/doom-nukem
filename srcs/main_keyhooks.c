/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_keyhooks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 13:54:56 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/11 13:58:50 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		main_keyhooks(int keycode, t_main *m)
{
	printf("Keycode : [%d]\n", keycode);
	if (keycode == 53)
		escape_exit(m);
	else if (keycode == 123 || keycode == 124 || keycode == 125 || keycode == 126)
	{
		if (m->env.language_mode == -1)
			choose_language_mode(m, keycode, 1);
		else
		{
			if (m->env.resize_mode == 1)
				resize_mode(m, keycode, 1);
			else
				if (m->env.main_menu_mode != -1)
					main_menu_mode(m, keycode, 1);
		}
	}
	else if (keycode == 36)
	{
		if (m->env.language_mode == -1)
			choose_language_mode(m, keycode, 2);
		else
		{
			if (m->env.resize_mode == 1)
				resize_mode(m, keycode, 2);
			else
			{
				if (m->env.awklm_prod_mode == 1)
					awklm_productions_mode(m, 1);
				else
					main_menu_mode(m, 0, 2);
			}
		}

	}
	return(0);
}
