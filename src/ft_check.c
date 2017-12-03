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

static short	ft_iflink_incr(char *cpy, int x, int y)
{
	if (cpy[x + y] == '#')
		return (1);
	return (0);
}

static int		ft_ifhtg_countlinks(char *cpy, int x, int endl)
{
	int n;

	n = 0;
	if (cpy[x] == '#')
	{
		if (endl % 5 != 0)
			n = ft_iflink_incr(cpy, x, -5);
		if (endl % 5 < 3)
			n += ft_iflink_incr(cpy, x, 5);
		if (x)
			n += ft_iflink_incr(cpy, x, -1);
		n += ft_iflink_incr(cpy, x, 1);
	}
	return (n);
}

static short	ft_check_tetr(char *cpy)
{
	unsigned int	endl;
	int				t;
	int				x;

	endl = 0;
	x = 0;
	while (cpy[x])
	{
		t = 0;
		while (endl != 5 && cpy[x])
		{
			t += ft_ifhtg_countlinks(cpy, x, endl);
			if (cpy[x] == '\n')
				endl++;
			x++;
		}
		endl = 0;
		if (t < 6)
			return (0);
	}
	return (1);
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
	if (!ft_do_count(cpy) || !ft_check_tetr(cpy))
		return (0);
	return (1);
}
