/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_mouse_move_hook.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 23:26:25 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/09 10:14:09 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		editor_menu_mouse_move_hook(t_main *m, int x, int y)
{
	int		status;

	status = m->editor.ed_menu.onclick;
	m->editor.menu = 1;
	//EDITOR MENU
	if (x > m->editor.ed_menu.xmin + 10 && x < m->editor.ed_menu.xmin + 50 && y > m->editor.ed_menu.ymin + 10)
		m->editor.ed_menu.onclick = 1;
	else if (x > m->editor.ed_menu.xmin + 70 && x < m->editor.ed_menu.xmin + 110 && y > m->editor.ed_menu.ymin + 10)
		m->editor.ed_menu.onclick = 2;
	else if (x > m->editor.ed_menu.xmin + 130 && x < m->editor.ed_menu.xmin + 170 && y > m->editor.ed_menu.ymin + 10)
		m->editor.ed_menu.onclick = 3;
	else if (x > m->editor.ed_menu.xmin + 190 && x < m->editor.ed_menu.xmin + 230 && y > m->editor.ed_menu.ymin + 10)
		m->editor.ed_menu.onclick = 4;
	else if (x > m->editor.ed_menu.xmin + 250 && x < m->editor.ed_menu.xmin + 290 && y > m->editor.ed_menu.ymin + 10)
		m->editor.ed_menu.onclick = 5;
	else if (x > m->editor.ed_menu.xmin + 310 && x < m->editor.ed_menu.xmin + 350 && y > m->editor.ed_menu.ymin + 10)
		m->editor.ed_menu.onclick = 6;
	else
		m->editor.ed_menu.onclick = 0;
	if (status != m->editor.ed_menu.onclick)
		return(1);
	else
		return(0);
}

int		editor_new_map_mouse_move_hook(t_main *m, int x, int y)
{
	int		status;

	status = m->editor.ed_n_map.onclick;
	if (m->editor.new_map_settings == 1)
	{
		if (y > m->editor.ed_n_map.ymin + 180 && y < m->editor.ed_n_map.ymin + 680)
		{
			if (x > m->editor.ed_n_map.xmin + 125 && x < m->editor.ed_n_map.xmin + 375)
			{
				if (y > m->editor.ed_n_map.ymin + 180 && y < m->editor.ed_n_map.ymin + 230)
					m->editor.ed_n_map.onclick = 1;
				else if (y > m->editor.ed_n_map.ymin + 330 && y < m->editor.ed_n_map.ymin + 380)
					m->editor.ed_n_map.onclick = 2;
				else if (y > m->editor.ed_n_map.ymin + 480 && y < m->editor.ed_n_map.ymin + 530)
					m->editor.ed_n_map.onclick = 3;
				else if (y > m->editor.ed_n_map.ymin + 630 && y < m->editor.ed_n_map.ymin + 680)
					m->editor.ed_n_map.onclick = 4;
				else
					m->editor.ed_n_map.onclick = 0;
				return(0);
			}
		}
		else if (y > m->editor.ed_n_map.ymin + 720 && y < m->editor.ed_n_map.ymin + 770)
		{
			if (x > m->editor.ed_n_map.xmin + 60 && x < m->editor.ed_n_map.xmin + 220)
				m->editor.ed_n_map.onclick = 5;
			else if (x > m->editor.ed_n_map.xmin + 280 && x < m->editor.ed_n_map.xmin + 440)
				m->editor.ed_n_map.onclick = 6;
			else
				m->editor.ed_n_map.onclick = 0;
		}
		else
			m->editor.ed_n_map.onclick = 0;
	}
	if (status != m->editor.ed_n_map.onclick)
		return(1);
	else
		return(0);
}

int		editor_exit_warnings_mouse_move_hook(t_main *m, int x, int y)
{
	int		status;

	status = m->editor.ed_ex_warn.onclick;
	if (m->editor.exit_warnings == 1)
	{
		if (y > m->editor.ed_ex_warn.ymin + 320 && y < m->editor.ed_ex_warn.ymin + 370)
		{
			if (x > m->editor.ed_ex_warn.xmin + 60 && x < m->editor.ed_ex_warn.xmin + 220)
				m->editor.ed_ex_warn.onclick = 1;
			else if (x > m->editor.ed_ex_warn.xmin + 280 && x < m->editor.ed_ex_warn.xmin + 440)
				m->editor.ed_ex_warn.onclick = 2;
			else
				m->editor.ed_ex_warn.onclick = 0;
		}
		else
			m->editor.ed_ex_warn.onclick = 0;
	}
	if (status != m->editor.ed_ex_warn.onclick)
		return(1);
	return(0);
}

