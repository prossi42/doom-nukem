/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_mouse_click_hook.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 02:24:09 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/09 10:28:31 by Awklm            ###   ########.fr       */
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
			if (m->editor.map == 1)
				m->editor.exit_warnings = 1;
			else
			{
				m->editor.exit_warnings = 1;
				editor_new_map_settings_checking_values(m);
				if (m->editor.map == 0)
				{
					editor_new_map_creating(m);
					editor_new_map_settings_clear_all_fields(m);
				}
			}
		}
		else if (m->editor.ed_n_map.onclick == 6)
		{
			m->editor.new_map_settings = 0;
			m->editor.ed_n_map.onclick = 0;
			editor_new_map_settings_clear_all_fields(m);
		}
		return(1);
	}
	return(0);
}

int		editor_exit_warnings_click_hook(t_main *m)
{
	if (m->editor.exit_warnings == 1)
	{
		if (m->editor.map == 1) // Une map est deja ouverte, voulez vous sauvegarder ?
		{
			if (m->editor.ed_ex_warn.onclick == 1) // oui
			{
				(void)m;
				//Procedure de sauvegarde de la map deja ouverte avant d'ouvrir la nouvelle
			}
			else // non
			{
				m->editor.map = 0;
				m->editor.ed_alt_map.current_floor = 0;
				editor_new_map_settings_checking_values(m);
			}
		}
		else if (m->editor.map == -1) // erreur ouverture dossier des maps, reesayer ?
		{
			if (m->editor.ed_ex_warn.onclick == 1) //oui
				editor_new_map_settings_checking_values(m);
			else // non
			{
				m->editor.map = 0;
				m->editor.exit_warnings = 0;
				editor_new_map_settings_clear_all_fields(m);
			}
		}
		else if (m->editor.map == 2) // nom de map existant deja, le changer ?
		{
			if (m->editor.ed_ex_warn.onclick == 1) // oui
			{
				m->editor.map = 0;
				m->editor.new_map_settings = 1;
				m->editor.exit_warnings = 0;
			}
			else // non
			{
				m->editor.map = 0;
				m->editor.exit_warnings = 0;
				editor_new_map_settings_clear_all_fields(m);
			}
		}
		else if (m->editor.map == 3) // Trop petite width (inferieur a 3), le changer ?
		{
			if (m->editor.ed_ex_warn.onclick == 1) // oui
			{
				m->editor.map = 0;
				m->editor.new_map_settings = 1;
				m->editor.exit_warnings = 0;
			}
			else // non
			{
				m->editor.map = 0;
				m->editor.exit_warnings = 0;
				editor_new_map_settings_clear_all_fields(m);
			}
		}
		else if (m->editor.map == 4) // Trop petite height (inferieur a 3), le changer ?
		{
			if (m->editor.ed_ex_warn.onclick == 1) // oui
			{
				m->editor.map = 0;
				m->editor.new_map_settings = 1;
				m->editor.exit_warnings = 0;
			}
			else // non
			{
				m->editor.map = 0;
				m->editor.exit_warnings = 0;
				editor_new_map_settings_clear_all_fields(m);
			}
		}
		else if (m->editor.map == 5) // Trop petit floor (inferieur a 1), le changer ?
		{
			if (m->editor.ed_ex_warn.onclick == 1) // oui
			{
				m->editor.map = 0;
				m->editor.new_map_settings = 1;
				m->editor.exit_warnings = 0;
			}
			else // non
			{
				m->editor.map = 0;
				m->editor.exit_warnings = 0;
				editor_new_map_settings_clear_all_fields(m);
			}
		}
		else if (m->editor.map == 6) // erreur creation de la map, recommencer ?
		{
			if (m->editor.ed_ex_warn.onclick == 1)
			{
				editor_new_map_creating(m);
			}
			else
			{
				m->editor.map = 0;
				m->editor.exit_warnings = 0;
			}
		}
		return(1);
	}
	return(0);
}

