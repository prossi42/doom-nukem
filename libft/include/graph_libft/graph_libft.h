/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_libft.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:22:31 by awk-lm            #+#    #+#             */
/*   Updated: 2018/11/02 01:00:17 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_LIBFT_H
# define GRAPH_LIBFT_H

# include "../off_libft/libft.h"
# include "../pimp_libft/my_libft.h"
# include "../../../mlx/mlx.h"

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
	t_mlx			*tmp;
	int				n_img;
	int				img_x;
	int				img_y;
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
	int				color;
	int				coeff;
}					t_bres;

typedef	struct		s_graph
{
	t_letter		lt;
	t_bres			bs;
	t_images		i;
}					t_graph;

void				a(t_graph *e);
void				b(t_graph *e);
void				c(t_graph *e);
void				d(t_graph *e);
void				ee(t_graph *e);
void				f(t_graph *e);
void				g(t_graph *e);
void				h(t_graph *e);
void				i(t_graph *e);
void				j(t_graph *e);
void				k(t_graph *e);
void				l(t_graph *e);
void				m(t_graph *e);
void				n(t_graph *e);
void				o(t_graph *e);
void				p(t_graph *e);
void				q(t_graph *e);
void				r(t_graph *e);
void				s(t_graph *e);
void				t(t_graph *e);
void				u(t_graph *e);
void				v(t_graph *e);
void				w(t_graph *e);
void				x(t_graph *e);
void				y(t_graph *e);
void				z(t_graph *e);
void				zero(t_graph *e);
void				one(t_graph *e);
void				two(t_graph *e);
void				three(t_graph *e);
void				four(t_graph *e);
void				five(t_graph *e);
void				six(t_graph *e);
void				seven(t_graph *e);
void				eight(t_graph *e);
void				nine(t_graph *e);
void				dot(t_graph *e);
void				minus(t_graph *e);
void				colons(t_graph *e);
void				slash(t_graph *e);
void				hashtag(t_graph *e);
void				exclamation(t_graph *e);
void				question_mark(t_graph *e);
void				ft_segment(t_graph *e);
void				ft_arc(t_graph *e, int option);
void				awklm_string_put(char *str, t_graph *e);
void				ft_ellipse(t_graph *e, int piece, int option);
void				settings(t_graph *e, int color, int background_color);
void				full_box(t_graph *e);
void				empty_box(t_graph *e);
void				ft_full_ellipse(t_graph *e, int piece, int option);
void				ft_full_arc(t_graph *e, int option);
void				ft_init_segment_a(t_graph *e, int option);
void				ft_init_segment_b(t_graph *e, int option);
void				ft_init_segment_e(t_graph *e, int option);
void				draw_high_letter(t_graph *e);
void				ft_arc_sd(t_graph *e, int option, int x, int y);
void				select_part_height_sd(t_graph *e, int x, int y, int option);
void				select_part_height(t_graph *e, int x, int y, int option);
void				select_part_width_sd(t_graph *e, int x, int y, int option);
void				select_part_width(t_graph *e, int x, int y, int option);
void				ft_init_value_settings(t_graph *e, int option, int background_color);
void				ft_init_value_two(t_graph *e, int option);
void				pixel_put_to_img(t_mlx **mlx, int x, int y, int color);
int					mlx_img(t_graph *e, int option, int nmail, void *mlx_ptr);
void				fill_img(t_mlx **mlx, t_images *i, void *mlx_ptr);
void				draw_resize(t_graph *e, int color);
void				draw_directional_arrows(t_graph *e, int posx, int posy);
void				img_one_color(t_mlx **mlx, int color);
void				draw_new_file(t_graph *e, int posx, int posy, int color);
void				draw_del_file(t_graph *e, int posx, int posy, int color);
void				draw_save_logo(t_graph *e, int posx, int posy, int color);
void				draw_load_logo(t_graph *e, int posx, int posy, int color);
void				draw_exit_logo(t_graph *e, int posx, int posy, int color);
void				color_img_edges(t_graph *e, int pixel, int color);
#endif
