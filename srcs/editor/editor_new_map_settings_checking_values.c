/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_new_map_settings_checking_values.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 09:27:52 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/07 21:47:24 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		editor_new_map_settings_checking_floors(t_main *m)
{
	if (ft_atoi(m->editor.ed_n_map.n_map_floors) < 1)
		return(4);
	return(0);
}

int		editor_new_map_settings_checking_height(t_main *m)
{
	int		height;

	height = ft_atoi(m->editor.ed_n_map.n_map_height);
	if (height < 10 || height % 10 != 0)
		return(3);
	return(0);
}

int		editor_new_map_settings_checking_width(t_main *m)
{
	int		width;

	width = ft_atoi(m->editor.ed_n_map.n_map_width);
	if (width < 10 || width % 10 != 0)
		return(2);
	return(0);
}

int		editor_new_map_settings_checking_name(t_main *m)
{
	int		i;

	i = -1;
	editor_get_maps(m);
	if (m->editor.map == -1)
		return(-1);
	while (m->editor.ed_map.maps_names[++i])
	{
		if (ft_strcmp(m->editor.ed_n_map.n_map_name, m->editor.ed_map.maps_names[i]) == 0)
			return(1);
	}
	if (m->editor.ed_n_map.n_map_name[0] == '\0')
		return(1);
	return(0);
}

void	editor_new_map_settings_checking_values(t_main *m)
{
	int		status;

	if ((status = editor_new_map_settings_checking_name(m)) == 0)
		if ((status = editor_new_map_settings_checking_width(m)) == 0)
			if ((status = editor_new_map_settings_checking_height(m)) == 0)
				status = editor_new_map_settings_checking_floors(m);
	if (status == -1)//erreur parsing map
		m->editor.map = -1;
	else if (status == 0)
	{
		m->editor.exit_warnings = 0;
		m->editor.ed_ex_warn.onclick = 0;
	}
	else if (status == 1)//nom deja existant
		m->editor.map = 2;
	else if (status == 2)//mauvaise width
		m->editor.map = 3;
	else if (status == 3)//mauvaise height
		m->editor.map = 4;
	else if (status == 4)//mauvais floors
		m->editor.map = 5;
}
