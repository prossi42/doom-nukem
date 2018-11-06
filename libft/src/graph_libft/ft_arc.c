/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 23:46:25 by prossi            #+#    #+#             */
/*   Updated: 2018/11/02 02:05:42 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

/*
** Option 8 : quart cercle haut gauche
** Option 10 : quart cercle gauche
** Option 11 : quart cercle droit
*/

void	ft_arc_option_fh(t_graph *e, int option, int x, int y)
{
	if (option == 8)
	{
		pixel_put_to_img(&e->i.mlx, -x + e->bs.x_arc, -y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -y + e->bs.x_arc, -x + e->bs.y_arc, \
			e->lt.couleur);
	}
	else if (option == 10)
	{
		pixel_put_to_img(&e->i.mlx, -y + e->bs.x_arc, x + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -y + e->bs.x_arc, -x + e->bs.y_arc, \
			e->lt.couleur);
	}
	else if (option == 11)
	{
		pixel_put_to_img(&e->i.mlx, y + e->bs.x_arc, x + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, y + e->bs.x_arc, -x + e->bs.y_arc, \
			e->lt.couleur);
	}
}

/*
** Option 5 : quart cercle bas gauche
** Option 6 : quart cercle bas droit
** Option 7 : quart cercle haut droit
*/

void	ft_arc_option_td(t_graph *e, int option, int x, int y)
{
	if (option == 5)
	{
		pixel_put_to_img(&e->i.mlx, -x + e->bs.x_arc, y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -y + e->bs.x_arc, x + e->bs.y_arc, \
			e->lt.couleur);
	}
	else if (option == 6)
	{
		pixel_put_to_img(&e->i.mlx, x + e->bs.x_arc, y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, y + e->bs.x_arc, x + e->bs.y_arc, \
			e->lt.couleur);
	}
	else if (option == 7)
	{
		pixel_put_to_img(&e->i.mlx, x + e->bs.x_arc, -y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, y + e->bs.x_arc, -x + e->bs.y_arc, \
			e->lt.couleur);
	}
	ft_arc_option_fh(e, option, x, y);
}

/*
** Option 3 : demi cercle haut
** Option 4 : demi cercle bas
*/

void	ft_arc_option_sd(t_graph *e, int option, int x, int y)
{
	if (option == 3)
	{
		pixel_put_to_img(&e->i.mlx, x + e->bs.x_arc, -y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, y + e->bs.x_arc, -x + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -x + e->bs.x_arc, -y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -y + e->bs.x_arc, -x + e->bs.y_arc, \
			e->lt.couleur);
	}
	else if (option == 4)
	{
		pixel_put_to_img(&e->i.mlx, x + e->bs.x_arc, y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, y + e->bs.x_arc, x + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -x + e->bs.x_arc, y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -y + e->bs.x_arc, x + e->bs.y_arc, \
			e->lt.couleur);
	}
	ft_arc_option_td(e, option, x, y);
}

/*
** Option 1 : demi cercle droit
** Option 2 : demi cercle gauche
*/

void	ft_arc_option(t_graph *e, int option, int x, int y)
{
	if (option == 1)
	{
		pixel_put_to_img(&e->i.mlx, x + e->bs.x_arc, y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, y + e->bs.x_arc, x + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, x + e->bs.x_arc, -y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, y + e->bs.x_arc, -x + e->bs.y_arc, \
			e->lt.couleur);
	}
	else if (option == 2)
	{
		pixel_put_to_img(&e->i.mlx, -x + e->bs.x_arc, y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -y + e->bs.x_arc, x + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -x + e->bs.x_arc, -y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -y + e->bs.x_arc, -x + e->bs.y_arc, \
			e->lt.couleur);
	}
	ft_arc_option_sd(e, option, x, y);
}

void	ft_arc(t_graph *e, int option)
{
	int		x;
	int		y;
	int		d;

	x = 0;
	y = e->bs.ray_arc;
	d = 5 - (4 * e->bs.ray_arc);
	while (x <= y)
	{
		ft_arc_option(e, option, x, y);
		ft_arc_sd(e, option, x, y);
		if (d > 0)
		{
			y--;
			d -= 8 * y;
		}
		x++;
		d += 8 * x + 4;
	}
}
