/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arc_sd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 13:02:36 by prossi            #+#    #+#             */
/*   Updated: 2018/11/02 01:57:54 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

/*
** Option 12 : quart cercle haut
** Option 13 : quart cercle bas
*/

void	ft_arc_sd_option_sd(t_graph *e, int option, int x, int y)
{
	if (option == 12)
	{
		pixel_put_to_img(&e->i.mlx, x + e->bs.x_arc, -y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -x + e->bs.x_arc, -y + e->bs.y_arc, \
			e->lt.couleur);
	}
	else if (option == 13)
	{
		pixel_put_to_img(&e->i.mlx, x + e->bs.x_arc, y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -x + e->bs.x_arc, y + e->bs.y_arc, \
			e->lt.couleur);
	}
}

void	ft_arc_sd_option(t_graph *e, int option, int x, int y)
{
	if (option == 9)
	{
		pixel_put_to_img(&e->i.mlx, x + e->bs.x_arc, y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, y + e->bs.x_arc, x + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, x + e->bs.x_arc, -y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, y + e->bs.x_arc, -x + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -x + e->bs.x_arc, y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -y + e->bs.x_arc, x + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -x + e->bs.x_arc, -y + e->bs.y_arc, \
			e->lt.couleur);
		pixel_put_to_img(&e->i.mlx, -y + e->bs.x_arc, -x + e->bs.y_arc, \
			e->lt.couleur);
	}
	ft_arc_sd_option_sd(e, option, x, y);
}

void	ft_arc_sd(t_graph *e, int option, int x, int y)
{
	ft_arc_sd_option(e, option, x, y);
	ft_arc_sd_option_sd(e, option, x, y);
}
