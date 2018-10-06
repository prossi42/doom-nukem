/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 11:46:41 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/04 21:51:19 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		set_screen_size(t_main *m)
{
	if (ft_strcmp(xml_parser("config/screen/set", &m->env.xml_struct, 3, 0), "no") == 0)
	{
		m->env.resize_mode = 1;
		m->env.scr_width = 1280;
		m->env.scr_height = 720;
	}
	else
	{
		m->env.scr_width = ft_atoi(xml_parser("config/screen/width", &m->env.xml_struct, 3, 0));
		m->env.scr_height = ft_atoi(xml_parser("config/screen/height", &m->env.xml_struct, 3, 0));
	}
	return(0);
}

int		set_time(t_main *m, int option)
{
	char			*tmp;
	long int		tmp_time;

	tmp = NULL;
	tmp_time = 0;
	if (option == 0)
	{
		if (ft_atoi(xml_parser("config/time/first", &m->env.xml_struct, 3, 0)) == 0)
		{
			if (!(tmp = ft_strcat_lin("config/time/first/", ft_itoa(m->env.time.launch_time))))
				return(-1);
			xml_parser(tmp, &m->env.xml_struct, 4, 0);
			ft_strdel(&tmp);
			xml_writer(&m->env.xml_struct, m->fd, m->env.path.config_file);
		}
	}
	else if (option == 1)
	{
		m->env.time.exit_time = time(NULL);
		tmp_time = m->env.time.exit_time - m->env.time.launch_time;
		if (!(tmp = ft_strcat_lin("config/time/last/", ft_itoa(tmp_time))))
			return(-1);
		xml_parser(tmp, &m->env.xml_struct, 4, 0);
		ft_strdel(&tmp);
		tmp_time = tmp_time + ft_atoi(xml_parser("config/time/total", &m->env.xml_struct, 3, 0));
		if (!(tmp = ft_strcat_lin("config/time/total/", ft_itoa(tmp_time))))
			return(-1);
		xml_parser(tmp, &m->env.xml_struct, 4, 0);
		ft_strdel(&tmp);
	}
	return(0);
}

int		set_struct_lang(t_main *m, int lang)
{
	if (lang == 0)
	{
		if (set_struct_lang_en(m) == -1)
			return(-1);
	}
	else if (lang == 1)
	{
		if (set_struct_lang_fr(m) == -1)
			return(-1);
	}
	else
		if (set_struct_lang_not_chosen(m) == -1)
			return(-1);
	return(0);
}

int		set_lang(t_main *m)
{
	if (ft_strcmp("english", xml_parser("config/lang/lang", &m->env.xml_struct, 3, 0)) == 0)
		m->env.lang_value = 0;
	else if (ft_strcmp("french", xml_parser("config/lang/lang", &m->env.xml_struct, 3, 0)) == 0)
		m->env.lang_value = 1;
	else
		m->env.lang_value = -1;
	if (set_struct_lang(m, m->env.lang_value) == -1)
		return(-1);
	return(0);
}

int		set_env(t_main *m)
{
	set_screen_size(m);
	if (set_time(m, 0) == -1)
		return(-1);
	if (set_lang(m) == -1)
		return(-1);
	return(0);
}
