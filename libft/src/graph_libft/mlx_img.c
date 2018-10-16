/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_img.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 12:38:33 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/12 10:44:11 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

int		init_new_img(t_mlx **mlx, t_images *i)
{
	if (!(*mlx = (t_mlx *)malloc(sizeof(t_mlx))))
		return(-1);
	(*mlx)->prev = NULL;
	(*mlx)->next = NULL;
	(*mlx)->img = NULL;
	(*mlx)->map = NULL;
	(*mlx)->bpp = 0;
	(*mlx)->size_line = 0;
	(*mlx)->endian = 0;
	(*mlx)->nmail = i->n_img;
	(*mlx)->img_x = 0;
	(*mlx)->img_y = 0;
	i->n_img++;
	return(0);
}

void	reboot_mlx_list(t_images *i)
{
	while (i->mlx->prev != NULL)
		i->mlx = i->mlx->prev;
}

void	goto_mlx_list(t_images *i, int nmail)
{
	reboot_mlx_list(i);
	while (i->mlx->nmail != nmail)
		i->mlx = i->mlx->next;
}

void	fill_img(t_mlx **mlx, t_images *i, void *mlx_ptr)
{
	(*mlx)->img_x = i->img_x;
	(*mlx)->img_y = i->img_y;
	(*mlx)->img = mlx_new_image(mlx_ptr, (*mlx)->img_x, (*mlx)->img_y);
	(*mlx)->map = mlx_get_data_addr((*mlx)->img, &(*mlx)->bpp, &(*mlx)->size_line, &(*mlx)->endian);
}

int		mlx_img(t_graph *e, int option, int nmail, void *mlx_ptr)
{
	if (option == 0)
	{
		if (init_new_img(&e->i.mlx, &e->i) == -1)
			return(-1);
		fill_img(&e->i.mlx, &e->i, mlx_ptr);
	}
	else if (option == 1)
	{
		if (e->i.n_img != 0)
			goto_mlx_list(&e->i, e->i.n_img - 1);
		e->i.tmp = e->i.mlx;
		init_new_img(&e->i.mlx->next, &e->i);
		e->i.mlx = e->i.mlx->next;
		e->i.mlx->prev = e->i.tmp;
		fill_img(&e->i.mlx, &e->i, mlx_ptr);
	}
	else if (option == 2)
		reboot_mlx_list(&e->i);
	else
		goto_mlx_list(&e->i, nmail);
	return(0);
}
