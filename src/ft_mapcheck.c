/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 14:47:09 by fchevrey          #+#    #+#             */
/*   Updated: 2017/12/02 15:02:58 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_mapcheck(t_tetri *first,char  **map)
{
	t_tetri		*cpy;
	t_point		crd;
	int			nb_tetri;
	int			nb_find;

	cpy = first;
	nb_find = 0;
	nb_tetri = 0;
	while (cpy)
	{
		nb_tetri++;
		crd.x = -1;
		while (map[++crd.x] && nb_tetri > nb_find)
		{
			crd.y = -1;
			while (map[crd.x][++crd.y] && nb_tetri > nb_find)
				if (map[crd.x][crd.y] == cpy->ltr)
					nb_find++;
		}
		cpy = cpy->next;
	}
	if (nb_tetri == nb_find)
		return (1);
	return (0);
}
