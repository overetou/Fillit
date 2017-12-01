/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 12:09:08 by fchevrey          #+#    #+#             */
/*   Updated: 2017/12/01 18:41:48 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

static t_point		ft_find_next_h(char **tetri, int num)
{
	t_point		crd;
	int			h;

	crd.x = -1;
	h = 0;
	while ((h < num) && (tetri[++crd.x]))
	{
		crd.y = -1;
		while (h < num && (tetri[crd.x][++crd.y]))
			if (tetri[crd.x][crd.y] == '#')
				h++;
		if (h == num)
			return (crd);
	}
	crd.x = -1;
	crd.y = -1;
	return (crd);
}

int					ft_try_place(char **map, t_tetri to_place, t_point crd)
{
	int			i;
	t_point		*crd_t;

	i = 1;
	if (!(crd_t = (t_point *)malloc(sizeof(t_point) * 4)))
		return (0);
	if (!(map[crd.x][crd.y]) || map[crd.x][crd.y] != '.')
		return (0);
	crd_t[0] = ft_find_next_h(to_place.tetri, 1);
	while (i < 4)
	{
		crd_t[i] = ft_find_next_h(to_place.tetri, i + 1);
		crd_t[i].x = crd_t[i].x - crd_t[0].x;
		crd_t[i].y = crd_t[i].y - crd_t[0].y;
		if (!(map[crd.x + crd_t[i].x][crd.y + crd_t[i].y])
			|| map[crd.x + crd_t[i].x][crd.y + crd_t[i].y] != '.')
			return (0);
		i++;
	}
	map[crd.x][crd.y] = to_place.ltr;
	i = 0;
	while (++i < 4)
		map[crd.x + crd_t[i].x][crd.y + crd_t[i].y] = to_place.ltr;
	return (1);
}