void	editor_alt_map_menu_click_hook(t_main *m)
{
	if (m->editor.ed_alt_map.onclick == 1) //entree mode floor
	{
		m->editor.ed_alt_map.mode = 1;
		m->editor.ed_alt_map.current_floor_tmp = m->editor.ed_alt_map.current_floor;
	}
	else if (m->editor.ed_alt_map.onclick == 2) //entree mode canvas
		m->editor.ed_alt_map.mode = 2;
}

void	editor_alt_map_floor_click_hook(t_main *m)
{
	if (m->editor.ed_alt_map.onclick == 3) // charger l etage correspondant a la selection
		m->editor.ed_alt_map.mode = 0;
	else if (m->editor.ed_alt_map.onclick == 4) //quitter floors mode
	{
		m->editor.ed_alt_map.mode = 0;
		m->editor.ed_alt_map.current_floor = m->editor.ed_alt_map.current_floor_tmp;
	}
	else if (m->editor.ed_alt_map.onclick == 5) // descend 1 etage
	{
		if (m->editor.ed_alt_map.current_floor > 0)
			m->editor.ed_alt_map.current_floor--;
	}
	else if (m->editor.ed_alt_map.onclick == 6) // monte 1 etage
	{
		if (m->editor.ed_alt_map.current_floor < m->editor.ed_map.current_map_floor - 1)
			m->editor.ed_alt_map.current_floor++;
	}
}

void	editor_alt_map_canvas_click_hook(t_main *m, int x, int y)
{
	if (m->editor.ed_alt_map.onclick == 7) // charger le focus map correspondant
		m->editor.ed_alt_map.mode = 0;
	else if (m->editor.ed_alt_map.onclick == 8) //quitter canvas mode
		m->editor.ed_alt_map.mode = 0;
	else if (m->editor.ed_alt_map.onclick == 9)
	{
		if (m->editor.ed_alt_map.focus_two == 0 || m->editor.ed_alt_map.focus_two == 2)
		{
			m->editor.ed_alt_map.focus_two = 1;
			if (m->editor.ed_alt_map.focus_one == 1)
				m->editor.ed_alt_map.focus_one = 0;
		}
		else
			m->editor.ed_alt_map.focus_two = 0;
	}
	else if (m->editor.ed_alt_map.onclick == 10)
	{
		if (m->editor.ed_alt_map.focus_one == 0 || m->editor.ed_alt_map.focus_one == 2)
		{
			m->editor.ed_alt_map.focus_one = 1;
			if (m->editor.ed_alt_map.focus_two == 1)
				m->editor.ed_alt_map.focus_two = 0;
		}
		else
			m->editor.ed_alt_map.focus_one = 0;
	}
	else if (m->editor.ed_alt_map.onclick == 11)
	{
		if (m->editor.ed_alt_map.focus_one == 1)
		{
			m->editor.ed_alt_map.focus_one = 2;
			m->editor.ed_alt_map.box_nb_width_one = (x - 1177) / 23;
			m->editor.ed_alt_map.box_nb_height_one = (y - 750) / 23;
		}
		else if (m->editor.ed_alt_map.focus_two == 1)
		{
			m->editor.ed_alt_map.focus_two = 2;
			m->editor.ed_alt_map.box_nb_width_two = (x - 1177) / 23;
			m->editor.ed_alt_map.box_nb_height_two = (y - 750) / 23;
		}
	}
}

int		editor_alt_map_click_hook(t_main *m, int x, int y)
{
	if (m->editor.alt_map == 1)
	{
		if (m->editor.ed_alt_map.onclick == 1 || m->editor.ed_alt_map.onclick == 2)
			editor_alt_map_menu_click_hook(m);
		else if (m->editor.ed_alt_map.onclick >= 3 && m->editor.ed_alt_map.onclick <= 6)
			editor_alt_map_floor_click_hook(m);
		else
			editor_alt_map_canvas_click_hook(m, x, y);
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
		status = editor_exit_warnings_click_hook(m);
	else if (m->editor.ed_alt_map.onclick != 0)
		status = editor_alt_map_click_hook(m, x, y);
	if (status == 1)
		editor(m);
	return(0);
}
