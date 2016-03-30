/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hponcet <hponcet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 10:55:44 by hponcet           #+#    #+#             */
/*   Updated: 2016/03/30 11:18:02 by hponcet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	char	*out;
	char	*ms_name;

	ms_name = ft_strdup("ms$> ");
	ft_putstr(ms_name);
	while (get_next_line(0, &out) > 0)
	{
		ft_putendl(out);
		free(out);
		ft_putstr(ms_name);
	}
	return (1);
}
