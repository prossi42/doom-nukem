/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_mouse_click_hook.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 02:24:09 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/31 15:08:25 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		editor_menu_click_hook(t_main *m)
{
	if (m->editor.ed_menu.onclick == 1 && m->editor.new_map_settings == 0 && m->editor.exit_warnings == 0)
	{
		m->editor.new_map_settings = 1;
		return(1);
	}
	return(0);
}

int		editor_new_map_settings_click_hook(t_main *m)
{
	if (m->editor.new_map_settings == 1)
	{
		if (m->editor.ed_n_map.onclick == 1)
			m->editor.ed_n_map.write = 1;
		else if (m->editor.ed_n_map.onclick == 2)
			m->editor.ed_n_map.write = 2;
		else if (m->editor.ed_n_map.onclick == 3)
			m->editor.ed_n_map.write = 3;
		else if (m->editor.ed_n_map.onclick == 4)
			m->editor.ed_n_map.write = 4;
		else if (m->editor.ed_n_map.onclick == 5)
		{
			m->editor.ed_n_map.write = 0;
			m->editor.ed_n_map.onclick = 0;
			m->editor.new_map_settings = 0;
			m->editor.map = 1;
			m->editor.exit_warnings = 1;
		}
		else if (m->editor.ed_n_map.onclick == 6)
		{
			m->editor.new_map_settings = 0;
			m->editor.ed_n_map.onclick = 0;
			m->editor.ed_n_map.write = 0;
			ft_bzero(m->editor.ed_n_map.n_map_name, ft_strlen(m->editor.ed_n_map.n_map_name));
			m->editor.ed_n_map.index_name = 0;
			ft_bzero(m->editor.ed_n_map.n_map_width, ft_strlen(m->editor.ed_n_map.n_map_width));
			m->editor.ed_n_map.index_width = 0;
			ft_bzero(m->editor.ed_n_map.n_map_height, ft_strlen(m->editor.ed_n_map.n_map_height));
			m->editor.ed_n_map.index_height = 0;
			ft_bzero(m->editor.ed_n_map.n_map_floors, ft_strlen(m->editor.ed_n_map.n_map_floors));
			m->editor.ed_n_map.index_floors = 0;
		}
		return(1);
	}
	return(0);
}

int		editor_exit_warnings_mouse_click_hook(t_main *m)
{
	if (m->editor.exit_warnings == 1)
	{
		if (m->editor.ed_ex_warn.onclick == 1)
		{
			(void)m;
			//Procedure de sauvegarde de la map deja ouverte avant d'ouvrir la nouvelle
		}
		else
		{
			m->editor.map = 0;
			editor_new_map_settings_checking_values(m);
		}
		return(1);
	}
	return(0);
}

int		editor_mouse_click_hook(int button, int x, int y, t_main *m)
{
	int		status;

	status = 0;
	(void)button;
	(void)x;
	(void)y;
	if (m->editor.ed_menu.onclick != 0)
		status = editor_menu_click_hook(m);
	else if (m->editor.ed_n_map.onclick != 0)
		status = editor_new_map_settings_click_hook(m);
	else if (m->editor.ed_ex_warn.onclick != 0)
		status = editor_exit_warnings_mouse_click_hook(m);
	if (status == 1)
		editor(m);
	return(0);
}
