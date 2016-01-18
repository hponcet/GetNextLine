/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:59:47 by hponcet           #+#    #+#             */
/*   Updated: 2015/01/13 23:11:10 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <fcntl.h>

int	get_next_line(int const fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	int		eof;
	static char	*afternext;
	char		*beforenext;

	ft_bzero(buf, ft_strlen(buf));
	DEBUG
	line[0] = ft_strnew(0);
	if (ft_afternext(afternext, line) > 0)
		return (1);
	while ((read(fd, buf, BUFF_SIZE)) > 0)
	{
		DEBUG
		ft_putendl("le buffer est :");
		ft_putendl(buf);
		if (ft_afternext(afternext, line) > 1)
			return (1);
		DEBUG
		if ((eof = ft_cindex(buf, '\n')) >= 0)
		{
		DEBUG
			beforenext = ft_strsub(buf, 0, eof);
			line[0] = ft_strjoin(line[0], beforenext);
			afternext = ft_strdup(buf + eof + 1);
		DEBUG
			return (1);
		}
		line[0] = ft_strjoin(line[0], buf);
		ft_bzero(buf, BUFF_SIZE);
		DEBUG
	}
	if ((read(fd, buf, BUFF_SIZE)) < 0 || line == NULL)
		DEBUG
		return (-1);
	return (0);
}

int	ft_afternext(char *afternext, char **line)
{
	int	i;
	char	*tmp;

		DEBUG
	if (afternext)
	{
		DEBUG
		i = ft_cindex(afternext, '\n');
		ft_putnbr(i);
		if (i > 0)
		{
		DEBUG
			line[0] = ft_strsub(afternext, 0, i);
			tmp = ft_strsub(afternext, i + 1, (ft_strlen(afternext) - i + 1));
			ft_strclr(afternext);
			afternext = ft_strcpy(afternext, tmp);
			return (1);
		}
		else
		{
		DEBUG
			line[0] = ft_strjoin(line[0], afternext);
			ft_strclr(afternext);
			return (0);
		}
	}
		DEBUG
	return (0);
}
