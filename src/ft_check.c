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

short			ft_check_argc(int argc)
{
	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	return (1);
}

static short	ft_countbs(char *cpy)
{
	unsigned int	pt;
	unsigned int	htg;
	unsigned int	endl;

	while (*cpy)
	{
		pt = 0;
		htg = 0;
		endl = 0;
		while (endl != 5 && *cpy)
		{
			if (*cpy == '.')
				pt++;
			if (*cpy == '#')
				htg++;
			if (*cpy == '\n')
				endl++;
			cpy++;
		}
		if (pt != 12 || htg != 4 || endl != 5)
			return (0);
	}
	return (1);
}

short			ft_check(char *cpy)
{
	if (!ft_countbs(cpy))
	{
		ft_putstr("error\n");
		return (0);
	}
	return(1);
}
