/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 16:24:50 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/19 22:38:53 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	main_error(int error)
{
	if (error == 0)
		ft_putendl("\nNo arguments needed with ./doom-nukem\n");
	else if (error == 1)
		ft_putendl("\nMain structure allocation failed\n");
	else if (error == 2)
		ft_putendl("\nGet_env error / option 0");
}

int		main(int argc, char **argv)
{
	t_main		*m;
	void		*mlx_ptr;
	void		*win_ptr;

	(void)argv;
	if (argc != 1)
		main_error(0);
	if (!(m = (t_main *)malloc(sizeof(t_main))))
		main_error(1);
	if (get_env(m, 0) == -1)
		main_error(2);
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, m->env.screen_struct->width, m->env.screen_struct->height,\
			"RT si t'es pas triste parce que etre triste c'est triste");
	(void)win_ptr;
	mlx_loop(mlx_ptr);
}
