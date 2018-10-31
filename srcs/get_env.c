/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 22:19:28 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/31 14:11:04 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		get_paths(t_main *m)
{
	if (!(m->env.path.path = getcwd(m->env.path.path, PATH_MAX)))
		return(-1);
	if (!(m->env.path.data_path = ft_strcat_lin(m->env.path.path, "/data")))
		return(-1);
	if (!(m->env.path.config_path = ft_strcat_lin(m->env.path.data_path, "/config")))
		return(-1);
	if (!(m->env.path.images_path = ft_strcat_lin(m->env.path.data_path, "/images")))
		return(-1);
	if (!(m->env.path.maps_path = ft_strcat_lin(m->env.path.data_path, "/maps")))
		return(-1);
	return(0);
}

int		check_paths_availability(t_main *m)
{
	struct stat		s_stat;

	if (stat(m->env.path.data_path, &s_stat) == -1)
		return (-1);
	if (stat(m->env.path.config_path, &s_stat) == -1)
		return(-1);
	if (stat(m->env.path.images_path, &s_stat) == -1)
		return(-1);
	if (stat(m->env.path.maps_path, &s_stat) == -1)
		return(-1);
	return(0);
}

int		get_config_files(t_main *m)
{
	if (!(m->env.file.config.config_file = ft_strcat_lin(m->env.path.config_path, "/config.xml")))
		return(-1);
	return(0);
}

int		check_config_files_availability(t_main *m)
{
	struct stat		s_stat;

	if (stat(m->env.file.config.config_file, &s_stat) == -1)
		return(-1);
	return(0);
}

int		get_images_files(t_main *m)
{
	if (!(m->env.file.images.awklm_logo = ft_strcat_lin(m->env.path.images_path, "/awklm_logo.xpm")))
		return(-1);
	return(0);
}

int		check_images_files_availability(t_main *m)
{
	struct	stat	s_stat;

	if (stat(m->env.file.images.awklm_logo, &s_stat) == -1)
		return(-1);
	return(0);
}

int		get_xml_data(t_main *m)
{
	xml_parser(m->env.file.config.config_file, &m->env.config_struct, 0, m->fd);
	return(0);
}

void	get_time(t_main *m)
{
	m->env.time.launch_time = time(NULL);
}

int		get_env(t_main *m)
{
	if (get_paths(m) == -1)
		return(-1);
	if (check_paths_availability(m) == -1)
		return(-1);
	if (get_config_files(m) == -1)
		return(-1);
	if (check_config_files_availability(m) == -1)
		return(-1);
	if (get_images_files(m) == -1)
		return(-1);
	if (check_images_files_availability(m) == -1)
		return(-1);
	if (get_xml_data(m) == -1)
		return(-1);
	get_time(m);
	return(0);
}
