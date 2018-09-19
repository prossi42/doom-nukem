/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 23:46:25 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 13:03:29 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_arc_option_fh(t_stuff *e, int option, int x, int y)
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

void	ft_arc_option_td(t_stuff *e, int option, int x, int y)
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
		pixel_put_to_img(&e->i.mlx, -x + e->bs.x_arc, -y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -y + e->bs.x_arc, -x + e->bs.y_arc, \
			e->lt.couleur);
	}
	ft_arc_option_fh(e, option, x, y);
}

void	ft_arc_option_sd(t_stuff *e, int option, int x, int y)
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

void	ft_arc_option(t_stuff *e, int option, int x, int y)
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

void	ft_arc(t_stuff *e, int option)
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
