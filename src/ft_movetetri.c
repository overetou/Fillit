/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movetetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: overetou <overetou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 20:38:53 by overetou          #+#    #+#             */
/*   Updated: 2017/11/30 20:38:58 by overetou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_tetri	*ft_mvup(t_tetri *link, t_point up)
{
	t_point	p;
	int		i;

	while (up.x)
	{
		i = 0;
		p = up;
		while (i != 4)
		{
			if (link->tetri[p.x][p.y] == '#')
			{
				i++;
				link->tetri[p.x - 1][p.y] = '#';
				link->tetri[p.x][p.y] = '.';
			}
			if (p.y++ == 3)
			{
				p.x++;
				p.y = 0;
			}
		}
		up.x--;
	}
	return (link);
}

static t_tetri	*ft_mvleft(t_tetri *link, t_point up, int y, int i)
{
	t_point	p;

	up.x = 0;
	while (y)
	{
		p = up;
		i = 0;
		while (i != 4)
		{
			if (link->tetri[p.x][p.y] == '#')
			{
				i++;
				link->tetri[p.x][p.y - 1] = '#';
				link->tetri[p.x][p.y] = '.';
			}
			if (p.y++ == 3)
			{
				p.x++;
				p.y = 0;
			}
		}
		up.y--;
		y--;
	}
	return (link);
}

t_tetri			*ft_movetetri(t_tetri *link, short i)
{
	t_point	p;
	t_point	up;
	short	left_min;

	p.x = 0;
	p.y = 0;
	while (i != 4)
	{
		if (link->tetri[p.x][p.y] == '#')
		{
			if (i++ == 0)
			{
				up = p;
				left_min = up.y;
			}
			else if (p.y < left_min)
				left_min = p.y;
		}
		if (p.y++ == 3)
		{
			p.x++;
			p.y = 0;
		}
	}
	return (ft_mvleft(ft_mvup(link, up), up, left_min, 0));
}
