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

#include "libft.h"

int	get_next_line(int const fd, char **line)
{
	int		ret;
	char		buf[BUFF_SIZE + 1];
	int		eof;
	static char	*afternext;
	char		*beforenext;
	
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (afternext)
		{
			line[0] = ft_strcpy(afternext);
			ft_bzero(afternext, ft_strlen(afternext));
		}
		if ((eof = ft_cindex(buf, '\n')) >= 0 || (eof = ft_cindex(buf, '\0')) >= 0)
		{
			if (!(beforenext = (char)malloc(sizeof(beforenext) * eof + 1)))
				return (-1);
			beforenext = ft_strncpy(buf, eof);
			line[0] = ft_strjoin(line[0], beforenext);
			afternext = ft_strsub(buf, eof, (ft_strlen(buf) - eof));
			if (buf[eof] == '\0')
				return (0);
			else
				return (1);
		}
		line[0] = ft_strjoin(line[0], buf);
		ft_bzero(buf, BUFF_SIZE);
	}
	if (ft_cindex(afternext, '\0') >= 0) // erreur, afternext renvera toujours '\0'
	{
		line[0] = ft_strcpy(afternext);
		return (0);
	}
	return (-1)
}
