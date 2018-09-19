/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_high_letter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:20:22 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 11:20:26 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	draw_high_letter_td(t_stuff *e)
{
	if (e->lt.charac == 'R' || e->lt.charac == 'r')
		r(e);
	else if (e->lt.charac == 'S' || e->lt.charac == 's')
		s(e);
	else if (e->lt.charac == 'T' || e->lt.charac == 't')
		t(e);
	else if (e->lt.charac == 'U' || e->lt.charac == 'u')
		u(e);
	else if (e->lt.charac == 'V' || e->lt.charac == 'v')
		v(e);
	else if (e->lt.charac == 'W' || e->lt.charac == 'w')
		w(e);
	else if (e->lt.charac == 'X' || e->lt.charac == 'x')
		x(e);
	else if (e->lt.charac == 'Y' || e->lt.charac == 'y')
		y(e);
	else
		z(e);
}

void	draw_high_letter_sd(t_stuff *e)
{
	if (e->lt.charac == 'K' || e->lt.charac == 'k')
		k(e);
	else if (e->lt.charac == 'L' || e->lt.charac == 'l')
		l(e);
	else if (e->lt.charac == 'M' || e->lt.charac == 'm')
		m(e);
	else if (e->lt.charac == 'N' || e->lt.charac == 'n')
		n(e);
	else if (e->lt.charac == 'O' || e->lt.charac == 'o')
		o(e);
	else if (e->lt.charac == 'P' || e->lt.charac == 'p')
		p(e);
	else if (e->lt.charac == 'Q' || e->lt.charac == 'q')
		q(e);
	else
		draw_high_letter_td(e);
}

void	draw_high_letter(t_stuff *e)
{
	if (e->lt.charac == 'A' || e->lt.charac == 'a')
		a(e);
	else if (e->lt.charac == 'B' || e->lt.charac == 'b')
		b(e);
	else if (e->lt.charac == 'C' || e->lt.charac == 'c')
		c(e);
	else if (e->lt.charac == 'D' || e->lt.charac == 'd')
		d(e);
	else if (e->lt.charac == 'E' || e->lt.charac == 'e')
		ee(e);
	else if (e->lt.charac == 'F' || e->lt.charac == 'f')
		f(e);
	else if (e->lt.charac == 'G' || e->lt.charac == 'g')
		g(e);
	else if (e->lt.charac == 'H' || e->lt.charac == 'h')
		h(e);
	else if (e->lt.charac == 'I' || e->lt.charac == 'i')
		i(e);
	else if (e->lt.charac == 'J' || e->lt.charac == 'j')
		j(e);
	else
		draw_high_letter_sd(e);
}
