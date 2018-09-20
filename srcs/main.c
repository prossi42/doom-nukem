/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 16:24:50 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/20 09:07:47 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	main_error(int error)
{
	if (error == 0)
		ft_putendl("\nNo arguments needed by ./doom-nukem\n");
	else if (error == 1)
		ft_putendl("\nMain structure allocation failed\n");
	else if (error == 2)
		ft_putendl("\nGet_env error / option 0");
}

int		main(int argc, char **argv)
{
	t_main		*m;

	(void)argv;
	if (argc != 1)
		main_error(0);
	if (!(m = (t_main *)malloc(sizeof(t_main))))
		main_error(1);
	if (get_env(m, 0) == -1)
		main_error(2);
	mlx_processes(m);
	return(0);
}
