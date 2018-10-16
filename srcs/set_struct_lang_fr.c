/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_struct_lang_fr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:11:56 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/10 08:25:40 by Awklm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doomnukem.h"

int		set_struct_lang_fr(t_main *m)
{
	m->env.lang.set_screen_size_a = ft_strdup("Changez la taille de la fenetre avec les fleches directionnelles");
	m->env.lang.set_screen_size_b = ft_strdup("Quand la taille vous convient appuyez sur : entree");
	m->env.lang.new_game = ft_strdup("Nouvelle partie");
	m->env.lang.load_game = ft_strdup("Charger partie");
	m->env.lang.editor = ft_strdup("Editeur");
	m->env.lang.stats = ft_strdup("statistiques");
	m->env.lang.settings = ft_strdup("Parametres");
	return(0);
}
