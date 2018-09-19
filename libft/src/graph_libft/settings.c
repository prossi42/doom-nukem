/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   settings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:32:17 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 14:00:47 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	settings_sd(t_stuff *e)
{
	ft_init_value_settings(e, 7);
	ft_segment_letter(e);
	ft_init_value_settings(e, 8);
	ft_segment_letter(e);
	ft_init_value_settings(e, 9);
	ft_segment_letter(e);
	ft_init_value_settings(e, 10);
	ft_segment_letter(e);
	ft_init_value_settings(e, 11);
	ft_segment_letter(e);
	ft_init_value_settings(e, 12);
	ft_arc(e, 9);
	while (--e->bs.ray_arc > 0)
		ft_arc(e, 9);
	ft_init_value_settings(e, 13);
	ft_arc(e, 9);
	while (--e->bs.ray_arc > 0)
		ft_arc(e, 9);
}

void	settings(t_stuff *e)
{
	ft_init_value_settings(e, 0);
	ft_segment_letter(e);
	ft_init_value_settings(e, 1);
	ft_segment_letter(e);
	ft_init_value_settings(e, 2);
	ft_segment_letter(e);
	ft_init_value_settings(e, 3);
	ft_segment_letter(e);
	ft_init_value_settings(e, 4);
	ft_segment_letter(e);
	ft_init_value_settings(e, 5);
	ft_segment_letter(e);
	ft_init_value_settings(e, 6);
	ft_segment_letter(e);
	settings_sd(e);
}
