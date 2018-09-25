/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 11:46:41 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/25 18:16:25 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		set_screen_size(t_main *m)
{
	m->env.scr_width = ft_atoi(xml_parser("config/screen/width", &m->env.xml_struct, 3, 0));
	m->env.scr_height = ft_atoi(xml_parser("config/screen/height", &m->env.xml_struct, 3, 0));
	return(0);
}

int		set_time(t_main *m)
{
	char	*tmp;

	tmp = NULL;
	if (ft_atoi(xml_parser("config/time/first", &m->env.xml_struct, 3, 0)) == 0)
	{
		if (!(tmp = ft_strcat_lin("config/time/first/", ft_itoa(m->env.time.launch_time))))
			return(-1);
		xml_parser(tmp, &m->env.xml_struct, 4, 0);
		xml_writer(&m->env.xml_struct, m->fd, m->env.path.config_file);
	}
	return(0);
}

int		set_env(t_main *m)
{
	set_screen_size(m);
	set_time(m);
	return(0);
}
