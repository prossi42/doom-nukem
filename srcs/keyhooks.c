/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:05:26 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/27 18:16:01 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"



int		keyhooks(int keycode, t_main *m)
{
	(void)m;
	if (keycode == 65307)
		escape_exit(m);
	if (keycode == 65361 || keycode == 65362 || keycode == 65363 || keycode == 65364)
	{
		if (m->env.resize_mode == 1)
			resize_mode(m, keycode, 1);
	}
	// printf("Valeur du keycode : [%d]\n", keycode);
	return(0);
}
