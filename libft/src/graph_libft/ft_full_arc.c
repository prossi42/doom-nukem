/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_full_arc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:30:53 by prossi            #+#    #+#             */
/*   Updated: 2018/04/13 11:30:54 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	ft_full_arc(t_graph *e, int option)
{
	ft_arc(e, option);
	while (--e->bs.ray_arc > 0)
		ft_arc(e, option);
}
