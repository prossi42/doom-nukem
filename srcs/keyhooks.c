/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:05:26 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/20 09:17:36 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		keyhooks(int keycode, t_main *m)
{
	(void)m;
	if (keycode == 65307)
		escape_exit(m);
	printf("Valeur du keycode : [%d]\n", keycode);
	return(0);
}
