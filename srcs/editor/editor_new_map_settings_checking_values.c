/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_new_map_settings_checking_values.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 09:27:52 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/31 18:51:07 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		editor_new_map_settings_checking_floors(t_main *m)
{
	(void)m;
	//return(4);
	return(0);
}

int		editor_new_map_settings_checking_height(t_main *m)
{
	(void)m;
	//return(3);
	return(0);
}

int		editor_new_map_settings_checking_width(t_main *m)
{
	(void)m;
	//return(2);
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
	return(0);
}

void	editor_new_map_settings_checking_values(t_main *m)
{
	int		status;

	status = editor_new_map_settings_checking_name(m);
	//status = -1 -> erreur
	//status = 1 -> le nom de la map existe deja
	if (status == 0)
	{
		m->editor.exit_warnings = 0;
		m->editor.ed_ex_warn.onclick = 0;
	}
}
