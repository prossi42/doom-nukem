/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_floppy_drive.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 01:16:51 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/16 01:54:26 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	draw_floppy_drive_init_values(t_graph *e, int option, int posx, int posy)
{
	e->bs.xi = posx;
	e->bs.yi = posy;
	if (option == 0)
	{
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi - (50 * e->lt.coeff);
	}
	else if (option == 1)
	{
		e->bs.xf = e->bs.xi + (30 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	else if (option == 2)
	{
		e->bs.xf = e->bs.xi + (10 * e->lt.coeff);
		e->bs.yf = e->bs.yi + (10 * e->lt.coeff);
	}
	else if (option == 3)
	{
		e->bs.xf = e->bs.xi;
		e->bs.yf = e->bs.yi + (40 * e->lt.coeff);
	}
	else if (option == 4)
	{
		e->bs.xf = e->bs.xi - (40 * e->lt.coeff);
		e->bs.yf = e->bs.yi;
	}
	else if (option == 5)
	{
		e->bs.width = (30 * e->lt.coeff);
		e->bs.height = (5 * e->lt.coeff);
		e->lt.posx = e->bs.xi;
		e->lt.posy = e->bs.yi;
	}
	else if (option == 6)
	{
		e->bs.width = (22 * e->lt.coeff);
		e->bs.height = (10 * e->lt.coeff);
		e->lt.posx = e->bs.xi;
		e->lt.posy = e->bs.yi;
	}
}

void	draw_floppy_drive(t_graph *e, int posx, int posy, int color)
{
	e->bs.color = color;
	draw_floppy_drive_init_values(e, 0, posx, posy);
	ft_segment(e);
	draw_floppy_drive_init_values(e, 1, posx, posy - (50 * e->lt.coeff));
	ft_segment(e);
	draw_floppy_drive_init_values(e, 2, posx + (30 * e->lt.coeff), posy - (50 * e->lt.coeff));
	ft_segment(e);
	draw_floppy_drive_init_values(e, 3, posx + (40 * e->lt.coeff), posy - (40 * e->lt.coeff));
	ft_segment(e);
	draw_floppy_drive_init_values(e, 4, posx + (40 * e->lt.coeff), posy);
	ft_segment(e);
	draw_floppy_drive_init_values(e, 5, posx + (5 * e->lt.coeff), posy - (2 * e->lt.coeff));
	full_box(e);
	draw_floppy_drive_init_values(e, 5, posx + (5 * e->lt.coeff), posy - (9 * e->lt.coeff));
	full_box(e);
	draw_floppy_drive_init_values(e, 5, posx + (5 * e->lt.coeff), posy - (16 * e->lt.coeff));
	full_box(e);
	draw_floppy_drive_init_values(e, 6, posx + (7 * e->lt.coeff), posy - (37 * e->lt.coeff));
	full_box(e);
}
