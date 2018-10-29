/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   settings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:32:17 by prossi            #+#    #+#             */
/*   Updated: 2018/10/17 18:44:13 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	settings_sd(t_graph *e, int background_color)
{
	ft_init_value_settings(e, 7, background_color);
	ft_segment(e);
	ft_init_value_settings(e, 8, background_color);
	ft_segment(e);
	ft_init_value_settings(e, 9, background_color);
	ft_segment(e);
	ft_init_value_settings(e, 10, background_color);
	ft_segment(e);
	ft_init_value_settings(e, 11, background_color);
	ft_segment(e);
	ft_init_value_settings(e, 12, background_color);
	ft_arc(e, 9);
	while (--e->bs.ray_arc > 0)
		ft_arc(e, 9);
	ft_init_value_settings(e, 13, background_color);
	ft_arc(e, 9);
	while (--e->bs.ray_arc > 0)
		ft_arc(e, 9);
}

void	settings(t_graph *e, int color, int background_color)
{
	e->bs.color = color;
	e->lt.couleur = color;
	ft_init_value_settings(e, 0, background_color);
	ft_segment(e);
	ft_init_value_settings(e, 1, background_color);
	ft_segment(e);
	ft_init_value_settings(e, 2, background_color);
	ft_segment(e);
	ft_init_value_settings(e, 3, background_color);
	ft_segment(e);
	ft_init_value_settings(e, 4, background_color);
	ft_segment(e);
	ft_init_value_settings(e, 5, background_color);
	ft_segment(e);
	ft_init_value_settings(e, 6, background_color);
	ft_segment(e);
	settings_sd(e, background_color);
}
