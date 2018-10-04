/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_struct_lang_en.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:15:56 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/04 01:54:40 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		set_struct_lang_en(t_main *m)
{
	m->env.lang.set_screen_size_a = ft_strdup("Change windows size with directional arrows");
	m->env.lang.set_screen_size_b = ft_strdup("when it.s done press : enter");
	return(0);
}
