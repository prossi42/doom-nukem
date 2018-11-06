/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_struct_lang_fr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:11:56 by awk-lm            #+#    #+#             */
/*   Updated: 2018/11/06 00:42:00 by Awklm            ###   ########.fr       */
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
	m->env.lang.editor_new_map_height = ft_strdup("longueur");
	m->env.lang.editor_new_map_floors = ft_strdup("Etages");
	m->env.lang.editor_new_map_ok = ft_strdup("Ok");
	m->env.lang.editor_new_map_exit = ft_strdup("Quitter");
	m->env.lang.editor_exit_warnings_yes = ft_strdup("Oui");
	m->env.lang.editor_exit_warnings_no = ft_strdup("Non");
	m->env.lang.editor_exit_save_current_map = ft_strdup("Voulez vous sauvegarder");
	m->env.lang.editor_exit_save_current_map2 = ft_strdup("la map en cours");
	m->env.lang.editor_exit_error_map_dir = ft_strdup("Erreur lors de l ouverture");
	m->env.lang.editor_exit_error_map_dir2 = ft_strdup("du dossier de map");
	m->env.lang.editor_exit_retry = ft_strdup("reessayer ?");
	m->env.lang.editor_exit_already_exist = ft_strdup("Une map portant ce nom");
	m->env.lang.editor_exit_already_exist2 = ft_strdup("existe deja");
	m->env.lang.editor_exit_change_it = ft_strdup("le changer ?");
	m->env.lang.editor_exit_change_it_fem = ft_strdup("la changer ?");
	m->env.lang.editor_exit_bad_width = ft_strdup("La largeur doit etre");
	m->env.lang.editor_exit_bad_width2 = ft_strdup("d au moins 3");
	m->env.lang.editor_exit_bad_height = ft_strdup("La longueur doit etre");
	m->env.lang.editor_exit_bad_height2 = ft_strdup("d au moins 3");
	m->env.lang.editor_exit_bad_floor = ft_strdup("Le nombre d'etages doit");
	m->env.lang.editor_exit_bad_floor2 = ft_strdup("etre d au moins 1");
	m->env.lang.editor_exit_error_map_creat = ft_strdup("Erreur lors de la creation");
	m->env.lang.editor_exit_error_map_creat2 = ft_strdup("de la nouvelle map");
	return(0);
}
