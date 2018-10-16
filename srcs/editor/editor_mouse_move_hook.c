/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_mouse_move_hook.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 23:26:25 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/16 01:12:14 by Awklm            ###   ########.fr       */
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
	else
		m->editor.ed_menu.onclick = 0;
	if (status != m->editor.ed_menu.onclick)
		return(1);
	else
		return(0);
}

int		editor_mouse_move_hook(int x, int y, t_main *m)
{
	int		status;

	status = 0;
	if (x > m->editor.ed_menu.xmin && x < m->editor.ed_menu.xmax && y > m->editor.ed_menu.ymin && y < m->editor.ed_menu.ymax)
		status = editor_menu_mouse_move_hook(m, x, y);
	if (status == 1)
		editor(m);
	return(0);
}
