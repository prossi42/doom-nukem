/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awklm_string_put.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:01:05 by prossi            #+#    #+#             */
/*   Updated: 2018/10/31 01:16:34 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	draw_numbers(t_graph *e)
{
	if (e->lt.charac == '0')
		zero(e);
	else if (e->lt.charac == '1')
		one(e);
	else if (e->lt.charac == '2')
		two(e);
	else if (e->lt.charac == '3')
		three(e);
	else if (e->lt.charac == '4')
		four(e);
	else if (e->lt.charac == '5')
		five(e);
	else if (e->lt.charac == '6')
		six(e);
	else if (e->lt.charac == '7')
		seven(e);
	else if (e->lt.charac == '8')
		eight(e);
	else
		nine(e);
}

void	draw_sign(t_graph *e)
{
	if (e->lt.charac == '.')
		dot(e);
	else if (e->lt.charac == '-')
		minus(e);
	else if (e->lt.charac == ':')
		colons(e);
	else if (e->lt.charac == '/')
		slash(e);
	else if (e->lt.charac == '#')
		hashtag(e);
	else if (e->lt.charac == '!')
		exclamation(e);
}

void	draw_letter(t_graph *e)
{
	if ((e->lt.charac >= 65 && e->lt.charac <= 90) || (e->lt.charac >= 97 && \
		e->lt.charac <= 122))
		draw_high_letter(e);
	if (e->lt.charac >= 48 && e->lt.charac <= 57)
		draw_numbers(e);
	if (e->lt.charac == '.' || e->lt.charac == '-' || e->lt.charac == ':' || \
	e->lt.charac == '/' || e->lt.charac == '#' || e->lt.charac == '!')
		draw_sign(e);
}

void	awklm_string_put(char *str, t_graph *e)
{
	int		i;
	double	tmp_coeff;
	int		posx;
	int		posy;
	int		space;

	i = -1;
	posx = e->lt.posx;
	posy = e->lt.posy;
	space = e->lt.space;
	while (str[++i])
	{
		tmp_coeff = e->lt.coeff;
		e->lt.charac = str[i];
		draw_letter(e);
		if (e->lt.charac == '.')
			e->lt.posx += (space / 2) * e->lt.coeff;
		else
			e->lt.posx += space * e->lt.coeff;
		e->lt.coeff = tmp_coeff;
	}
	e->lt.posx = posx;
	e->lt.posy = posy;
}
