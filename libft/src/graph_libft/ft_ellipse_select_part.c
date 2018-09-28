/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ellipse_select_part.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 12:28:15 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 12:28:34 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	select_part_height_sd(t_graph *e, int x, int y, int option)
{
	if (option == 3)
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc - x, e->bs.y_arc - y, \
			e->lt.couleur);
	else if (option == 4)
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc + x, e->bs.y_arc - y, \
			e->lt.couleur);
	else if (option == 5)
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc - x, e->bs.y_arc + y, \
			e->lt.couleur);
	else if (option == 6)
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc + x, e->bs.y_arc + y, \
			e->lt.couleur);
}

void	select_part_height(t_graph *e, int x, int y, int option)
{
	if (option == 0)
	{
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc + x, e->bs.y_arc + y, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc - x, e->bs.y_arc + y, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc + x, e->bs.y_arc - y, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc - x, e->bs.y_arc - y, \
			e->lt.couleur);
	}
	else if (option == 1)
	{
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc + x, e->bs.y_arc - y, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc - x, e->bs.y_arc - y, \
			e->lt.couleur);
	}
	else if (option == 2)
	{
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc + x, e->bs.y_arc + y, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc - x, e->bs.y_arc + y, \
			e->lt.couleur);
	}
}

void	select_part_width_sd(t_graph *e, int x, int y, int option)
{
	if (option == 3)
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc - x, e->bs.y_arc - y, \
			e->lt.couleur);
	else if (option == 4)
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc - x, e->bs.y_arc + y, \
			e->lt.couleur);
	else if (option == 5)
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc + x, e->bs.y_arc - y, \
			e->lt.couleur);
	else if (option == 6)
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc + x, e->bs.y_arc + y, \
			e->lt.couleur);
}

void	select_part_width(t_graph *e, int x, int y, int option)
{
	if (option == 0)
	{
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc + x, e->bs.y_arc + y, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc - x, e->bs.y_arc + y, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc + x, e->bs.y_arc - y, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc - x, e->bs.y_arc - y, \
			e->lt.couleur);
	}
	else if (option == 1)
	{
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc - x, e->bs.y_arc + y, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc - x, e->bs.y_arc - y, \
			e->lt.couleur);
	}
	else if (option == 2)
	{
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc + x, e->bs.y_arc + y, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, e->bs.x_arc + x, e->bs.y_arc - y, \
			e->lt.couleur);
	}
}