int		editor_alt_map_mouse_move_hook(t_main *m, int x, int y)
{
	int		status;

	status = m->editor.ed_alt_map.onclick;
	if (m->editor.alt_map == 1)
	{
		if (m->editor.ed_alt_map.mode == 0)
		{
			if (x > m->editor.ed_alt_map.xmin + 50 && x < m->editor.ed_alt_map.xmin + 370)
			{
				if (y > m->editor.ed_alt_map.ymin + 65 && y < m->editor.ed_alt_map.ymin + 135)
					m->editor.ed_alt_map.onclick = 1;
				else if (y > m->editor.ed_alt_map.ymin + 200 && y < m->editor.ed_alt_map.ymin + 270)
					m->editor.ed_alt_map.onclick = 2;
				else
					m->editor.ed_alt_map.onclick = 0;
			}
			else
				m->editor.ed_alt_map.onclick = 0;
		}
		else if (m->editor.ed_alt_map.mode == 1)
		{
			if (y > m->editor.ed_alt_map.ymin + 10 && y < m->editor.ed_alt_map.ymin + 50)
			{
				if (x > m->editor.ed_alt_map.xmin + 10 && x < m->editor.ed_alt_map.xmin + 50)
					m->editor.ed_alt_map.onclick = 3;
				else if (x > m->editor.ed_alt_map.xmax - 50 && x < m->editor.ed_alt_map.xmax - 10)
					m->editor.ed_alt_map.onclick = 4;
				else
					m->editor.ed_alt_map.onclick = 0;
			}
			else if (y > m->editor.ed_alt_map.ymin + 220 && y < m->editor.ed_alt_map.ymin + 265)
			{
				if (x > m->editor.ed_alt_map.xmin + 372 && x < m->editor.ed_alt_map.xmin + 404)
					m->editor.ed_alt_map.onclick = 5;
				else
					m->editor.ed_alt_map.onclick = 0;
			}
			else if (y > m->editor.ed_alt_map.ymin + 155 && y < m->editor.ed_alt_map.ymin + 200)
			{
				if (x > m->editor.ed_alt_map.xmin + 372 && x < m->editor.ed_alt_map.xmin + 404)
					m->editor.ed_alt_map.onclick = 6;
				else
					m->editor.ed_alt_map.onclick = 0;
			}
			else
				m->editor.ed_alt_map.onclick = 0;
		}
		else if (m->editor.ed_alt_map.mode == 2)
		{
			if (y > m->editor.ed_alt_map.ymin + 10 && y < m->editor.ed_alt_map.ymin + 50)
			{
				if (x > m->editor.ed_alt_map.xmin + 10 && x < m->editor.ed_alt_map.xmin + 50)
					m->editor.ed_alt_map.onclick = 7;
				else if (x > m->editor.ed_alt_map.xmax - 50 && x < m->editor.ed_alt_map.xmax - 10)
					m->editor.ed_alt_map.onclick = 8;
				else
					m->editor.ed_alt_map.onclick = 0;
			}
			else if (y > m->editor.ed_alt_map.ymin + 285 && y < m->editor.ed_alt_map.ymin + 325)
			{
				if (x > m->editor.ed_alt_map.xmin + 10 && x < m->editor.ed_alt_map.xmin + 50)
					m->editor.ed_alt_map.onclick = 9;
				else if (x > m->editor.ed_alt_map.xmax - 50 && x < m->editor.ed_alt_map.xmax - 10)
					m->editor.ed_alt_map.onclick = 10;
				else
					m->editor.ed_alt_map.onclick = 0;
			}
			else if (y > m->editor.ed_alt_map.ymin + 50 && y < m->editor.ed_alt_map.ymin + 280)
			{
				if (x > m->editor.ed_alt_map.xmin + 97 && x < m->editor.ed_alt_map.xmin + 327)
					m->editor.ed_alt_map.onclick = 11;
				else
					m->editor.ed_alt_map.onclick = 0;
			}
			else
				m->editor.ed_alt_map.onclick = 0;
		}
	}
	if (status != m->editor.ed_alt_map.onclick)
		return(1);
	return(0);
}

int		editor_mouse_move_hook(int x, int y, t_main *m)
{
	int		status;

	status = 0;
	if (x > m->editor.ed_menu.xmin && x < m->editor.ed_menu.xmax && y > m->editor.ed_menu.ymin && y < m->editor.ed_menu.ymax)
		status = editor_menu_mouse_move_hook(m, x, y);
	if (x > m->editor.ed_n_map.xmin && x < m->editor.ed_n_map.xmax && y > m->editor.ed_n_map.ymin && y < m->editor.ed_n_map.ymax)
		status = editor_new_map_mouse_move_hook(m, x, y);
	if (x > m->editor.ed_ex_warn.xmin && x < m->editor.ed_ex_warn.xmax && y > m->editor.ed_ex_warn.ymin && y < m->editor.ed_ex_warn.ymax)
		status = editor_exit_warnings_mouse_move_hook(m, x, y);
	if (x > m->editor.ed_alt_map.xmin && x < m->editor.ed_alt_map.xmax && y > m->editor.ed_alt_map.ymin && y < m->editor.ed_alt_map.ymax)
		status = editor_alt_map_mouse_move_hook(m, x, y);
	if (status == 1)
		editor(m);
	return(0);
}
