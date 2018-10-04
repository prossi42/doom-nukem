/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_struct_lang_fr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:11:56 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/04 02:07:26 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		set_struct_lang_fr(t_main *m)
{
	m->env.lang.set_screen_size_a = ft_strdup("Changez la taille de la fenetre avec les fleches directionnelles");
	m->env.lang.set_screen_size_b = ft_strdup("Quand la taille vous convient appuyez sur : entree");
	return(0);
}
