/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_new_map_creating.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 13:47:03 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/06 01:16:05 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		editor_new_map_creating_file(t_main *m)
{
	if (!(m->editor.ed_map.current_map_name = ft_strnew(ft_strlen(m->env.path.maps_path) + ft_strlen(m->editor.ed_n_map.n_map_name) + 1)))
		return(-1);
	m->editor.ed_map.current_map_name = ft_strcat(m->editor.ed_map.current_map_name, m->env.path.maps_path);
	m->editor.ed_map.current_map_name = ft_strcat(m->editor.ed_map.current_map_name, "/");
	m->editor.ed_map.current_map_name = ft_strcat(m->editor.ed_map.current_map_name, m->editor.ed_n_map.n_map_name);
	if ((m->fd = open(m->editor.ed_map.current_map_name, O_RDWR | O_CREAT, 0644)) == -1)
		return(-1);
	ft_strdel(&m->editor.ed_map.current_map_name);
	return(0);
}

int		editor_new_map_creating_fill_var(t_main *m)
{
	m->editor.ed_map.current_map_width = ft_atoi(m->editor.ed_n_map.n_map_width);
	m->editor.ed_map.current_map_height = ft_atoi(m->editor.ed_n_map.n_map_height);
	m->editor.ed_map.current_map_floor = ft_atoi(m->editor.ed_n_map.n_map_floors);
	return(0);
}

int		editor_new_map_creating_map(t_main *m)
{
	int		y;
	int		x;
	int		z;

	if (!(m->editor.ed_map.map = (char ****)malloc(sizeof(char ***) * m->editor.ed_map.current_map_floor)))
		return(-1);
	z = -1;
	while (++z < m->editor.ed_map.current_map_floor)
	{
		if (!(m->editor.ed_map.map[z] = (char ***)malloc(sizeof(char **) * m->editor.ed_map.current_map_height)))
			return(-1);
		y = -1;
		while (++y < m->editor.ed_map.current_map_height)
		{
			if (!(m->editor.ed_map.map[z][y] = (char **)malloc(sizeof(char *) * m->editor.ed_map.current_map_width)))
				return(-1);
			x = -1;
			while (++x < m->editor.ed_map.current_map_width)
			{
				if (!(m->editor.ed_map.map[z][y][x] = ft_strnew(50)))
					return(-1);
			}
		}
	}
	return(0);
}

void	editor_new_map_creating(t_main *m)
{
	int		status;

	if ((status = editor_new_map_creating_file(m)) == 0)
	{
		status = editor_new_map_creating_fill_var(m);
		status = editor_new_map_creating_map(m);
	}
	if (status == -1)
	{
		m->editor.map = 6;
		m->editor.exit_warnings = 1;
	}
	else
	{
		m->editor.map = 1;
		m->editor.exit_warnings = 0;
		m->editor.alt_map = 1;
	}
}
