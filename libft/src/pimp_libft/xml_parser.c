/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xml_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 00:20:22 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/25 18:06:10 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pimp_libft/my_libft.h"

int		init_subchild(t_xmlsubchild **subchild, t_xml *xml)
{
	if (!(*subchild = (t_xmlsubchild *)malloc(sizeof(t_xmlsubchild))))
		return(-1);
	(*subchild)->prev = NULL;
	(*subchild)->name = NULL;
	(*subchild)->content = NULL;
	(*subchild)->n = xml->n_schild;
	(*subchild)->next = NULL;
	xml->n_schild++;
	return(0);
}

int		init_child(t_xmlchild **child, t_xml *xml)
{
	if (!(*child = (t_xmlchild *)malloc(sizeof(t_xmlchild))))
		return(-1);
	(*child)->prev = NULL;
	(*child)->sc = NULL;
	(*child)->n = xml->n_child;
	(*child)->next = NULL;
	xml->n_child++;
	return(0);
}

int		init_root(t_xmlroot **root, t_xml *xml)
{
	if (!(*root = (t_xmlroot *)malloc(sizeof(t_xmlroot))))
		return(-1);
	(*root)->prev = NULL;
	(*root)->c = NULL;
	(*root)->n = xml->n_root;
	(*root)->next = NULL;
	xml->n_root++;
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

int		get_subchild(t_xml *xml, char *buf, int i)
{
	int		since;
	char	*tmp;

	since = 0;
	tmp = NULL;
	while (buf[i])
	{
		if (buf[i] == '<' && buf[i - 1] == '\t' && buf[i - 2] == '\t')
		{
			if (buf[i + 1] != '/')
			{
				while (buf[i++] != '>')
					since++;
				tmp = ft_strsub(buf, i - since, since - 1);
				since = 0;
				if (xml->n_schild != 0)
				{
					xml->r->c->tmp = xml->r->c->sc;
					init_subchild(&xml->r->c->sc->next, xml);
					xml->r->c->sc = xml->r->c->sc->next;
					xml->r->c->sc->prev = xml->r->c->tmp;
				}
				else
					init_subchild(&xml->r->c->sc, xml);
				xml->r->c->sc->name = ft_strdup(tmp);
				ft_strdel(&tmp);
				while (buf[i] != '<')
				{
					since++;
					i++;
				}
				tmp = ft_strsub(buf, i - since, since);
				since = 0;
				xml->r->c->sc->content = ft_strdup(tmp);
				ft_strdel(&tmp);
			}
		}
		if (buf[i] == '<' && buf[i - 1] =='\t' && buf[i + 1] == '/')
			break ;
		i++;
	}
	xml->n_schild = 0;
	return(i);
}

int		get_child(t_xml *xml, char *buf, int i)
{
	int		since;
	char	*tmp;

	since = 0;
	tmp = NULL;
	while (buf[i])
	{
		if (buf[i] == '<' && buf[i - 1] == '\t' && buf[i - 2] != '\t')
		{
			if (buf[i + 1] != '/')
			{
				while (buf[i++] != '>')
					since++;
				tmp = ft_strsub(buf, i - since, since -1);
				since = 0;
				if (xml->n_child != 0)
				{
					xml->r->tmp = xml->r->c;
					init_child(&xml->r->c->next, xml);
					xml->r->c = xml->r->c->next;
					xml->r->c->prev = xml->r->tmp;
				}
				else
					init_child(&xml->r->c, xml);
				xml->r->c->name = ft_strdup(tmp);
				ft_strdel(&tmp);
				i = get_subchild(xml, buf, i);
			}
		}
		if (buf[i] == '<' && buf[i - 1] == '\n' && buf[i + 1] == '/')
			break;
		i++;
	}
	xml->n_child = 0;
	return(i);
}

void	get_root(t_xml *xml, char *buf, int fd)
{
	int		since;
	char	*tmp;
	char	*r_buffer;
	int		i;

	since = 0;
	tmp = NULL;
	r_buffer = NULL;
	i = 0;
	fd = open(buf, O_RDONLY);
	r_buffer = ft_strnew(BUFF_SIZE + 1);
	read(fd, r_buffer, BUFF_SIZE);
	close(fd);
	while (r_buffer[i])
	{
		if (r_buffer[i] == '<' && (i == 0 || r_buffer[i - 1] != '\t'))
		{
			if (r_buffer[i + 1] != '/')
			{
				while (r_buffer[i++] != '>')
					since++;
				tmp = ft_strsub(r_buffer, i - since, since - 1);
				since = 0;
				if (xml->n_root != 0)
				{
					xml->tmp = xml->r;
					init_root(&xml->r->next, xml);
					xml->r = xml->r->next;
					xml->r->prev = xml->tmp;
				}
				else
					init_root(&xml->r, xml);
				xml->r->name = ft_strdup(tmp);
				ft_strdel(&tmp);
				 i = get_child(xml, r_buffer, i);
			}
		}
		i++;
	}
	// ft_strdel(&r_buffer);
}

void	reboot_xml_subchild(t_xml *xml)
{
	while (xml->r->c->sc->prev != NULL)
		xml->r->c->sc = xml->r->c->sc->prev;
}

void	reboot_xml_child(t_xml *xml)
{
	if (xml->r->c->prev != NULL)
	{
		while (xml->r->c->prev != NULL)
		{
			reboot_xml_subchild(xml);
			xml->r->c = xml->r->c->prev;
		}
	}
	if (xml->r->c->prev == NULL)
		reboot_xml_subchild(xml);
}

void	reboot_xml_root(t_xml *xml)
{
	if (xml->r->prev != NULL)
	{
		while (xml->r->prev != NULL)
		{
			reboot_xml_child(xml);
			xml->r = xml->r->prev;
		}
	}
	if (xml->r->prev == NULL)
		reboot_xml_child(xml);
}

void	print_xml_subchild(t_xml *xml)
{
	if (xml->r->c->sc->next != NULL)
	{
		while (xml->r->c->sc->next != NULL)
		{
			printf("\t\t-- Subchild -- [%s][%s] -- Subchild --\n", xml->r->c->sc->name, xml->r->c->sc->content);
			xml->r->c->sc = xml->r->c->sc->next;
		}
	}
	if (xml->r->c->sc->next == NULL)
		printf("\t\t-- Subchild -- [%s][%s] -- Subchild --\n", xml->r->c->sc->name, xml->r->c->sc->content);
}

void	print_xml_child(t_xml *xml)
{
	if (xml->r->c->next != NULL)
	{
		while (xml->r->c->next != NULL)
		{
			printf("\t-- Child -- [%s] -- Child --\n", xml->r->c->name);
			print_xml_subchild(xml);
			xml->r->c = xml->r->c->next;
		}
	}
	if (xml->r->c->next == NULL)
	{
		printf("\t-- Child -- [%s] -- Child --\n", xml->r->c->name);
		print_xml_subchild(xml);
	}
}

void	print_xml_root(t_xml *xml)
{
	reboot_xml_root(xml);
	if (xml->r->next != NULL)
	{
		while (xml->r->next != NULL)
		{
			printf("\n-- Root -- [%s] -- Root --\n", xml->r->name);
			print_xml_child(xml);
			xml->r = xml->r->next;
		}
	}
	if (xml->r->next == NULL)
	{
		printf("\n-- Root -- [%s] -- Root --\n", xml->r->name);
		print_xml_child(xml);
	}
}

char	*get_subchild_value(t_xml *xml, char *path)
{
	int		i;
	int		since;
	int		pos;
	char	*tmp;

	i = 0;
	tmp = NULL;
	since = 0;
	pos = 0;
	reboot_xml_root(xml);
	while (path[i])
	{
		if (path[i] == '/' || path[i + 1] == '\0')
		{
			if (pos == 0)
			{
				tmp = ft_strsub(path, i - since, since);
				while (ft_strcmp(xml->r->name, tmp) != 0)
					xml->r = xml->r->next;
				ft_strdel(&tmp);
				pos = 1;
			}
			else if (pos == 1)
			{
				tmp = ft_strsub(path, i - since, since);
				while (ft_strcmp(xml->r->c->name, tmp) != 0)
					xml->r->c = xml->r->c->next;
				ft_strdel(&tmp);
				since = 0;
				while (path[i++])
					since++;
				tmp = ft_strsub(path, i - since, since);
				while (ft_strcmp(xml->r->c->sc->name, tmp) != 0)
					xml->r->c->sc = xml->r->c->sc->next;
				ft_strdel(&tmp);
				return (xml->r->c->sc->content);
			}
			since = -1;
		}
		since++;
		i++;
	}
	return(NULL);
}

char	*replace_subchild_value(t_xml *xml, char *path)
{
	int		i;
	int		since;
	int		pos;
	char	*tmp;

	i = 0;
	tmp = NULL;
	since = 0;
	pos = 0;
	reboot_xml_root(xml);
	while (path[i])
	{
		if (path[i] == '/')
		{
			if (pos == 0)
			{
				tmp = ft_strsub(path, i - since, since);
				while (ft_strcmp(xml->r->name, tmp) != 0)
					xml->r = xml->r->next;
				ft_strdel(&tmp);
				pos = 1;
			}
			else if (pos == 1)
			{
				tmp = ft_strsub(path, i - since, since);
				while (ft_strcmp(xml->r->c->name, tmp) != 0)
					xml->r->c = xml->r->c->next;
				ft_strdel(&tmp);
				since = 0;
				pos = 2;
			}
			else
			{
				tmp = ft_strsub(path, i - since, since);
				while (ft_strcmp(xml->r->c->sc->name, tmp) != 0)
					xml->r->c->sc = xml->r->c->sc->next;
				ft_strdel(&tmp);
				since = 0;
				while (path[i++])
					since++;
				tmp = ft_strsub(path, i - since, since);
				ft_strdel(&xml->r->c->sc->content);
				xml->r->c->sc->content = ft_strdup(tmp);
				ft_strdel(&tmp);
				return ("OK");
			}
			since = -1;
		}
		since++;
		i++;
	}
	return(NULL);
}

char	*xml_parser(char *buf, t_xml *xml, int option, int fd)
{
	if (option == 0)
		get_root(xml, buf, fd);
		// ici buf est le path du fichier xml a ouvrir
	else if (option == 1)
		reboot_xml_root(xml);
	else if (option == 2)
		print_xml_root(xml);
	else if (option == 3)
	// Il est necessaire d appeler reboot_xml_root apres l appel a get_subchild_value
		return(get_subchild_value(xml, buf));
		//ici le buf est une string sous ce format --> "root/child/subchild"
	else
		replace_subchild_value(xml, buf);
		//ici le buf est une string sous ce format --> "root/child/subchild/value"
	return(NULL);
}
