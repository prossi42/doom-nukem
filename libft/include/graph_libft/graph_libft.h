/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_libft.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:22:31 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/19 18:29:36 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_LIBFT_H
# define GRAPH_LIBFT_H

# include "../off_libft/libft.h"
# include "../pimp_libft/my_libft.h"

typedef struct		s_mlx
{
	struct s_mlx	*prev;
	void			*img;
	char			*map;
	int				bpp;
	int				size_line;
	int				endian;
	int				nmail;
	int				img_x;
	int				img_y;
	struct s_mlx	*next;
}					t_mlx;

typedef struct		s_images
{
	t_mlx			*mlx;
}					t_images;

typedef struct		s_letter
{
	char			charac;
	unsigned long	couleur;
	int				posx;
	int				posy;
	double			coeff;
	int				space;
}					t_letter;

typedef struct		s_bres
{
	int				dx;
	int				dy;
	int				xi;
	int				xf;
	int				yi;
	int				yf;
	int				cumul;
	int				xinc;
	int				yinc;
	double			ray_arc;
	int				x_arc;
	int				y_arc;
	int				width;
	int				height;
	int				a2;
	int				b2;
	int				fa2;
	int				fb2;
	int				sigma;
	int				x;
	int				y;
}					t_bres;

typedef	struct		s_stuff
{
	t_letter		lt;
	t_bres			bs;
	t_images		i;
}					t_stuff;

void				a(t_stuff *e);
void				b(t_stuff *e);
void				c(t_stuff *e);
void				d(t_stuff *e);
void				ee(t_stuff *e);
void				f(t_stuff *e);
void				g(t_stuff *e);
void				h(t_stuff *e);
void				i(t_stuff *e);
void				j(t_stuff *e);
void				k(t_stuff *e);
void				l(t_stuff *e);
void				m(t_stuff *e);
void				n(t_stuff *e);
void				o(t_stuff *e);
void				p(t_stuff *e);
void				q(t_stuff *e);
void				r(t_stuff *e);
void				s(t_stuff *e);
void				t(t_stuff *e);
void				u(t_stuff *e);
void				v(t_stuff *e);
void				w(t_stuff *e);
void				x(t_stuff *e);
void				y(t_stuff *e);
void				z(t_stuff *e);
void				zero(t_stuff *e);
void				one(t_stuff *e);
void				two(t_stuff *e);
void				three(t_stuff *e);
void				four(t_stuff *e);
void				five(t_stuff *e);
void				six(t_stuff *e);
void				seven(t_stuff *e);
void				eight(t_stuff *e);
void				nine(t_stuff *e);
void				dot(t_stuff *e);
void				minus(t_stuff *e);
void				colons(t_stuff *e);
void				slash(t_stuff *e);
void				hashtag(t_stuff *e);
void				exclamation(t_stuff *e);
void				ft_segment_letter(t_stuff *e);
void				ft_arc(t_stuff *e, int option);
void				awklm_string_put(char *str, t_stuff *e);
void				ft_ellipse(t_stuff *e, int piece, int option);
void				settings(t_stuff *e);
void				full_box(t_stuff *e);
void				empty_box(t_stuff *e);
void				ft_full_ellipse(t_stuff *e, int piece, int option);
void				ft_full_arc(t_stuff *e, int option);
void				ft_init_segment_a(t_stuff *e, int option);
void				ft_init_segment_b(t_stuff *e, int option);
void				ft_init_segment_e(t_stuff *e, int option);
void				draw_high_letter(t_stuff *e);
void				ft_arc_sd(t_stuff *e, int option, int x, int y);
void				select_part_height_sd(t_stuff *e, int x, int y, int option);
void				select_part_height(t_stuff *e, int x, int y, int option);
void				select_part_width_sd(t_stuff *e, int x, int y, int option);
void				select_part_width(t_stuff *e, int x, int y, int option);
void				ft_init_value_settings(t_stuff *e, int option);
void				ft_init_value_two(t_stuff *e, int option);
void				pixel_put_to_img(t_mlx **mlx, int x, int y, int color);


#endif
