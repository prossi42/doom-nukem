/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   question_mark.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 01:01:16 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/02 02:08:31 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	question_mark_init_values_td(t_graph *e, int option)
{
	if (option == 6)
	{
		e->bs.x_arc = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (37.5 * e->lt.coeff);
		e->bs.ray_arc = 12.5 * e->lt.coeff;
	}
	else if (option == 7)
	{
		e->bs.x_arc = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (37.5 * e->lt.coeff) + 1;
		e->bs.ray_arc = 12.5 * e->lt.coeff;
	}
	else if (option == 8)
	{
		e->bs.x_arc = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.y_arc = e->lt.posy - (37.5 * e->lt.coeff) - 1;
		e->bs.ray_arc = 12.5 * e->lt.coeff;
	}
}

void	question_mark_init_values_sd(t_graph *e, int option)
{
	if (option == 3)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.yi = e->lt.posy - (15 * e->lt.coeff);
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (10 * e->lt.coeff);
	}
	else if (option == 4)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff) + 1;
		e->bs.yi = e->lt.posy - (15 * e->lt.coeff);
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (10 * e->lt.coeff);
	}
	else if (option == 5)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy - (15 * e->lt.coeff);
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (10 * e->lt.coeff);
	}
	else
		question_mark_init_values_td(e, option);
}

void	question_mark_init_values(t_graph *e, int option)
{
	if (option == 0)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff);
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (5 * e->lt.coeff);
	}
	else if (option == 1)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff) + 1;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (5 * e->lt.coeff);
	}
	else if (option == 2)
	{
		e->bs.xi = e->lt.posx + (12.5 * e->lt.coeff) - 1;
		e->bs.yi = e->lt.posy;
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (5 * e->lt.coeff);
	}
	else
		question_mark_init_values_sd(e, option);
}

void	question_mark(t_graph *e)
{
	question_mark_init_values(e, 0);
	ft_segment(e);
	question_mark_init_values(e, 1);
	ft_segment(e);
	question_mark_init_values(e, 2);
	ft_segment(e);
	question_mark_init_values(e, 3);
	ft_segment(e);
	question_mark_init_values(e, 4);
	ft_segment(e);
	question_mark_init_values(e, 5);
	ft_segment(e);
	question_mark_init_values(e, 6);
	ft_arc(e, 8);
	ft_arc(e, 7);
	ft_arc(e, 6);
	question_mark_init_values(e, 7);
	ft_arc(e, 8);
	ft_arc(e, 7);
	ft_arc(e, 6);
	question_mark_init_values(e, 8);
	ft_arc(e, 8);
	ft_arc(e, 7);
	ft_arc(e, 6);
}
