/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_get_maps.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:23:10 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/08 17:14:18 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	editor_get_maps_fill_tab(t_main *m)
{
	if (!(m->editor.ed_map.dir_stream = opendir(m->env.path.maps_path)))
		m->editor.map = -1;
	else
	{
		while ((m->editor.ed_map.dir_list = readdir(m->editor.ed_map.dir_stream)) != NULL)
		{
			if (m->editor.ed_map.nb_loop >= 2)
			{
				if (!(m->editor.ed_map.maps_names[m->editor.ed_map.nb_loop - 2] = \
				ft_strdup(m->editor.ed_map.dir_list->d_name)))
				{
					m->editor.map = -1;
					break;
				}
			}
			m->editor.ed_map.nb_loop++;
		}
		m->editor.ed_map.maps_names[m->editor.ed_map.nb_loop - 2] = NULL;
		if (closedir(m->editor.ed_map.dir_stream) == -1)
			m->editor.map = -1;
		m->editor.ed_map.nb_loop = 0;
	}
}

void	editor_get_maps_count_and_alloc(t_main *m)
{
	if (!(m->editor.ed_map.dir_stream = opendir(m->env.path.maps_path)))
		m->editor.map = -1;
	else
	{
		while ((m->editor.ed_map.dir_list = readdir(m->editor.ed_map.dir_stream)) != NULL)
			m->editor.ed_map.nb_loop++;
		if (closedir(m->editor.ed_map.dir_stream) == -1)
			m->editor.map = -1;
		else
		{
			if (!(m->editor.ed_map.maps_names = (char **)malloc(sizeof(char *) * (m->editor.ed_map.nb_loop - 1))))
				m->editor.map = -1;
		}
		m->editor.ed_map.nb_maps = m->editor.ed_map.nb_loop - 2;
		m->editor.ed_map.nb_loop = 0;
	}
}

void	editor_get_maps_free_tab(t_main *m)
{
	int		i;

	i = -1;
	while (++i < m->editor.ed_map.nb_maps)
	{
		ft_strdel(&m->editor.ed_map.maps_names[i]);
	}
	ft_strdel(&m->editor.ed_map.maps_names[i]);
	free(m->editor.ed_map.maps_names);
	m->editor.ed_map.maps_names = NULL;
}

void	editor_get_maps(t_main *m)
{
	struct stat		s_stat;

	if (m->editor.map == -1)
	{
		mkdir(m->env.path.maps_path, 0755);
		m->editor.map = 0;
	}
	if (stat(m->env.path.maps_path, &s_stat) == -1)
		m->editor.map = -1;
	else
	{
		if (m->editor.ed_map.nb_maps != -1)
			editor_get_maps_free_tab(m);
		editor_get_maps_count_and_alloc(m);
		if (m->editor.map != -1)
			editor_get_maps_fill_tab(m);
	}
}
