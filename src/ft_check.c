/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 20:31:37 by overetou          #+#    #+#             */
/*   Updated: 2017/11/29 16:39:49 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static short	ft_countbs(char *cpy)
{
	unsigned int	pt;
	unsigned int	htg;
	unsigned int	endl;
	unsigned int	x;

	x = 0;
	while (cpy[x])
	{
		pt = 0;
		htg = 0;
		endl = 0;
		while (endl != 5 && cpy[x])
		{
			if (cpy[x] == '.')
				pt++;
			if (cpy[x] == '#')
				htg++;
			if (cpy[x] == '\n')
				endl++;
			x++;
		}
		if (pt != 12 || htg != 4 || endl != 5)
			return (0);
	}
	return (1);
}

short			ft_check(char *cpy)
{
	if (!ft_countbs(cpy))
		return (0);
	return(1);
}
