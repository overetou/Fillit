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

static short	ft_htg_incr(char *cpy, int x, int y)
{
	if (cpy[x + y] == '#')
		return (1);
	return (0);
}

static short	ft_check_tetr(char *cpy)
{
	int				x;
	unsigned int	endl;
	short			n;

	x = 0;
	endl = 0;
	while (cpy[x])
	{
		n = 0;
		if (cpy[x] == '#')
		{
			if (endl % 5 != 0)
				n = n + ft_htg_incr(cpy, x, -5);
			if (endl % 5 < 3)
				n = n + ft_htg_incr(cpy, x, 5);
			if (x)
				n = n + ft_htg_incr(cpy, x, -1);
			n = n + ft_htg_incr(cpy, x, 1);
			if (n < 1)
				return (0);
		}
		if (cpy[x++] == '\n')
			endl++;
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
	if (!ft_countbs(cpy) || !ft_check_tetr(cpy))
		return (0);
	return (1);
}
