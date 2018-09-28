/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_put_to_img.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 21:28:03 by prossi            #+#    #+#             */
/*   Updated: 2018/09/28 15:22:26 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	pixel_put_to_img(t_mlx **mlx, int x, int y, int color)
{
	int			color1;
	int			color2;
	int			color3;
	int			bit_pix;
	float		img_size;

	img_size = (*mlx)->img_x * (*mlx)->img_y * (*mlx)->bpp / 8;
	if (x < 0 || y < 0 || y * (*mlx)->size_line + x * (*mlx)->bpp / 8 > \
		img_size
		|| x >= (*mlx)->size_line / ((*mlx)->bpp / 8) || y >= img_size / \
		(*mlx)->size_line)
		return ;
	color1 = color;
	color2 = color >> 8;
	color3 = color >> 16;
	bit_pix = (*mlx)->bpp / 8;
	(*mlx)->map[y * (*mlx)->size_line + x * bit_pix] = color1;
	(*mlx)->map[y * (*mlx)->size_line + x * bit_pix + 1] = color2;
	(*mlx)->map[y * (*mlx)->size_line + x * bit_pix + 2] = color3;
}
