/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 16:24:50 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/21 00:48:48 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	main_error(int error, t_main *m)
{
	if (error == 1)
	ft_putendl("\nMain structure allocation failed\n");
	else if (error == 0)
		ft_putendl("\nNo arguments needed by ./doom-nukem\n");
	else if (error == 2)
		ft_putendl("\nFailed to initialize the structure\n");
	else if (error == 3)
		ft_putendl("\nGet_env error / option 0");
	if (error == 0 || error == 1 || error == 2)
		exit(-1);
	else
		error_exit(0, m);
}

int		main(int argc, char **argv)
{
	t_main		*m;

	(void)argv;
	if (!(m = (t_main *)malloc(sizeof(t_main))))
		main_error(0, m);
	if (argc != 1)
		main_error(1, m);
	if (struct_init(m) == -1)
		main_error(2, m);
	if (get_env(m) == -1)
		main_error(3, m);
	// mlx_processes(m);
	return(0);
}
