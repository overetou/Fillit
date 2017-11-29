/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 20:31:37 by overetou          #+#    #+#             */
/*   Updated: 2017/11/28 20:31:47 by overetou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

short	ft_check_argc(int argc)
{
	if (argc != 2)
		return (0);
	return (1);
}

short	ft_countbs(char *cpy)
{
	unsigned int	pt;
	unsigned int	htg;
	unsigned int	endl;

	while (cpy)
	{
		pt = 0;
		htg = 0;
		endl = 0;
		while (endl % 5 && *cpy)
		{
			if (*cpy == '.')
				pt++;
			if (*cpy == '#')
				htg++;
			if (*cpy == '\n')
				endl++;
			cpy++;
		}
		if ((pt + htg) % 16)
			return (0);
		cpy++;
	}
	return (1);
}

short	ft_check(int argc, char *cpy)
{
	ft_countbs(cpy);
	return(1);
}
