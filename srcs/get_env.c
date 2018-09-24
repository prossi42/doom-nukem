/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 22:19:28 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/24 02:42:04 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		get_xml_data(t_main *m)
{
	if (!(m->r_buffer = ft_strnew(500)))
		return(-1);
	m->fd = open("/home/awk-lm/Projects/doom-nukem/data/config/config.xml", O_RDONLY);
	read(m->fd, m->r_buffer, 500);
	close(m->fd);
	// ft_putendl(m->r_buffer);
	xml_parser(m->r_buffer, &m->env.xml_struct, 0);
	// xml_parser(NULL, &m->env.xml_struct, 2);
	// ft_putendl(xml_parser("config/time/total", &m->env.xml_struct, 3));
	xml_parser("config/time/total/100", &m->env.xml_struct, 4);
	m->fd = open("/home/awk-lm/Projects/doom-nukem/data/config/config.xml", O_WRONLY);
	xml_writer(&m->env.xml_struct, m->fd);
	return(0);
}

int		get_screen_size(t_main *m)
{
	if (!(m->env.display_struct = XOpenDisplay(NULL)))
		return(-1);
	if (!(m->env.screen_struct = DefaultScreenOfDisplay(m->env.display_struct)))
		return(-1);
	m->env.scr_width = m->env.screen_struct->width - 50;
	m->env.scr_height = m->env.screen_struct->height - 50;
	return(0);
}

int		get_env(t_main *m)
{
	if (get_screen_size(m) == -1)
		return(-1);
	if (get_xml_data(m) == -1)
		return(-1);
	return(0);
}
