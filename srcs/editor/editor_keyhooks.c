/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_keyhooks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 13:55:35 by Awklm             #+#    #+#             */
/*   Updated: 2018/11/06 00:20:30 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

char	editor_new_map_keycode_to_char(int keycode)
{
	if (keycode == 0)
		return('a');
	else if (keycode == 11)
		return('b');
	else if (keycode == 8)
		return('c');
	else if (keycode == 2)
		return('d');
	else if (keycode == 14)
		return('e');
	else if (keycode == 3)
		return('f');
	else if (keycode == 5)
		return('g');
	else if (keycode == 4)
		return('h');
	else if (keycode == 34)
		return('i');
	else if (keycode == 38)
		return('j');
	else if (keycode == 40)
		return('k');
	else if (keycode == 37)
		return('l');
	else if (keycode == 46)
		return('m');
	else if (keycode == 45)
		return('n');
	else if (keycode == 31)
		return('o');
	else if (keycode == 35)
		return('p');
	else if (keycode == 12)
		return('q');
	else if (keycode == 15)
		return('r');
	else if (keycode == 1)
		return('s');
	else if (keycode == 17)
		return('t');
	else if (keycode == 32)
		return('u');
	else if (keycode == 9)
		return('v');
	else if (keycode == 13)
		return('w');
	else if (keycode == 7)
		return('x');
	else if (keycode == 16)
		return('y');
	else if (keycode == 6)
		return('z');
	else if (keycode == 82)
		return('0');
	else if (keycode == 83)
		return('1');
	else if (keycode == 84)
		return('2');
	else if (keycode == 85)
		return('3');
	else if (keycode == 86)
		return('4');
	else if (keycode == 87)
		return('5');
	else if (keycode == 88)
		return('6');
	else if (keycode == 89)
		return('7');
	else if (keycode == 91)
		return('8');
	else if (keycode == 92)
		return('9');
	return('\0');
}

void	editor_new_map_keykooks(int keycode, t_main *m)
{
	if (keycode == 48)//tab
	{
		if (m->editor.ed_n_map.write < 4)
			m->editor.ed_n_map.write++;
		else
			m->editor.ed_n_map.write = 1;
	}
	else if (keycode == 36)//enter
	{
		m->editor.ed_n_map.write = 0;
	}
	else if (keycode == 51)//backspace
	{
		if (m->editor.ed_n_map.write == 1)
		{
			if (m->editor.ed_n_map.index_name > 0)
			{
				m->editor.ed_n_map.n_map_name = ft_strdel_last_char(m->editor.ed_n_map.n_map_name);
				m->editor.ed_n_map.index_name--;
			}
		}
		else if (m->editor.ed_n_map.write == 2)
		{
			if (m->editor.ed_n_map.index_width > 0)
			{
				m->editor.ed_n_map.n_map_width = ft_strdel_last_char(m->editor.ed_n_map.n_map_width);
				m->editor.ed_n_map.index_width--;
			}
		}
		else if (m->editor.ed_n_map.write == 3)
		{
			if (m->editor.ed_n_map.index_height > 0)
			{
				m->editor.ed_n_map.n_map_height = ft_strdel_last_char(m->editor.ed_n_map.n_map_height);
				m->editor.ed_n_map.index_height--;
			}
		}
		else if (m->editor.ed_n_map.write == 4)
		{
			if (m->editor.ed_n_map.index_floors > 0)
			{
				m->editor.ed_n_map.n_map_floors = ft_strdel_last_char(m->editor.ed_n_map.n_map_floors);
				m->editor.ed_n_map.index_floors--;
			}
		}
	}
	else
	{
		if (m->editor.ed_n_map.write == 1)
		{
			if (m->editor.ed_n_map.index_name < 10)
			{
				m->editor.ed_n_map.n_map_name = ft_strcat_char(m->editor.ed_n_map.n_map_name, editor_new_map_keycode_to_char(keycode));
				m->editor.ed_n_map.index_name++;
			}
		}
		else if (m->editor.ed_n_map.write == 2)
		{
			if (m->editor.ed_n_map.index_width < 3)
			{
				if ((keycode >= 82 && keycode <= 89) || (keycode >= 91 && keycode <= 92))
				{
					m->editor.ed_n_map.n_map_width = ft_strcat_char(m->editor.ed_n_map.n_map_width, editor_new_map_keycode_to_char(keycode));
					m->editor.ed_n_map.index_width++;
				}
			}
		}
		else if (m->editor.ed_n_map.write == 3)
		{
			if (m->editor.ed_n_map.index_height < 3)
			{
				if ((keycode >= 82 && keycode <= 89) || (keycode >= 91 && keycode <= 92))
				{
					m->editor.ed_n_map.n_map_height = ft_strcat_char(m->editor.ed_n_map.n_map_height, editor_new_map_keycode_to_char(keycode));
					m->editor.ed_n_map.index_height++;
				}
			}
		}
		else if (m->editor.ed_n_map.write == 4)
		{
			if (m->editor.ed_n_map.index_floors < 1)
			{
				if ((keycode >= 82 && keycode <= 89) || (keycode >= 91 && keycode <= 92))
				{
					m->editor.ed_n_map.n_map_floors = ft_strcat_char(m->editor.ed_n_map.n_map_floors, editor_new_map_keycode_to_char(keycode));
					m->editor.ed_n_map.index_floors++;
				}
			}
		}
	}
}

void	editor_keyhooks_reset_values(t_main *m)
{
	m->editor.new_map_settings = 0;
	m->editor.ed_n_map.write = 0;
}

int		editor_keyhooks(int keycode, t_main *m)
{
	if (m->editor.ed_n_map.write != 0)
	{
		editor_new_map_keykooks(keycode, m);
		editor(m);
	}
	if (keycode == 53)
	{
		if (m->editor.new_map_settings == 0)
		{
			editor_keyhooks_reset_values(m);
			// mlx_destroy_image(m->mlx.mlx_ptr, m->graph.i.mlx->img);
			mlx_clear_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
			mlx_destroy_window(m->mlx.mlx_ptr, m->mlx.win_ptr);
			mlx_launching_windows(m);
		}
	}
	return(0);
}
