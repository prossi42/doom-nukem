/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xml_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 00:20:22 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/21 02:39:02 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pimp_libft/my_libft.h"

int		init_subchild(t_xmlsubchild **subchild)
{
	if (!(*subchild = (t_xmlsubchild *)malloc(sizeof(t_xmlsubchild))))
		return(-1);
	(*subchild)->prev = NULL;
	(*subchild)->name = NULL;
	(*subchild)->content = NULL;
	(*subchild)->next = NULL;
	return(0);
}

int		init_child(t_xmlchild **child)
{
	if (!(*child = (t_xmlchild *)malloc(sizeof(t_xmlchild))))
		return(-1);
	(*child)->prev = NULL;
	(*child)->sc = NULL;
	(*child)->next = NULL;
	return(0);
}

int		init_root(t_xmlroot **root)
{
	if (!(*root = (t_xmlroot *)malloc(sizeof(t_xmlroot))))
		return(-1);
	(*root)->prev = NULL;
	(*root)->c = NULL;
	(*root)->next = NULL;
	return(0);
}

int		create_new_list(t_xml *xml, int option)
{
	(void)xml;
	(void)option;
	return(0);
}

t_xml	init_xml_struct(void)
{
	t_xml	xml;

	xml.n_root = 0;
	xml.n_child = 0;
	xml.n_schild = 0;
	xml.r = NULL;
	return(xml);
}

void	get_root(t_xml *xml, char *buf)
{
	int		pos;
	int		since;
	char	*tmp;
	int		i;

	pos = 0;
	since = 0;
	tmp = NULL;
	i = 0;
	(void)xml;
	while (buf[i])
	{
		if (buf[i] == '<' && (i == 0 || buf[i - 1] != '\t'))
		{
			if (buf[i + 1] != '/')
			{
				while (buf[i++] != '>')
					since++;
				tmp = ft_strsub(buf, i - since, since - 1);
				since = 0;
				ft_putendl(tmp);
				// break;
			}
		}
		i++;
	}
}

t_xml	xml_parser(char *buf)
{
	t_xml	xml;
	int		i;

	i = 0;
	xml = init_xml_struct();
	get_root(&xml, buf);
	// init_root(&xml.r);
	// xml.r->n = xml.n_root;
	(void)buf;
	return(xml);
}
