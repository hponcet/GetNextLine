/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_get_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <hponcet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 11:27:06 by hponcet           #+#    #+#             */
/*   Updated: 2016/03/30 14:48:59 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ms_minishell.h"
#include <fcntl.h>

int		ms_get_cmd(void)
{
	char	*cmd;

	cmd = ft_strnew(CMD_SIZE);
	// inserer ici pour la gestion du ";"
	
}
