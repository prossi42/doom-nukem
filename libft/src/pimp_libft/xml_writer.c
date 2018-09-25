/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xml_writer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awk-lm <awk-lm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 02:01:40 by awk-lm            #+#    #+#             */
/*   Updated: 2018/09/24 17:37:55 by awk-lm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pimp_libft/my_libft.h"

void	xml_subchild_writer(t_xml *xml, int fd)
{
	ft_putstr_fd("\t\t<", fd);
	ft_putstr_fd(xml->r->c->sc->name, fd);
	ft_putstr_fd(">", fd);
	ft_putstr_fd(xml->r->c->sc->content, fd);
	ft_putstr_fd("</", fd);
	ft_putstr_fd(xml->r->c->sc->name, fd);
	ft_putstr_fd(">\n", fd);
}

void	xml_child_writer(t_xml *xml, int fd)
{
	ft_putstr_fd("\t<", fd);
	ft_putstr_fd(xml->r->c->name, fd);
	ft_putstr_fd(">\n", fd);
	if (xml->r->c->sc->next != NULL)
	{
		while (xml->r->c->sc->next != NULL)
		{
			xml_subchild_writer(xml, fd);
			xml->r->c->sc = xml->r->c->sc->next;
		}
	}
	if (xml->r->c->sc->next == NULL)
		xml_subchild_writer(xml, fd);
	ft_putstr_fd("\t</", fd);
	ft_putstr_fd(xml->r->c->name, fd);
	ft_putstr_fd(">\n", fd);
}

void	xml_root_writer(t_xml *xml, int fd)
{
	ft_putstr_fd("<", fd);
	ft_putstr_fd(xml->r->name, fd);
	ft_putstr_fd(">\n", fd);
	if (xml->r->c->next != NULL)
	{
		while (xml->r->c->next != NULL)
		{
			xml_child_writer(xml, fd);
			xml->r->c = xml->r->c->next;
		}
	}
	if (xml->r->c->next == NULL)
		xml_child_writer(xml, fd);
	ft_putstr_fd("</", fd);
	ft_putstr_fd(xml->r->name, fd);
	ft_putstr_fd(">\n", fd);
}

void	xml_writer(t_xml *xml, int fd, char *path)
{
	int		i;
	char	*buf;

	i = -1;
	reboot_xml_root(xml);
	fd = open(path, O_RDONLY);
	buf = ft_strnew(BUFF_SIZE + 1);
	read(fd, buf, BUFF_SIZE);
	close(fd);
	fd = open(path, O_WRONLY);
	while (buf[++i])
		ft_putstr_fd("\0", fd);
	close(fd);
	ft_strdel(&buf);
	fd = open(path, O_WRONLY);
	if (xml->r->next != NULL)
	{
		while (xml->r->next != NULL)
		{
			xml_root_writer(xml, fd);
			xml->r = xml->r->next;
		}
	}
	if (xml->r->prev == NULL)
		xml_root_writer(xml, fd);
	reboot_xml_root(xml);
}
