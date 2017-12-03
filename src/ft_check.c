/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 20:31:37 by overetou          #+#    #+#             */
/*   Updated: 2017/12/03 18:28:52 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_htg_incr(char *cpy, int x, int y)
{
	if (cpy[x + y] == '#')
		return (1);
	return (0);
}

static short	ft_check_tetr(char *cpy)
{
	int				x;
	unsigned int	endl;
	int			t;

	x = 0;
	t = 0;
	endl = 0;
	while (cpy[x])
	{
		if (cpy[x] == '#')
		{
			if (endl % 5 != 0)
				t = t + ft_htg_incr(cpy, x, -5);
			if (endl % 5 < 3)
				t = t + ft_htg_incr(cpy, x, 5);
			if (x)
				t = t + ft_htg_incr(cpy, x, -1);
			t = t + ft_htg_incr(cpy, x, 1);
		}
		if (cpy[x++] == '\n')
			endl++;
	}
	return (t >= 6 ? 1 : 0);
}

static short	ft_do_count(char *cpy)
{
	size_t	pt;
	size_t	htg;
	size_t	endl;

	while (*cpy)
	{
		pt = 0;
		htg = 0;
		endl = 0;
		while (endl != 5 && *cpy)
		{
			if (*cpy == '.')
				pt++;
			else if (*cpy == '#')
				htg++;
			else if (*cpy == '\n')
				endl++;
			else
				return (0);
			cpy++;
		}
		if (pt != 12 || htg != 4)
			return (0);
	}
	return (endl != 4 ? 0 : 1);
}

short			ft_check(char *cpy)
{
	if (!ft_do_count(cpy))
		return (0);
	if (!ft_check_tetr(cpy))
		return (0);
	return (1);
}
