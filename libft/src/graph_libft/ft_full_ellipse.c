/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_full_ellipse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:30:59 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 11:31:00 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_full_ellipse(t_stuff *e, int piece, int option)
{
	ft_ellipse(e, piece, option);
	while (--e->bs.width > 0)
		ft_ellipse(e, piece, option);
	while (--e->bs.height > 0)
		ft_ellipse(e, piece, option);
}
