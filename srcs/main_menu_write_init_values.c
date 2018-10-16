/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_menu_write_init_values.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Awklm <Awklm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 17:33:01 by Awklm             #+#    #+#             */
/*   Updated: 2018/10/10 18:15:01 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

void	main_menu_write_init_values(t_main *m, int option)
{
	m->graph.bs.color = 0xFFFFFF;
	m->graph.lt.couleur = 0xFFFFFF;
	m->graph.lt.space = 40;
	if (option == 0)
	{
		m->graph.lt.coeff = 1;
		if (m->env.main_menu_mode != 0)
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.37;
			m->graph.lt.posy = (m->graph.i.img_y / 5.3);
		}
		else
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.37;
			m->graph.lt.posy = (m->graph.i.img_y / 4.20);
		}
		awklm_string_put(m->env.lang.new_game, &m->graph);
	}
	if (option == 1)
	{
		m->graph.lt.coeff = 0.6;
		if (m->env.main_menu_mode != 0)
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.44;
			m->graph.lt.posy = (m->graph.i.img_y / 5.55);
		}
		else
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.44;
			m->graph.lt.posy = (m->graph.i.img_y / 4.37);
		}
		awklm_string_put(m->env.lang.new_game, &m->graph);
	}
	else if (option == 2)
	{
		m->graph.lt.coeff = 0.95;
		if (m->env.main_menu_mode != 1)
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.4;
			m->graph.lt.posy = (m->graph.i.img_y / 3.02);
		}
		else
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.4;
			m->graph.lt.posy = (m->graph.i.img_y / 2.65);
		}
		awklm_string_put(m->env.lang.load_game, &m->graph);
	}
	else if (option == 3)
	{
		m->graph.lt.coeff = 0.6;
		if (m->env.main_menu_mode != 1)
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.4;
			m->graph.lt.posy = (m->graph.i.img_y / 3.1);
		}
		else
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.4;
			m->graph.lt.posy = (m->graph.i.img_y / 2.7);
		}
		awklm_string_put(m->env.lang.load_game, &m->graph);
	}
	else if (option == 4)
	{
		m->graph.lt.coeff = 0.95;
		if (m->env.main_menu_mode != 2)
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.24;
			m->graph.lt.posy = (m->graph.i.img_y / 2.12);
		}
		else
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.24;
			m->graph.lt.posy = (m->graph.i.img_y / 1.92);
		}
		awklm_string_put(m->env.lang.editor, &m->graph);
	}
	else if (option == 5)
	{
		m->graph.lt.coeff = 0.6;
		if (m->env.main_menu_mode != 2)
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.18;
			m->graph.lt.posy = (m->graph.i.img_y / 2.165);
		}
		else
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.18;
			m->graph.lt.posy = (m->graph.i.img_y / 1.95);
		}
		awklm_string_put(m->env.lang.editor, &m->graph);
	}
	else if (option == 6)
	{
		m->graph.lt.coeff = 1;
		if (m->env.main_menu_mode != 3)
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.2;
			m->graph.lt.posy = (m->graph.i.img_y / 1.63);
		}
		else
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.2;
			m->graph.lt.posy = (m->graph.i.img_y / 1.505);
		}
		awklm_string_put(m->env.lang.stats, &m->graph);
	}
	else if (option == 7)
	{
		m->graph.lt.coeff = 0.6;
		if (m->env.main_menu_mode != 3)
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.35;
			m->graph.lt.posy = (m->graph.i.img_y / 1.65);
		}
		else
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.35;
			m->graph.lt.posy = (m->graph.i.img_y / 1.53);
		}
		awklm_string_put(m->env.lang.stats, &m->graph);
	}
	else if (option == 8)
	{
		m->graph.lt.coeff = 1;
		if (m->env.main_menu_mode != 4)
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.36;
			m->graph.lt.posy = (m->graph.i.img_y / 1.32);
		}
		else
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.36;
			m->graph.lt.posy = (m->graph.i.img_y / 1.24);
		}
		awklm_string_put(m->env.lang.settings, &m->graph);
	}
	else if (option == 9)
	{
		m->graph.lt.coeff = 0.6;
		if (m->env.main_menu_mode != 4)
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.28;
			m->graph.lt.posy = (m->graph.i.img_y / 1.34);
		}
		else
		{
			m->graph.lt.posx = m->graph.i.img_x / 2.28;
			m->graph.lt.posy = (m->graph.i.img_y / 1.255);
		}
		awklm_string_put(m->env.lang.settings, &m->graph);
	}
}
