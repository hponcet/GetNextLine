/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 17:59:47 by hponcet           #+#    #+#             */
/*   Updated: 2016/01/13 23:11:10 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 9999
# include <stdio.h>
# define DEBUG printf("__DEBUG ""%s ""%d""\n", __FILE__, __LINE__);
#include "libft.h"

int	get_next_line(int const fd, char **line);
int	ft_afternext(char *afternext, char **line);

#endif
