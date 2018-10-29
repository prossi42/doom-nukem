/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_mouse_click_hook.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 02:24:09 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/19 02:49:20 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		editor_new_map_settings_click_hook(t_main *m, int x, int y)
{
	(void)x;
	(void)y;
	if (m->editor.new_map_settings == 0)
	{
		m->editor.new_map_settings = 1;
		return(1);
	}
	return(0);
}

int		editor_mouse_click_hook(int button, int x, int y, t_main *m)
{
	int		status;

	status = 0;
	(void)button;
	if (m->editor.ed_menu.onclick == 1 || m->editor.new_map_settings == 1)
		status = editor_new_map_settings_click_hook(m, x, y);
	if (status == 1)
		editor(m);
	return(0);
}
