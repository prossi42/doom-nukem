/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_new_map_settings_clear_all_fields.c         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 02:23:01 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/02 03:16:39 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	editor_new_map_settings_clear_all_fields(t_main *m)
{
	m->editor.ed_n_map.write = 0;
	ft_bzero(m->editor.ed_n_map.n_map_name, ft_strlen(m->editor.ed_n_map.n_map_name));
	m->editor.ed_n_map.index_name = 0;
	ft_bzero(m->editor.ed_n_map.n_map_width, ft_strlen(m->editor.ed_n_map.n_map_width));
	m->editor.ed_n_map.index_width = 0;
	ft_bzero(m->editor.ed_n_map.n_map_height, ft_strlen(m->editor.ed_n_map.n_map_height));
	m->editor.ed_n_map.index_height = 0;
	ft_bzero(m->editor.ed_n_map.n_map_floors, ft_strlen(m->editor.ed_n_map.n_map_floors));
	m->editor.ed_n_map.index_floors = 0;
}
