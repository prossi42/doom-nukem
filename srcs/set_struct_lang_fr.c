/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_struct_lang_fr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:11:56 by awk-lm            #+#    #+#             */
/*   Updated: 2018/10/31 01:27:18 by Awklm            ###   ########.fr       */
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
	m->env.lang.editor_new_map_settings = ft_strdup("Parametres de la nouvelle map");
	m->env.lang.editor_new_map_name = ft_strdup("Nom");
	m->env.lang.editor_new_map_width = ft_strdup("Largeur");
	m->env.lang.editor_new_map_height = ft_strdup("Hauteur");
	m->env.lang.editor_new_map_floors = ft_strdup("Etages");
	m->env.lang.editor_new_map_ok = ft_strdup("Ok");
	m->env.lang.editor_new_map_exit = ft_strdup("Quitter");
	m->env.lang.editor_exit_warnings_yes = ft_strdup("Oui");
	m->env.lang.editor_exit_warnings_no = ft_strdup("Non");
	m->env.lang.editor_exit_save_current_map = ft_strdup("Voulez vous sauvegarder");
	m->env.lang.editor_exit_save_current_map2 = ft_strdup("la map en cours");
	return(0);
}
