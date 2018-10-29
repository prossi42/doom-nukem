/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_struct_lang_en.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:15:56 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/29 08:25:11 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		set_struct_lang_en(t_main *m)
{
	m->env.lang.set_screen_size_a = ft_strdup("Change windows size with directional arrows");
	m->env.lang.set_screen_size_b = ft_strdup("when it.s done press : enter");
	m->env.lang.new_game = ft_strdup("new game");
	m->env.lang.load_game = ft_strdup("Load game");
	m->env.lang.editor = ft_strdup("Editor");
	m->env.lang.stats = ft_strdup("stats");
	m->env.lang.settings = ft_strdup("settings");
	m->env.lang.editor_new_map_settings = ft_strdup("New map settings");
	m->env.lang.editor_new_map_name = ft_strdup("Name");
	return(0);
}
