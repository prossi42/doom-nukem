/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 09:32:09 by prossi            #+#    #+#             */
/*   Updated: 2018/09/28 16:17:04 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph_libft/graph_libft.h"

void	a(t_graph *e)
{
	ft_init_segment_a(e, 0);
	ft_segment(e);
	ft_init_segment_a(e, 1);
	ft_segment(e);
	ft_init_segment_a(e, 2);
	ft_segment(e);
	ft_init_segment_a(e, 3);
	ft_segment(e);
	ft_init_segment_a(e, 4);
	ft_segment(e);
	ft_init_segment_a(e, 5);
	ft_segment(e);
	ft_init_segment_a(e, 6);
	ft_segment(e);
	ft_init_segment_a(e, 7);
	ft_segment(e);
	ft_init_segment_a(e, 8);
	ft_segment(e);
}
